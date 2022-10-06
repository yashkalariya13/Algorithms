#include<stdio.h>
void main()
{
	float Pizza_Price,Quantity,Amount,Net_amount,Discount;
	printf("Enter the Pizza Price: ");
	scanf("%f",&Pizza_Price);
	printf("Enter the Quantity: ");
	scanf("%f",&Quantity);
	Amount=Pizza_Price*Quantity;

	if(Quantity>=5)
	{
		printf("Total Amount: %.2f \n",Amount);
		Discount=Amount*20/100;
		Net_amount=Amount-Discount;
		printf("Discount on Price: %.2f\n",Discount);
		printf("Net amount is: %.2f\n",Net_amount);
		printf("Extra Free Gralic Bread to U \n");
	}
	
	else if(Quantity>=2 && Quantity<=4)
	{
		printf("Total Amount: %.2f \n",Amount);
		Discount=Amount*5/100;
		printf("Discount on Price: %.2f\n",Discount);
		Net_amount=Amount-Discount;
		printf("Net amount is: %.2f\n",Net_amount);
		printf("Extra Free Choko Lava cake to U \n");
	}
	
	else
	{
		printf("Total Amount: %.2f",Amount);
	}
	
}

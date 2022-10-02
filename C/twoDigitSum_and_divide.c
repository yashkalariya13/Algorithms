 #include<stdio.h>
void main()
{
 int number= 10;
 int t , rem, sum=0;
 


 //  printf("%d",sum);

  for(int i=1 ; i<=1000; i++)
    {
      if(i%number==0 && i!=number)
      {
         t=i;
         while(t!=0)
           {
             rem = t%10;
             sum=sum+rem;
             t=t/10;
           }
        if(sum==number)
        {
          printf("%d\n",i);
        }
      }
      
    }
}

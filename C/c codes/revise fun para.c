#include"stdio.h"
float sub();
void add();
void mul();
void main()
{
int a=100;
int b=200;
scanf("%d",&a);
scanf("%d",&b);
float c;
c=sub(a,b); //1

 printf("\n%f",c);
add(a,b);//2
mul(); //3
}

//1.function with other (int , float) return type and two parameter
float sub(int ab, int ba)
{
int d;
float k;
k=ab-ba;
return k;
}

//2.function with void return type and two parameter
void add(int a, int b)
{
int c;
c=a+b;
printf("\n%d",c); //300
}

//3.function with void return type and no parameter
void mul()
{
int a=100;
int b=200;
int c;
c=a*b;
printf("\n%d",c);
}

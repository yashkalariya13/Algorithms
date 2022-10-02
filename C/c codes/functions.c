#include<stdio.h>
void add();
void sub();
void main()            // grp of statement executed only when it is called
{
	printf("\n inside main fun");
	
	add();  
	sub ();           //calling of fun |imp|  at time of call it starts executing from add funcion and then back to previous
	
	printf("\n hello");
	
}
void add()             // not called function so not printed    zero parameter  fun def or body
{
	printf("\n inside add fun"); 	//calling itself will recursive
}
void sub ()             // not called function so not printed    zero parameter
{
	printf("\n inside sub fun");
	
} // fun prototype = void add(); write above main function

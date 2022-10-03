#include <stdio.h>
//struct stu
//{
//	int rno;  //4
//	int prn;  //4
//};
//int main()
//{
//	struct stu s1;  
//	struct stu s2;
//	
//	printf("enter roll no and prn no for student 1 \n");
//	scanf("%d\t %d",&s1.rno,&s1.prn);
//	printf("enter roll no and prn no for student 2 \n");
//	scanf("%d\t %d",&s2.rno,&s2.prn);
//
//	printf("roll no = %d\t prn no = %d\n ",s1.rno,s1.prn);
//
//	printf("roll no = %d\t prn no = %d\n",s2.rno,s2.prn);
//	
//	printf("size of s1 is %d",sizeof(s1));
//	
//	return 0;
//}



struct stu
{
	int rno;  //4
	int prn;  //4
};
int main()
{
	struct stu s[3];   //array of objects 
		int i; 
	
	for(i=0;i<3;i++)
	{
	    printf("enter roll no and prn no for student %d  \n",i+1);
		scanf("%d",&s[i].rno);
		scanf("%d",&s[i].prn);
	}
	for(i=0;i<3;i++)
	{
		printf(" roll no and prn no for student %d  \n",i+1);
		printf("\t%d\n",s[i].rno);
		printf("\t%d\n",s[i].prn);
	}
	return 0;
}

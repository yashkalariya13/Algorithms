#include<stdio.h>
#include<string.h>

void main()
{
	char name[1024]="mitaoe hii";  //string array always end with \o
	
//	char n1='A';
	printf("%d",name);         //%d = will print ascii value   
	printf("\n%c",name);         //%c character value

//	printf("%c",name[4]);  //to print single character
//	
//	scanf("%s",name);
//	printf("\n%s",name);



/*    char name[15];
    char n1='q',n2='Q';
    printf("\n enter your name     ");
    scanf("%s",name);
	  printf("\n name is %s",name);
  printf("\nascii value q is %d\nascii value Q is %d",n1,n2);
*/ 




//       1)    string length
/*	char name[6];
 	scanf("%s",name);
	int l = strlen(name);                                    //to calcuate length of string
 	printf("\n string length is %d",l);
*/



//       2)    string copy
/*	char name[10] ;
 	char name1[10];
 	
 	scanf("%s",name);
	printf("\n%s",name);
 	
 	strcpy(name1,name)  ;                                  //to copy name from one string to another (destination , source)
 	printf("\n name1 is %s",name1);
    printf("\n name is %s",name);





//           3)  string compare

/*	char n1[10] ;
	char n2[10];

	printf("\n enter your first name     ");
	scanf("%s",n1);
	printf("\n%s",n1);
	printf("\n enter your last name      ");
	scanf("%s",n2);
	printf("\n%s",n2);
	
     //alphabates are considered by lexicographic order (dictionary order) 
		int res = strcmp(n1,n2);              // name character array  //to compare values     all equal = 1 , first smaller -1 , first larger +1
                                               
	//	int res = strcmp("mit","mit");         // string  // can give directly also
	//printf("%d",res);                                                //%d as 0,-1,+1
	
	if(res==0)
	{
		printf("\n both are equal ");
	}
	else if(res>0)
	{
		printf("\n first is greater ");
	}
	else if(res<0)
	{
		printf("\n first is smaller ");
	} 
*/
	
	
	
	
	
	
//          4) string  concatination

/*	char n1[10] ;
	char n2[10];

	printf("\n enter your first name     ");
	scanf("%s",n1);
	printf("\n%s\n",n1);
	printf("\n enter your last name      ");
	scanf("%s",n2);
	printf("\n%s\n",n2);
	
	strcat(n1,n2);                         //strng concatination = attatch one strng to other
	printf("\n output concatination is %s",n1);
	
	int l=strlen(n1);
	printf("\n\n length of output concatination is %d",l);
*/



//          5)  string reverse 
/*	char n1[10] ;
	printf("\n enter your first name     ");
	scanf("%s",n1);
	printf("\n%s\n",n1);
	strrev(n1);
	printf("\n output reverse is %s",n1);
*/



//             6) sub string
 	/*char n1[10];
	char n2[10];

	printf("\n enter your first name     ");
	scanf("%s",n1);
	printf("\n%s\n",n1);
	printf("\n enter your last name      ");
	scanf("%s",n2);
	printf("\n%s\n",n2);
	
//	strstr(n1,n2)         // (n1 = to where ,n2 = to whom)
	if(strstr(n1,n2)==NULL)                               // 0 CHALEGA KYA   ??????????????????????????????????????
	{
		printf("\n SUBSTRING NOT AVAILABLE");	
	}
	else
	{
		printf("\n SUBSTRING  AVAILABLE");	
	}*/


	








}

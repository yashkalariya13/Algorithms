#include<stdio.h>
void main()
{
    int count2 = 0;
int graph[20][20];
    int n,j,i;
    for(i=0;i<20;i++)
        for(j=0;j<20;j++)
        graph[i][j]=0;
    printf("Enter no of vertices : ");//vertex assumed to start from 0
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,k;
        // printf("enter vertices adj to vertex %d(-1 for exit) : ",i);
       // scanf("%d",&m);
       // while(m!=-1)
       // {
       //     graph[i][m]=1;
       //     scanf("%d",&m);
       // }
       printf("Enter no of vertices adjacent to vertex %d : ",i);
       scanf("%d",&m);
       printf("enter %d adj vertices : ",m);
  for(j=0;j<m;j++)
       {
          scanf("%d",&k);
          graph[i][k]=1;
          //graph[k][i]=1; if undirected graph
       }
   }
   for(i=0;i<6;i++)
   {
    int j;
        for(j=0;j<6;j++)
          printf("%d ",graph[i][j]);
        printf("\n");
   }
   //vertex with highest neighbour
   int count=0,vertex=0;
   for(i=0;i<n;i++)
   {
    count2=0;
    for(j=0;j<n;j++)
    {
    if(graph[i][j]==1)
    count2++;
}
if(count2>count) {count=count2;vertex=i;}
   }
   printf("\nvertex with highest neighbour : %d\n",vertex);
   //vertex with max incoming edges in directed graph
   count=0,vertex=0;
   for(i=0;i<n;i++)
   {
    count2=0;
    for(j=0;j<n;j++)
    {
    if(graph[j][i]==1)
    count2++;
}
if(count2>count) {count=count2;vertex=i;}
   }
   printf("\nvertex with max incoming edges in directed graph : %d\n",vertex);
   //vertex having no outgoing edge
   vertex=0;
   printf("\nvertex having no outgoing edge : ");
   for(i=0;i<n;i++)
   {
    count=0;
    for(j=0;j<n;j++)
    {
    count=0;
    if(graph[j][i]==1)
    count++;
}
if(count==0) {printf("%d,",i);}
   }
   //vertex disconnected with all other vertices
   printf("\nvertex disconnected with other vertices : ");
   for(i=0;i<n;i++)
   {
    int flag=1; 
    for(j=0;j<n;j++)
    {
  if(graph[i][j]==1){flag=0;break;}
}
if(flag==1)
{
for(j=0;j<n;j++)
{
if(graph[j][i]==1) break;
}
if(j=n) printf("%d,",i);
}
   }
   //vertex connected with all other vertices
   printf("\nvertex connected with other vertices : ");
   for(i=0;i<n;i++)
   {
    int flag=1;
    for(j=0;j<n;j++)
    {
  if(graph[i][j]==0){flag=0;break;}
}
if(flag=1) printf("%d,",i);
   }
}
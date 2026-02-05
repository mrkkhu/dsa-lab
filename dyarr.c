#include<stdio.h>
#include<stdlib.h>
int main()
{
int *p=NULL,i,n=0;
printf("enter total no of elements\n");
scanf("%d",&n);
p=(int*)malloc(n*sizeof(int));
for(i=0;i<n;i++)
{
scanf("%d",(p+i));
}
return 0;
}

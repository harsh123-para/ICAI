//Today's Date is 16/09/2022
//Code By Dr.Anand Paradkar
//(Sr.Faculty Prema Computer)
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[3][3];	
int i,j,k;
printf("Enter Values in Matrix ");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&a[i][j]);	
}	
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
k=a[i][j];
a[i][j]=a[j][i];	
a[j][i]=k;	
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)	
{
printf("%d",a[i][j]);
}
printf("\n");
}
return 0;
}



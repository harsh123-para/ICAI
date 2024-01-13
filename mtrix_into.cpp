//Today's Date is 13/09/2024
//Code By Dr.Anand Paradkar
//(Sr.Faculty Prema Computer)
#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[5][2],b[2][3],c[5][3];
int i,j,k;
printf("Enter Values in First Matrix ");
for(i=0;i<5;i++)
{
for(j=0;j<2;j++)
{
scanf("%d",&a[i][j]);	
}	
}
printf("Enter Values in Second Matrix ");
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&b[i][j]);	
}	
}
for(i=0;i<5;i++)
{
for(j=0;j<3;j++)
{
	c[i][j]=0;
for(k=0;k<2;k++)	
{
c[i][j]=c[i][j]+a[i][k]*b[k][j];
}	
printf("%d",c[i][j]);
}
printf("\n");	

}
return 0;
}



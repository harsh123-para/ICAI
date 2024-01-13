//Today's Date is 16/09/2022
//Code By Dr.Anand Paradkar
//(Sr.Faculty Prema Computer)
#include<stdio.h>
#include<stdlib.h>
int main()
{
	void fun(int (*)[2]);
int i,j,k;
int a[][2]={1,2,3,4};
fun(a);
printf("The values r\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%3d",a[i][j]);
	}
	printf("\n");
}

return 0;
}
void fun(int (*b)[2])
{
	int i,j;
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
		b[i][j]=*(*(b+i)+j)+5;	
		}
		
	}
	
	
}




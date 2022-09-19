#include<stdio.h>
int main()
{
	int a[10],i;
	printf("enter values");
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("even numbers \n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d\n",a[i]);
		}
	}
	printf("odd numbers \n");
	for(i=0;i<7;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d\n",a[i]);
		}
	}
	
}

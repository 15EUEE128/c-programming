// c program to find the different element in an array
#include <stdio.h>
int main(void)
{
	int n,i,a[100],odd=0,even=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			even++;	
		}
		if(even>1)
		{
			if(a[i]%2==1)
			{
				printf("%d",a[i]);
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			odd++;	
		}
		if(odd>1)
		{
			if(a[i]%2==0)
			{
				printf("%d",a[i]);
			}
		}
		
	}
}

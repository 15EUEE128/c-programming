//to find maximum element in an array using bitonic way
#include <stdio.h>
int main(void)
{
	int n,a[100],i,j,s;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0,j=i+1;i<n&&j<n;i++,j++)
	{
		if(a[i]>a[j])
		{
			s=a[i];
			break;
		}
	}	
	printf("The maximum number in an array is %d",s);
	return 0;
}


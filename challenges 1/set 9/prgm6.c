#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[100];
	int i,j,n,count=1;
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
	}
	if(count>1)
	printf("No");
	else
	printf("Yes");
}

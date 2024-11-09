#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	char a='A'+n-1;
	for(i=n;i>=1;i--)
	{
		for(j=n-i+1;j>=1;j--)
		{
			printf("%c ",a);
		}
		a--;
		printf("\n");
	}
	return 0;
}
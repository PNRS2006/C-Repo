#include<stdio.h>
int main()
{
	int n,i,a;
	scanf("%d",&n);
	while(n>0)
	{
		if(n%10==7)
		{
			printf("YES");
			return 0;
		}
		n=n/10;
	}
	printf("NO");
	return 0;
}
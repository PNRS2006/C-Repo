#include<stdio.h>
int main()
{
    int m,n,a;
    scanf("%d %d",&n,&m);
    if(n<=36*m)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(b>=3*a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
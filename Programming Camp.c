#include<stdio.h>
int main()
{
    int x,y,a,b;
    scanf("%d %d",&x,&y);
    a=2*y;
    b=15*x;
    if(b>=a)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
    return 0;
}
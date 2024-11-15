#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<4)
    {
        printf("MILD");
    }
    else if(n>=4 && n<7)
    {
        printf("MEDIUM");
    }
    else
    {
        printf("HOT");
    }
    return 0;
}
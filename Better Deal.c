#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=100-a;
    d=200-(b*2);
    if(c==d)
    {
        printf("BOTH");
    }
    else if(c<d)
    {
        printf("FIRST");
    }
    else
    {
        printf("SECOND");
    }
    return 0;
}
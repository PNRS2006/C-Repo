#include<stdio.h>
int main()
{
    int b=0,n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b +=a[i];
    }
    printf("%d",b);
    return 0;
}
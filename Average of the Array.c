#include<stdio.h>
int main()
{
    int i,n;
    float b=0;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b +=a[i];
    }
    
    printf("%.2f",b/n);
    return 0;
}
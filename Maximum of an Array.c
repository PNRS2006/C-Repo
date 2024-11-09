#include<stdio.h>
#include<limits.h>
int main()
{
    int i,n,b;
    int a[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    b=INT_MIN;
    for(i=0;i<n;i++)
    {
        if(b<a[i])
        {
            b=a[i];
        }
        
    }
    printf("%d",b);
    return 0;
}
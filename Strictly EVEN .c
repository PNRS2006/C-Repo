#include<stdio.h>
int main()
{
    int n,i,b=0,c=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            b++;
        }
        if(i%2==0)
        {
            if(arr[i]%2==0)
            {
                c++;
            }
        }
    }
    if(b==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}
#include<stdio.h>
int main()
{
    long long int n, i, j, temp;
    long long int a[100000];
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)

        {if(a[i]>a[i+1])
            {temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;}
    }
    }
    for(i=0; i<n; i++)
    {
        printf("%d\n", a[i]);
    }
}

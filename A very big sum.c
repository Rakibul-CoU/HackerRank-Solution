#include<stdio.h>
int main()
{
    long long int n, i, j=0, a[1000];
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        j=j+a[i];
    }
    printf("%lld\n", j);
    return 0;
}

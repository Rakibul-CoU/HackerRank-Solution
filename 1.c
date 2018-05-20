#include<stdio.h>
int main()
{
    long long int n, i, j, a[100],b[100], temp;
    scanf("%lld", &n);
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for(i=n-1, j=0; i>=0; i--, j++)
    {
        b[j]=a[i];
    }
    for(i=0; i<n; i++){
    printf("%lld\t", b[i]);}
    return 0;
}

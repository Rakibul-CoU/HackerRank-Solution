#include<stdio.h>
int main()
{
    int n, a[1000], i, j=0, k;
    scanf("%d", &n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
      j=j+a[i];
    }
    printf("%d", j);
}

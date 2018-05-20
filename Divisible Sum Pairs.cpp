#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, i, j, k, l=0, a[10000];
    scanf("%d %d", &n, &m);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if((a[i]+a[j])%m==0)
                l++;
        }
    }
    printf("%d", l);
    return 0;
}

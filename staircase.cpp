#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i, j, k;
    scanf("%d", &n);
    for(i=n; i>=1; i--)
    {
        for(j=1; j<i; j++)
        {
            cout<<" ";
        }
        for(k=n; k>=i; k--)
        {
            cout<<"#";
        }
        cout<<"\n";
    }
    return 0;
}

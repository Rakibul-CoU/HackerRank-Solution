#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x1, y1, x2, y2, m, n;
    cin>>t;
    while(t--)
    {
        cin>>x1>>y1>>x2>>y2;
        m=2*x2-x1;
        n=2*y2-y1;
        cout<<m<<" "<<n<<endl;
    }
    return 0;
}

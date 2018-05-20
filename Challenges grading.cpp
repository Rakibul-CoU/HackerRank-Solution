#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, t, a, i, b;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>=38 && n%5>=3)
        {
            while(n%5!=0)
            {n++;}
        }
        cout<<n<<"\n";
    }

    return 0;
}

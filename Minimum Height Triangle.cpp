#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, h, j;
    cin>>b>>a;
    j=2*a;
    h=((2*a)/b);
    if(j%b==0)
        cout<<h<<endl;
    else
        cout<<h+1<<endl;
    return 0;
}

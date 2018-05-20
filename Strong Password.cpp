#include<bits/stdc++.h>
using namespace std;
int b[4]={0};
int main()
{
    int t, n=0, m=0, i, j=0, k=0, l=0, x=0;
    string a;
    cin>>t;
    for(i=0; i<t; i++)
    {
        cin>>a[i];
    }
    for(i=0; i<t; i++)
    {
        if(islower(a[i]))
            b[0]++;
        else if(isupper(a[i]))
            b[1]++;
        else if(isdigit(a[i]))
            b[2]++;
        else
            b[3]++;
    }
    /*if(n==0)
        j+=1;
    if(m==0)
        j+=1;
    if(l==0)
        j+=1;
    if(k==0)
        j+=1;
        if(n>0)
        x+=1;
    if(m>0)
        x+=1;
    if(l>0)
        x+=1;
    if(k>0)
        x+=1;
        int y=6-j-x;*/
        int c=0;
        for(i=0; i<4; i++)
        {
            if(b[i]==0)
                c++;
        }
    if(t>=6)
        cout<<c<<endl;
    else if(t<6 and c<6-t)
        cout<<6-t<<endl;
    else
        cout<<c<<endl;
    return 0;
}

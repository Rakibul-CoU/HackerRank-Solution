#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i, n;
    char st[100000];
    scanf("%d", &n);
    while(n--)
    {
        int a=0, b=0, c=0, d=0, e=0, f=0, g=0;
        scanf("%s", &st);
        int l=strlen(st);
        for(i=0; i<l; i++)
        {
            if(st[i]=='h')
                a++;
            else if(st[i]=='a')
                b++;
            else if(st[i]=='c')
                c++;
            else if(st[i]=='k')
                d++;
            else if(st[i]=='e')
                e++;
            else if(st[i]=='r')
                f++;
            else if(st[i]=='n')
                g++;
        }
        if(a%1==0 && b%2==0 && c%1==0 && d%2==0 && e%1==0 && f%2==0 && g%1==0)
            printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}

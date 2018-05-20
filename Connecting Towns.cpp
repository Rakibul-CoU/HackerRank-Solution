#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n, r = 1, v;
        cin >> n;
        n -= 1;
        for(int i = 0; i < n; ++i)
        {
            cin >> v;
            r = r * v;
            r = r % 1234567;
        }
        cout << r << endl;
    }
    return 0;
}

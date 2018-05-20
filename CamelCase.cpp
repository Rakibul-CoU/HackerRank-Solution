#include <bits/stdc++.h>
#include<assert.h>

using namespace std;


void solution() {

   string str;
   cin >> str;
   int len = str.size();
   int ans = 1;
   for(int i = 0; i < len; i++){
       if(str[i] >= 'A' && str[i] <= 'Z') {
           ans++;
       }
   }
   cout<<ans<<endl;
}


int main() {

        solution();

    return 0;
}

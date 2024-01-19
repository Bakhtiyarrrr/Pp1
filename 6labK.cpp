
#include <bits/stdc++.h>

using namespace std;
int sum(string s) {
    int k = 0;
    for(int i = 0; i < s.size(); i++) {
       k = k + (s[i] - '0');
        }
        
    
    return k;
}

int main()
{
   string s;
   cin >> s;
      
    cout <<sum(s);

    return 0;
}
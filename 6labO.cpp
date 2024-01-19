
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
   int k = sum(s); 
   
    
    if(k % (s[s.size()- 1] - '0') == 0) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }

    return 0;
}
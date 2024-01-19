#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i = 0;
    string s;
    while(cin >> s) {
     bool vivod = 1;
     for(char ch : s){
         if(ch <= '9' && ch >= '0') {
             vivod = 0;
             break;
         }
     }
     
     if(vivod) cout << s;
        
    }
    

    return 0;
}
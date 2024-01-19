
#include <bits/stdc++.h>

using namespace std;
int mix(int s[]) {
    for(int i = 0; i < 4; i++) {
       cin >> s[i];
        }
        int n = *max_element(s,s + 4);
    
    return n;
}

int main()
{
    int s[4];
      
    cout <<mix(s);

    return 0;
}
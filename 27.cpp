/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector <string> v;
    while(n > 0) {
        for(int i = 0; i < 4; i++) {
            string s;
            cin >> s;
            v.push_back(s);
            
        }
        n--;
    }
    int k;
    cin >> k;
    vector <string> t(k);
    for(int i = 0; i < k; i++) {
        cin >> t[i];
    }
    for(auto x : v) {
        cout << x << " ";
    }

    return 0;
}
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
    vector<pair <int,int >> v(n);
    vector<pair <int,int>> s(n);
    multimap <int ,int> m;
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }
 for(int i = 0; i < n; i++) {
     s[i].first = v[i].first + v[i].second;
 }
 for(int i = 0; i < n; i++) {
     s[i].second = i + 1;
 }
 for(int i = 0; i < n; i++) {
     m.insert(make_pair(s[i].first,s[i].second));
 }
 for(auto x: m) {
     cout << x.second << " ";
 }
}
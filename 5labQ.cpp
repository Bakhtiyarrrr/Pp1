#include <bits/stdc++.h>
using namespace std;

int main() { 
 string s,t;
 cin >> s>> t;
 if(t.find(s) != string :: npos) {
 if(t.size() % s.size()== 0) {
    cout << "YES";
 }
 else {
    cout << "NO";
 }
 }
 else{
    cout << "NO";
 }
 
}
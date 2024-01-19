
#include <bits/stdc++.h>

using namespace std;

int main()
{
 string s;
 cin >> s;
 int sum_even = 0;
 int sum_odd = 0;
 for(int i = 0; i < s.size(); i++) {
    if(i % 2 == 0) {
      sum_even = sum_even + s[i];
    }
    else {
        sum_odd = sum_odd + s[i];
    }
 }
 if(sum_odd == sum_even) {
    cout << "YES";
 }
 else {
    cout << "NO";
 }
}
#include <bits/stdc++.h>
using namespace std;
 
bool isPrime(int n)
{
    if (n <= 1)
        return false;
 
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int main () {
    int n;
    cin >> n;
    int num;
    vector<pair <int, bool>> a;
    for(int i = 0; i < n; i++) {
        cin >> num;
        a.push_back(make_pair(num,isPrime(num)));
       
    }
    int k;
    cin >> k;
 
    int  cnt = 0;
    for(int i = 0; i < n; i++) {
        if((a[i].second) && a[i].first > k) {
            cnt++;
        }
    }
    cout<<cnt;
}
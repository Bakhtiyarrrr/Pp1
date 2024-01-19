#include <bits/stdc++.h>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector <pair <string, string>> v(n);
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }
    int k;
    cin >> k;
    vector < pair <string ,string>> t(k);
    for(int i = 0; i < k; i++) {
        cin >> t[i].first;
        cin >> t[i].second;
    }
    for(int i = 0; i < k; i++) {
        bool loginExist = 0;
        for(int j = 0; j < n; j++) {
            if(t[i].first == v[j].first && 
            t[i].second == v[j].second) {
                cout << "correct password" << endl;
                loginExist = 1;
            }
            else if(t[i].first == v[j].first &&
            t[i].second != v[j].second) {
                cout << "password error" << endl;
                loginExist = 1;
            }

            
        }
        if(!loginExist){
            cout << "login error" << endl;
        }
    }
}

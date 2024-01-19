#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <pair <pair <string,int>, bool>> v;
    for(int i = 0; i < n; i++) {
        string s1;
        cin >> s1;
        int k1;
        cin >> k1;
        string s2;
        cin >> s2;
        int k2;
        cin >> k2;
      v.push_back({{s1 + " and " + s2, k1 + k2}, true});
    }
    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(v[i].first.first == v[j].first.first && v[i].first.second == v[j].first.second) {
                v[i].second = false;
            }
        }
    }
    sort(v.begin(),v.end());
    for(auto x : v) {
        if(x.second == true) {
            cout << x.first.first << " "  << x.first.second << endl;
        }
    }

}   

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector< pair <string, int>> v(n);
    map <string, int> m;
    for(int i = 0; i < n; i++) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end());
    for(int i = 0; i < n; i++) {
        m[v[i].first] += v[i].second;
           
            
        }
     

    for(auto x : m) {
        cout << x.first << " " << x.second << endl;
    }
    

    return 0;
}
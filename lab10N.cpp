#include <bits/stdc++.h>
using namespace std;
bool check(vector<int> a, int n) {
    bool m = true;
    for(int i = 0; i < n; i++) {
        if(a[i] != a[n - 1 - i]) {
            m = false;
        }
    }
    return m;
}
    int main () {
        int n;
        cin >> n;
        vector <int> v(n);
        vector <int> d;
        bool m = false;
        for(int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.begin(), v.end());
        do {
            
            for(auto x : v) {
             d.push_back(x);
            }
            if(check(d, d.size()) != false) {
                for(auto x : d) {
                    cout << x << " ";
                }
                cout << endl;

                return 0;
            }
            d.clear();
            
        }
        while(next_permutation(v.begin(),v.end()));
        cout << "Impossible";


    return 0;
}

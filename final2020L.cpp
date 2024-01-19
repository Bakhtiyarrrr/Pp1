#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
   int j = 0;
   vector <int> t;
    while(n > j) {
        int k;
        cin >> k;
        vector <pair <int,bool>> v(k);
        for(int i = 0; i < k; i++) {
            cin >> v[i].first;
            v[i].second = true;
        }
        for(int i = 0; i < k; i++) {
            for(int l = i + 1; l < k; l++) {
                if(v[i].first == v[l].first) {
                    v[i].second = false;
                    v[l].second = false;
                }
            }
            
        }
        int min = 1000;
        int ind = 0;
        for(int i = 0; i < k; i++) {
            if(v[i].first < min && v[i].second == true) {
                min = v[i].first;
                ind = i + 1;
            }
        }
        t.push_back(ind);
        ind = 0;
        min = 1000;
        v.clear();
        j++;
        continue;
        
    }
    for(auto x : t) {
        if(x == 0) {
            cout << "ZA WARUDO" << endl;
        }
        else {
            cout << x << endl;
        }
    }

    return 0;
}
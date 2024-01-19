#include <bits/stdc++.h>

using namespace std;
bool comp(vector <int> a, vector <int> b) {
    int sum1 = 0;
    for(int i = 0; i < a.size(); i++) {
        sum1 += a[i];
    }
    int sum2 = 0;
    for(int i = 0; i < b.size(); i++) {
        sum2 += b[i];
    }
    if(sum1 < sum2) {
        return true;
    }
    // else if(sum1 == sum2) {
    //     if(a[0] > b[0]) {
    //     return false;
    //     }
    //     else {
    //         return true;
    //     }
    // }
    else if(sum1 > sum2) {
        return false;
    }
    return a < b;
    
}





int main()
{
    int n;
    cin >> n;
    vector <vector <int>> v;
    
   int l = 0;
   
   while(n != l) {
    int m;
    cin >> m;
    vector <int> t(m);
    for(int j = 0; j < m; j++) {
        cin >> t[j];
    }
    v.push_back(t);
    l++;
   }
    
    sort(v.begin(),v.end(), comp);
    
    for(int i = 0; i < n; i++) {
       for(int j = 0; j < v[i].size(); j++) {
    cout << v[i][j] << " ";
       }
       cout << endl;
    }

    return 0;
}
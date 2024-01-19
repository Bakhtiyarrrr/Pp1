#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int main () {
    int n;
    cin >> n;
    vector<int> arr(n);
   
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    
    }
     

auto result = unique(begin(arr),end(arr));
for_each(begin(arr), result, [](int a) {
    cout << a << " ";

     } );
}

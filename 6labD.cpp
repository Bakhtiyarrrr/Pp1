#include <bits/stdc++.h>
using namespace std;
bool book(int a[],int b, int c) {
    bool t = false;
    for(int i = 0; i < b; i++) {
        if(a[i] == c) {
            t = true;
            break;
        }
        else {
            t = false;
        }
    }
    return t;
}
int main () {
    int n,k;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cin >> k;
    bool m = book(arr,n,k);
  if(m == true) {
    cout << "YES";
  }
  else {
    cout << "NO";
  }

}
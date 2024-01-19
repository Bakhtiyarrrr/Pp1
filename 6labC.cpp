#include <bits/stdc++.h>
using namespace std;
int count(int a[], int b[], int n) {
    int c = 0;
    int i = 0,j = 0;
    sort(a, a + n);
    sort(b,b + n);
    while(i < n & j < n) {
        if(a[i] == b[j]) {
            c++; 
            i++;
            j++;
        }
        else if(a[i] < b[j]) {
            i++;
        }
        else if(a[i] > b[j]) {
            j++;
        }
    }
    return c;
}


int main() {
    int n;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }
     int c = count(a,b,n);
     cout << c;
   

}


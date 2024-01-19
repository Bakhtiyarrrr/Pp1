#include <bits/stdc++.h>
using namespace std;
int main () {
int n;
cin >> n;
deque <string> v;
for(int i = 0; i < n; i++) {
    int k;
    cin >> k;
    if(k == 1) {
        string s;
        cin >> s;
        v.push_back(s);
      cout << v.front() << endl;
    }
      
      
      
    else if(k == 2) {
        v.pop_front();
        if(v.empty() == 1) {
        cout << "queue is empty" << endl;
    }
    else {
        cout << v.front() << endl;
    }
    }
      

}
}
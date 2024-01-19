
#include <iostream>

using namespace std;
int even(string s) {
    int c = 0;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] % 2 == 0) {
            c++;
        }
    }
    return c;
}

int main()
{
    string s;
    cin >> s;
    int m = even(s);
    if(m == s.size()) {
        cout << "Valid";
    }
    else {
        cout << "Not valid";
    }

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string s;
    cin >> s;
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == 1 +'0' && s[i + 1] == 1 + '0') {
            i++;
            continue;
        }
        cout << s[i];
    }

    return 0;
}
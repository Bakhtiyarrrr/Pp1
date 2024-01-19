
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    bool m = false;
    for(int i = 2; i <= sqrt(n); i++) {
        
        if(n % i == 0) {
            m = true; // если true значит есть какое то число с остатком 0 при деление n на него;
            break;
        }
    }
    if(m == true) {
        cout << "Not Prime";
    }
    else {
        cout << "prime";
    }

    return 0;
}
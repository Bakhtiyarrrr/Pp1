#include <bits/stdc++.h>

using namespace std;
int gcd (int a, int b) {
	if (b == 0)
		return a;
	else
		return gcd (b, a % b);
}




int main()
{
   int n;
   cin >> n;
   int arr[n];
   for(int i = 0; i < n; i++) {
       cin >> arr[i];
   }
   vector <int> t;
   for(int i = 0; i < n; i++) {
       for(int j = i + 1; j < n; j++) {
           t.push_back(gcd(arr[i],arr[j]));
       }
       
   }
   cout << *max_element(t.begin(),t.end());
}
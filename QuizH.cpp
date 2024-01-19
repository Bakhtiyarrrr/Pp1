





#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
   vector <pair <pair <string, double >, double >> v(n);
   for(int i =  0; i < n; i++)  {
    cin >> v[i].first.first;
    cin >> v[i].first.second;
    cin >> v[i].second;
   }
   vector < pair < string, double> > d(n);
   for(int i = 0; i < n; i++) {
   d[i].first = v[i].first.first;
    d[i].second = double(v[i].second / v[i].first.second); 
    
   }
   double  k = - 1;
   for(int i = 0; i < n; i++) {
    if(d[i].second > k) {
        k = d[i].second;
    }
   }
   for(int i = 0; i < n; i++) {
    if(k == d[i].second) {
        cout << d[i].first;
    }
   }
  
   
  
}
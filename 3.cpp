
#include <bits/stdc++.h>
using namespace std;
int main () {
    string str ;
    cin>>str;
    stack <char> st;
  
   

for(int i  = 0; i < str.size(); i++) {
    if(i == 0 || st.empty()){
        st.push(str[i]);
    }
    else{
        int d = (st.top()-'0')*10+(str[i]-'0');
        if(sqrt(d) != int(sqrt(d))){
            st.push(str[i]);
        }
        else{
            st.pop();
        }
    }
}
if(st.empty()){
    cout<<"Stack is empty";
}
else{
    while (!st.empty())
    {
        cout<<st.top();
        st.pop();
    }
    
}
return 0;
    
}
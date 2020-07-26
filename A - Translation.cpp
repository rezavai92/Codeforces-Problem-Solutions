#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){


string s,s1;
cin>>s;
cin>>s1;

reverse(s1.begin(),s1.end());

if (s==s1){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}

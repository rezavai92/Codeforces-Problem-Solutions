#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
int T;
cin>>T;

while (T--){
    string s;
    cin >>s;
    string s1;
    int c=0;
    for (int i =0;i<s.length()-1;i++){
        c++;
        if (c%2!=0){
            s1+=s[i];
        }
    }
    cout<<s1+s[s.length()-1]<<endl;
}
}

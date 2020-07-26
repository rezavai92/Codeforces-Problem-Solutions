#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
int t;
cin>>t;

while (t--){
    int a;
    cin>>a;
    string s;
    cin>>s;
    int k =a-1;
    while (k!=0){

        if (s[k] =='0' && s[k-1] == '1'){

            if (s[k+1]=='0'){
                s.erase(k,1);
            }
            else{
                s.erase(k-1,1);
            }
        }

        else {
            k--;
        }

    }
    cout<<s<<endl;
}
}

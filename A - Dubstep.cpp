#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
string s;
cin>>s;

string s1;
int c=0;
for (int i=0;i<s.length();i++){
    string s2;
    s2+=s[i];
    s2+=s[i+1];
    s2+=s[i+2];

    if ( s2 =="WUB"){
        c++;

        if (c==1 && i!=0 && i !=s.length()-3 ){
        s1+=' ';
        }
        i=i+2;
    }
    else{
        s1+=s[i];
        c=0;
    }
}
cout<<s1<<endl;
}

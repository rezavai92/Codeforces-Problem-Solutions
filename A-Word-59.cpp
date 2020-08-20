#include <iostream>
#include <bits/stdc++.h>
using namespace std;

string up(string s){

string k="";
for(int i =0;i<s.length();i++){
 if(islower(s[i])){
 k+=(s[i]-32);
 }
 else{
 k+=s[i];
 }
}
return k;
}

string low(string s){

string k="";
for(int i =0;i<s.length();i++){
 if(isupper(s[i])){
 k+=(s[i]+32);
 }
 else{
 k+=s[i];
 }
}
return k;
}



string formatString (string s){
int upper=0;
int lower = 0;
for (int i=0; i<s.length();i++){
if(isupper(s[i])){

upper++;
}
else{
lower++;
}
}
if(lower>=upper){

return low(s);
}
return up(s);
}

int main (){
string s;
cin>>s;
cout<<formatString(s)<<endl;
}

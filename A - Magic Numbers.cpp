#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

int n;
cin>>n;

string s=to_string(n);
int l=0;
int len = s.length();

//cout<<s.find("144",0,3)<<endl;
while (s.length()>0){

    if ( s.substr(0,3).find("144",0,3) !=string :: npos ){

        l+=3;
        s.erase(0,3);
    }
    else if (s.substr(0,2).find("14",0,2) != string :: npos){
        l+=2;
        s.erase(0,2);
    }
    else if  (s.substr(0,1).find("1",0,1) != string :: npos){
        l++;
        s.erase(0,1);
    }
    else {
        break;
    }


}
//cout<<l<<endl;
if (l==len){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}
]
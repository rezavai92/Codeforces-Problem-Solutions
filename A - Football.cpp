#include <iostream>
using namespace std;
int main () {

string s;
cin>>s;

char c =s[0];
int n=1;

for (int i=1;i<s.length() ;i++ ){
        if (n <7) {
    if  (s[i]==c ){
        n+=1;

    }
    else {
        n=1;
    }

    c=s[i];}
    else {
        break;
    }


}

if (n>=7){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}
}

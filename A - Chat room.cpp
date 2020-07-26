#include <iostream>
#include <string>

using namespace std;
int main () {

string s;
string h="hello";
cin>>s;
int f=0;

for (int i=0;i<s.length();i++){

    if (s[i]==h[f]){

        f++;
    }
}

if (f==h.length()){
    cout<<"YES"<<endl;
}
else {
    cout<<"NO"<<endl;
}




}

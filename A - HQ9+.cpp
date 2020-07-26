#include <iostream>
using namespace std;
int main (){

string s;
cin>>s;
int c=0;
for (int i =0 ;i<s.length();i++){

    if (s[i] =='H' || s[i] =='Q' || s[i] =='9' ){
        cout <<"YES"<<endl;
        break;
    }
    else if (s[i] =='+' && (s[i-1]=='H' || s[i-1]=='Q'  )){
        cout<<"YES"<<endl;
    }
    c++;
}
if (c==s.length()){
    cout<<"NO"<<endl;
}
}

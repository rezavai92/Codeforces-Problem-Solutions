#include <iostream>
using namespace std;
int main (){

int n,t;
cin>>n;
cin>>t;
string s;
cin>>s;
while (t--){
    for (int i=0;i<s.length()-1;i++){
        if (s[i] =='B' && s[i+1] =='G'){
            swap(s[i],s[i+1]);
            i++;
        }
    }

}
cout<<s;
}

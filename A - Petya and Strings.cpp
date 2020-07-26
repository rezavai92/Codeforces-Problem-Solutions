#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;
int main () {
string s;
cin>>s;

vector <int> v;
vector <int> :: iterator it;
for (int i=0;i<s.length();i++){

     if (s[i] !='+'){
            int a=s[i];
        v.push_back(a);
     }
}

sort(v.begin(),v.end());
for (it=v.begin();it!=v.end();it++){
    if (it==v.begin()){
        cout<<(char)*it;
    }
    else{
        cout<<"+"<<(char)*it;
    }
}
cout<<"\n";
}

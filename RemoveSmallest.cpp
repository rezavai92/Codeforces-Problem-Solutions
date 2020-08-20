#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;
int main () {

int n;

cin>>n;
while(n--){

int size;
cin>>size;

vector <int> v ;
vector <int> :: iterator it;
int total=size;
while(size--){
int el;

cin>>el;

v.push_back(el);
}

sort(v.begin(),v.end());

for(it=v.begin();it!=v.end()-1;it++){
if(*(it+1)-*it <=1 ){

total--;
}
else{
break;
}
}

if(total<=1){
cout<<"YES"<<endl;
}
else{
cout<<"NO"<<endl;
}

}
}


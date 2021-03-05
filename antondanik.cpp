#include <iostream>
#include <bits/stdc++.h>
using namespace std;
 int main (){

 int n;

 cin>>n;


 int a=0;
 int d=0;
while(n--){
    char c ;
    cin>>c;
    if(c=='A'){
        a++;
    }
    else{
        d++;
    }




 }

  if(d>a){
    cout<<"Danik"<<endl;
  }
  else if (d<a){
    cout<<"Anton"<<endl;
  }
  else{
    cout<<"Friendship"<<endl;
  }
 }

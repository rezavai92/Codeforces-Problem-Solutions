#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){
int T;
cin>>T;
while(T--){
   int h1,w1;
   int h2,w2;

   cin>>h1>>w1;
   cin>>h2>>w2;

   if (h1==h2 && (w1+w2)==h1){
     cout<<"YES"<<endl;
   }
   else if (h1==w2 &&(w1+h2)==h1){
    cout<<"YES"<<endl;
   }
   else if (w1==h2 && (h1+w2)==w1){
    cout<<"YES"<<endl;
   }
   else if (w1==w2&&(h1+h2)==w1){
    cout<<"YES"<<endl;
   }
   else{
    cout<<"NO"<<endl;
   }

}

}

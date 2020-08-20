#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int minimum (vector<int> v){
int m = INT_MAX;

for (int i =0;i<v.size();i++){
if (v[i]<m){
 m =v[i];
}

}
return m;

}



int main (){


int t;
cin>>t;
while(t--){

int n;
cin>>n;
vector <int> gift1;
vector <int> gift2;
int s =2*n;
for(int i =1;i<=s;i++){


int el;
cin>>el;
if (i<=n){


gift1.push_back(el);
}
else{


gift2.push_back(el);
}





}
int min_in_gift1 = minimum(gift1);
int min_in_gift2 = minimum(gift2);

long long int c=0;

for (int i =0;i<gift1.size();i++){

gift1[i]=gift1[i]-min_in_gift1;
gift2[i]=gift2[i]-min_in_gift2;

 c+=max(gift1[i],gift2[i]) ;
}

cout<<c<<endl;


}



}

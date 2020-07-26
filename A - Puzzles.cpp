#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
int n,m;
vector <int> v;
cin>>n>>m;
int s=m;
while (m--){
    int p;
    cin>>p;
    v.push_back(p);

}

sort(v.begin(),v.end());

int minimum =v[s-1]-v[0];
for (int i=0;i<=s-n;i++){
    if (v[i+n-1]-v[i] <minimum){
        minimum=v[i+n-1]-v[i];
    }
}
cout<<minimum<<endl;
}

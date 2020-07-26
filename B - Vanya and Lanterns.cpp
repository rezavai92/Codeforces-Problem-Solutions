#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

int n,l;
cin>>n;
cin>>l;
vector <int> v;

for (int i=0;i<n;i++){
    int lantem_position;
    cin>>lantem_position;
    v.push_back(lantem_position);
}
sort(v.begin(),v.end());
double maximum = 0.0;

for (int i=0;i<v.size()-1;i++){
    if (v[i+1] - v[i] > maximum){
        maximum=v[i+1]-v[i];
    }
}
maximum = maximum /2.0;
 double d1= v[0]-0.0;
 double d2= (double)l-v[n-1];
 double pr = max(d1,d2);
double final = max(pr,maximum);
 cout<<fixed<<setprecision(9) <<final<<endl;

}

#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
long long int n,k;

cin>>n>>k;

long long int exp_1 = 1+(k-1)*2;
long long int exp_2;

long long int  mid = ceil(n/2.0);

exp_2 = 2+(k-mid-1)*2;


if (k<=mid){
    cout<<exp_1<<endl;
}
else {
    cout<<exp_2<<endl;
}
}

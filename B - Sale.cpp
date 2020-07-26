#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){
int n,m;
cin>>n>>m;

vector <int> prices;

while(n--){
    int p;
    cin>>p;
    prices.push_back(p);
}
sort(prices.begin(),prices.end());



int sum=0;

for (int i=0;i<m;i++){
    if (sum+prices[i]*(-1)>sum){
    sum+= prices[i] * (-1);
    }
    else {
        break;
    }
}
cout<<sum<<endl;
}

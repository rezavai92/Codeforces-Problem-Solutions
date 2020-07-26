#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main () {
vector<int> v;
vector<int>:: iterator it ;
int n, k;
cin>>n;
cin>>k;

for (int i=0;i<n;i++){

    int a ;
    cin >>a;
    v.push_back(a);
}
int winner =0;
for (it=v.begin() ;it!=v.end();it++ ){

    if (*it>=*(v.begin()+k-1) && *it !=0){

        winner+=1;
    }

}

cout<<winner;
}

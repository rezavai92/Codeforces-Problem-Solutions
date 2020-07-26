#include <iostream>
#include <string>

using namespace std;
int main () {

long long int n,k,w;
cin>>k;
cin>>n;
cin>>w;

long long int total=0;

for (long long int i=1;i<=w;i++){
    total+=i*k;
}
if (total<=n){
    cout<<0<<endl;
}
else {
cout<<total-n<<endl;
}
}

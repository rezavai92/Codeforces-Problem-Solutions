#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

long int n,k;
cin>>n;
cin>>k;
while (k--){
if (n%10==0){

    n/=10;
}
else {
    n--;
}
}
cout<<n<<endl;

}

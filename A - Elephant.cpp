#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

long int n;
cin>>n;
int c=0;
while (n!=0){
if (n>=5){

    n-=5;
}
else if (n>=4 ) {
    n-=4;
}
else if (n>=3 ) {
    n-=3;
}
else if (n>=2 ) {
    n-=2;
}
else {
    n--;
}
c++;

}
cout<<c<<endl;

}

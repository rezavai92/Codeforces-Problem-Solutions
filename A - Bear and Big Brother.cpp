#include <iostream>
#include <Math.h>
using namespace std;
int main (){

long long int a,b;
cin>>a;
cin>>b;

int year=0;

while (a<=b){
    a=a * 3;
    b=b* 2;
    year++;

}
cout<<year<<endl;

}

#include <iostream>
#include <string>
using namespace std;
int main () {

int n,p,q;

cin>>n;
int total=0;
while(n--){

cin>>p>>q;

if(q-p>=2){

total++;

}
}

cout<<total<<endl;
}


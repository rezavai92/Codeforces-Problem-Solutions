#include <iostream>
using namespace std;
int main () {
int T;
cin>>T;
int x1=0,y1=0,z1=0;
for (int i=0;i<T;i++){

    int x,y,z;
    cin>>x;
    cin>>y;
    cin>>z;
    x1+=x;
    y1+=y;
    z1+=z;


}
if (x1==0 && y1==0 && z1==0 ){
    cout<<"YES"<<endl;
}
else{
    cout<<"NO"<<endl ;
}
}

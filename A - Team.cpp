#include <iostream>
#include <vector>
using namespace std;
int main () {

int n;
int solution=0;
cin >> n;

for (int i=0;i<n;i++) {

    int p,v,t;
    cin>>p;
    cin>>v;
    cin>>t;

    if ((p+v+t) >=2 ){

        solution+=1;
    }


}
cout<<solution<<endl;
}

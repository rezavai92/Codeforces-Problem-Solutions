#include <iostream>
#include <string>
using namespace std;
int main () {

int T;
cin >>T;

for (int i=0;i<T;i++) {
    string a;
    cin>>a;
    if (a.length() > 10){

        cout<<a[0]<<a.length()-2<<a[a.length()-1]<<endl;
    }
    else{

        cout<<a<<endl;
    }

}


}

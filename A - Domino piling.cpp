#include <iostream>
#include <string>
using namespace std;
int main () {

int t;
cin>>t;
int x =0;
for (int  i =0;i<t;i++){
     string a;
     cin>>a;
     if (a[1]=='+'|| a[0]=='+'){

        x++;
     }
     else if (a[1]=='-' || a[0]=='-'){

        x--;
     }

}
cout<<x<<endl;
}

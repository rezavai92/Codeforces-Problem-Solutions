#include <iostream>
using namespace std;

int main () {

int a,b,c;
cin>>a>>b>>c;
int result ;
if (a==1 && b==1 && c==1){
    result =a+b+c;
}
else if (b==1){
    result =(min(a,c)+b) * max(a,c);
}
else if (a==1 && c==1){
    result =a+b+c;
}
else if (a==1){
    result =(a+b)*c;
}
else if (c==1){
    result = a*(b+c);
}
else {
    result = a*b*c;
}
cout<<result<<endl;

}

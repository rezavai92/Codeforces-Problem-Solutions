#include <iostream>
using namespace std;
int main (){

int t;

cin >>t;

while (t--){

int a,k;

cin>>a>>k;
double b = (double)(a+k)/(double)2;
int c= (int)b;
if(b<=a && b==c ){
cout<<0<<endl;
}
else if (b<=a && b !=c){
cout<<1<<endl;
}

else{

cout<<(int) ((b-a)*2)<<endl;
}


}

}

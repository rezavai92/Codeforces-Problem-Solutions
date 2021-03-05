#include <iostream>
using namespace std;

int main (){

    int n,m;

    cin>>n>>m;

    int r = n+m;
    int winner =0;

    while(n>0 && m>0){


        n--;
        m--;
        winner= !winner;


    }
    if(winner==0){
        cout<<"Malvika"<<endl;
    }

    else{
        cout<<"Akshat"<<endl;
    }

}

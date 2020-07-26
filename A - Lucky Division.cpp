#include <iostream>
#include <math.h>

using namespace std;



bool IsLuckyNumber(int number){
        int c=0;
        string n =to_string(number);
        for (int i=0;i<n.length();i++){
        if (n[i]=='4' || n[i]=='7' ){
            c+=1;
        }
    }
    if (c==n.length()) {

        return true;
    }
return false;
}

bool LuckyFactor(int n){

    for (int i=1;i<=sqrt(n) ;i++ ){

        if (n%i==0){


            if (IsLuckyNumber(i)|| IsLuckyNumber(n/i)){
                return true;
            }
        }
    }
return false;
}

int main () {
    int n;
    int c=0;
    int loc=1;
    cin>>n;

    if (IsLuckyNumber(n)){
        cout<<"YES"<<endl;
    }

    else {
        if(LuckyFactor(n)){
            cout<<"YES"<<endl;
          }
          else {
            cout<<"NO"<<endl;
          }

    }


}

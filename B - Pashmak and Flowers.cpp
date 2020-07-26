#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

int T;
cin>>T;
vector <int> v;
while (T--){

    int num;
    cin>>num;
    v.push_back(num);

}
vector <int> v1=v;
sort (v.begin(),v.end());

int diff = v[v.size()-1]-v[0];

int num1,num2;

num1=v[0];
num2=v[v.size()-1];

double num1_c=0;
double num2_c=0;

for (int i =0;i<v1.size();i++){

    if (num1==num2){

       if (v1[i] ==num1 ){
        num1_c+=1;
    }


    }


       else {
        if (v1[i] ==num1 ){
        num1_c+=1;
    }
    else if (v1[i] ==num2){
        num2_c +=1;
    }

}

}
double result ;

if (num1 == num2 ){

    result = (num1_c* (num1_c -1))/2;
}
else {
        result =num1_c * num2_c;
}
cout<<diff<<" "<<fixed<<setprecision(0)<<result<<endl;
}

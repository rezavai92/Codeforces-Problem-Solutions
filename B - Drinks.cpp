#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

int n;

cin>>n;
int t=n;
double sum=0.0;
while (n--){
    int num;
    cin>>num;

    sum+=num/100.0;


}
cout<<fixed <<setprecision(12)<<(sum/t) *100<<endl;
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> fibs (int n){

vector <int>v;
v.push_back(0);

int f=0;
int s=1;
int p;
while (s<=n){

    v.push_back(s);
    p=f+s;
    f=s;
    s=p;


}
return v;
}

int main (){
vector <int> fibs_list;
int n;
cin>>n;
int a,b,c;
if (n==2){
    cout<<0<<" "<<1<<" "<<1<<endl;
}
else if (n==1){

    cout<<0<<" "<<0<<" "<<1<<endl;
}
else if (n==0){
        cout<<0<<" "<<0<<" "<<0<<endl;
}
else {

    fibs_list=fibs(n);
    c=fibs_list[fibs_list.size()-2];
    b=fibs_list[fibs_list.size()-4];
    a=fibs_list[fibs_list.size()-5];
    cout<<a<<" "<<b<<" "<<c<<endl;
}

}

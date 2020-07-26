#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector <int> DivisibleBy90(vector<int> v){
    int s=0;
for (int i=0;i<v.size();i++){

    if (v[i]==5){
        s+=v[i];
    }
    else{
        break;
    }

}

if (s%9==0  || s==0) {
    return v;

}
else {
    v.erase(v.begin());
    return DivisibleBy90(v);
}
}


int main (){

int n;
cin>>n;
vector <int> v;
while (n--){

    int num;
    cin>>num;
    v.push_back(num);
}

sort(v.rbegin(),v.rend());

long long int number =0;

for (int i=v.size()-1;i>=0;i--){

    if (v[i]==5){
        v.erase(v.begin()+i);
    }
    else if (v[i] ==0){
        break;
    }
}

if (v.size()==0){
    cout<<-1<<endl;
}
else {
    vector <int> divs = DivisibleBy90(v);
    string s;
    for (int i=0;i<divs.size();i++){
        s+= to_string(divs[i]);
        //cout<<number<<endl;
    }
    string s1;

    for (int i=0;i<s.length()-1;i++){
        if (s[i] =='0'){
            s.erase(0,1);
            i--;
        }
        else {
            break;
        }

    }
    cout<<s<<endl;
}
}

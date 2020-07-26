#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

int n;
cin>>n;
vector <int> v;
while (n--){
    int num;
    cin>>num;
    v.push_back(num);
}
int minimum = *min_element(v.begin(),v.end());
int c=0;
int index;
for (int i =0;i<v.size();i++){

    if (v[i] ==minimum){

        c++;
        index=i;
    }
}
if (c>1){
    cout<<"Still Rozdil"<<endl;
}
else {
    cout <<index +1<<endl;
}

}

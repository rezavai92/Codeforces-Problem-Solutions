#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool colsort (vector <int>a,vector <int> b){

return a[0]<b[0];
}
int main () {

int n;
cin>>n;
vector <vector <int> > v;

while (n--){

    int a,b;
    cin>>a>>b;
    v.push_back({a,b});

}
sort (v.begin(),v.end(),colsort);

bool h_p =false;

for (int i =1;i<v.size();i++){

    if (v[i][1] <v[i-1][1]){
        h_p =true;
        break;
    }
}
if (h_p){
    cout<<"Happy Alex"<<endl;
}
else {
    cout<<"Poor Alex"<<endl;
}
}

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool sortcol( const vector<int>& v1,
               const vector<int>& v2 ) {
 return v1[0] < v2[0];
}
int main (){

int n,s;

cin>>s>>n;
vector <vector <int> > strength_bonus;
int number_of_players =n;
while (number_of_players--){
        int s1,b;
        cin>>s1>>b;
        strength_bonus.push_back({s1,b});


}

sort (strength_bonus.begin(),strength_bonus.end(),sortcol);

bool t_f = true;
for (int i =0;i<n;i++){

     if  (s> strength_bonus[i][0] ) {
        s+=strength_bonus[i][1];
     }
     else {
        t_f=false;
     }
}
if (t_f){
    cout<<"YES"<<endl;
}
else {

    cout<<"NO"<<endl;
}
}

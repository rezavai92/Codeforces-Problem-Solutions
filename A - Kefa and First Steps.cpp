#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main () {

int n;
cin>>n;
vector <int> v;
while (n--){
        int number;
        cin>>number;
        v.push_back(number);

}

int l=0;
int m=0;

for (int i=0;i<v.size()-1;i++){


    if (v[i] <=v[i+1]){
        l++;
        if (i==v.size()-2 && l>m){
                m=l;

        }
    }
     else {
        if (l>m){
            m=l;
        }

        l=0;

    }

}

cout<<m+1<<endl;


}

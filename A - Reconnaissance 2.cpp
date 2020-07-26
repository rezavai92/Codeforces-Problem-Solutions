#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){

int n;
cin>>n;
int  v[1000];

for (int i =1;i<=n;i++){
    int number;
    cin>> number;
    v[i]=number;


}
//cout<<v.size()<<endl;
v[0] =v[n];

v[n+1]=v[1];

int m= *max_element(v,v+n)- *min_element(v,v+n);
int x,y;
for (int i =1;i<=n;i++){
    if ( abs(v[i] -v[i-1]) <=m){
        m= abs (v[i]- v[i-1] );
        if (i-1 ==0){
            x=n;
            y=i;
        }
        else {
        y=i;
        x=i-1;

        }

    }
    if ( abs (v[i] -v[i+1]) <=m){
        m=abs (v[i]- v[i+1] );
        x=i;
        if (i+1==n+1){
            y=1;
        }
        else {
        y=i+1;
        }
    }
}

cout<<x<<" "<<y<<endl;

}

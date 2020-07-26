#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {

int a,b;

cin>>a>>b;
int h=0;
int t=0;

while(a>0){

a--;
t++;


if (t==b){

    a++;
    t=0;
}

h++;

}

cout<<h<<endl;
}
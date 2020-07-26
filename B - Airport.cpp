#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

int n,m;
cin>>n>>m;
int temp =n;
vector <int> seats;
vector <int> seats1;
while (m--){


    int s;
    cin>>s;
    seats.push_back(s);

}
seats1=seats;
int maximum=0;
int minimum=0;


while (n>0) {

    sort(seats.rbegin(),seats.rend());

    maximum+=seats[0];


    seats[0]=seats[0]-1;

    if (seats[0]<1){
        seats.erase(seats.begin());
    }

    n--;


}
//cout<<"ki oiyi?"<<endl;

n = temp;

while (n>0) {

    sort(seats1.begin(),seats1.end());

    minimum+=seats1[0];


    seats1[0]=seats1[0]-1;

    if (seats1[0]<1){
        seats1.erase(seats1.begin());
    }

    //cout <<minimum<<endl;

    n--;
    //cout<<n<<endl;

}

cout<<maximum<<" "<<minimum<<endl;
}

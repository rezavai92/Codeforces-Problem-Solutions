#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){

vector <int> days;
int day_tracker =0;

int n;
cin>>n;

for (int i =0;i<7;i++){
    int number;
    cin>>number ;
    days.push_back(number);
}

while (n>0){

    n=n-days[0];
    days.push_back(days[0]);
    days.erase(days.begin());
    if (day_tracker==7){
        day_tracker= (day_tracker-7)+1;
    }
    else {
    day_tracker+=1;
    }
}
cout<<day_tracker<<endl;
}

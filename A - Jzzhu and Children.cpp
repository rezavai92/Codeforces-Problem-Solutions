#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main (){
vector <int> main_line ;
vector <int> tracker  ;

int n,m;
cin>>n>>m;

while (n--){
    int num;
    cin>>num;
    main_line.push_back(num);
}

for (int i =0;i<main_line.size();i++){
    tracker.push_back(i);
}

int k=0;
while (tracker.size()>1){
    if (main_line[tracker[k]] <=m){
        tracker.erase(tracker.begin()+k);

    }
    else{
        main_line[tracker[k] ]-=m;
        tracker.push_back(tracker[k]);
        tracker.erase(tracker.begin()+k);

    }
}
cout <<tracker[0]+1<<endl;
}

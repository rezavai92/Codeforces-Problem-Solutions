#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main (){
int T;

cin>>T;
map <string,int> omap;
while (T--){

    string s;
    cin>>s;
    if (omap.find(s) == omap.end() ){
        cout<<"OK"<<endl;
        omap[s]=1;
    }
    else {
        cout<<s<<omap[s]<<endl;
        omap[s]+=1;


    }

}

}

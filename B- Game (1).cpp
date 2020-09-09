#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

    int T;

    cin>>T;
    while(T--){

        string s;
        cin>>s;
        bool now =false;
        for (int i=0;i<s.length()-1;i++){

            if(s.length()==0){
                break;
            }

            if(s[i]!=s[i+1] ){


                now =!now;
                s.erase(i,2);
                i=-1;

            }
           // cout<<s<<endl;
        }
        if(now==true){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
    }
    }

}

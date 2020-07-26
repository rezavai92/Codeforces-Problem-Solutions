#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

string s;

cin>>s;

if (  islower(s[0])   ){
        int c=0;
    for (int i=1;i<s.length();i++){

        if (isupper(s[i])  ){
            c++;
        }
    }
    if (c==s.length()-1){
        cout<<(char)toupper(s[0]);
        for (int i=1;i<s.length();i++){
            cout<<(char) tolower(s[i]);
        }
        cout<<endl;
    }
    else {
        cout<<s<<endl;
    }
    }
    else if (isupper(s[0])){

        int c=0;
        for (int i=1;i<s.length();i++){

            if (isupper(s[i])){
                c++;
            }
        }
        if (c==s.length()-1){
            //cout<<s[0];
            for (int i=0;i<s.length();i++){
                cout<<(char) tolower(s[i]);
            }
            cout <<endl;
        }
        else {
                cout<<s<<endl;
        }
    }


}

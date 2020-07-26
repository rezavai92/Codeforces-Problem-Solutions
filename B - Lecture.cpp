#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main () {

int n,m;

cin>>n>>m;

vector <string> language_1;
vector <string> language_2;
while (m--){

    string s1;
    string s2;

    cin >>s1;
    cin >>s2;

    language_1.push_back(s1);
    language_2.push_back(s2);

}
while (n--){
    string o;
    cin>>o;
    for (int i=0;i<language_1.size();i++){
        if( o== language_1[i] ){

            if (language_2[i].length() < language_1[i].length()){
               cout<<language_2[i]<<endl;
            }
            else{
                cout<<language_1[i]<<endl;
            }
            break;
        }
    }

}
}

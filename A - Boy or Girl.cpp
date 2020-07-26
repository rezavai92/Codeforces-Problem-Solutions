#include <iostream>
#include <unordered_map>
using namespace std;

int main () {
string s;
unordered_map<char,int> umap;
unordered_map<char,int> :: iterator it;
cin>> s;
int n=0;
for (int i =0;i<s.length() ;i++ ){

    if (  umap.find( s[i] ) == umap.end()){
        n++;
        umap[s[i]] =1;
    }
    else{
        umap[s[i]] +=1;
    }

}
if (n%2!=0){
    cout<<"IGNORE HIM!"<<endl;
}
else{
    cout<<"CHAT WITH HER!"<<endl;
}
}

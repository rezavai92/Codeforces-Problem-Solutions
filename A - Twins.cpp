#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector <int> :: iterator it;
int vectorsum(vector<int> v,int pos){
int sum=0;

for (it=v.begin()+pos;it!=v.end();it++){
    sum+=*it;
}
return sum;
}


int main (){

int n;

vector<int> v;
cin>>n;

for (int i=0;i<n;i++){

    int number;
    cin>>number;
    v.push_back(number);


}
sort(v.rbegin(),v.rend());

int c=0;
int sum=0;
for (int i=0;i<v.size();i++){
    if (sum>vectorsum(v,i)){

       break;
    }
    sum+=v[i];
    c++;
}
cout<<c<<endl;

}

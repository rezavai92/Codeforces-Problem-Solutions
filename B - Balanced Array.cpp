#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main (){

int T;
cin>>T;
while(T--){
    int num;
    cin>>num;

    int flag = num/2;
    vector <int> v;
    int sum=0;
    int sum1=0;

    if (flag%2==0){
        int k=2;
        for (int i =0;i<flag;i++){

            v.push_back(k);
            sum+=k;
        k+=2;
        }
         k =1;
            for (int i=0;i<flag-1;i++){
            v.push_back(k);
            sum1+=k;
            k+=2;
        }
        v.push_back(sum-sum1);
        cout<<"YES"<<endl;
        for (int i =0;i<v.size();i++){
            if (i!=v.size()-1 ){
            cout<<v[i]<<" ";
        }
        else {
            cout<<v[i];
        }

    }
            cout<<endl;
    }

    else {
        cout<<"NO"<<endl;
    }
}

}

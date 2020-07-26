#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main (){

    int T,sx,sy,ex,ey;
    cin>>T>>sx>>sy>>ex>>ey;
    string s;
    cin>>s;
    if (ex-sx >=0 && ey-sy>=0 ){

        int to_e = abs(ex-sx);
        int to_n = abs(ey-sy);
            int k=1;
            for (int i=0;i< s.length() ;i++){

                if (s[i] == 'E' && to_e>0 ){
                    to_e--;
                }
                else if (s[i] =='N' && to_n >0 ){
                    to_n --;
                }
                if (to_e ==0 && to_n ==0){
                    break;
                }
                k++;
            }
            if (to_e == 0 && to_n ==0){
                cout <<k<<endl;

            }
            else {
                cout<<-1<<endl;
            }

    }

         else if (ex-sx <=0 && ey-sy>=0 ){

        int to_w = abs(ex-sx);
        int to_n = abs(ey-sy);
            int k=1;
            for (int i=0;i< s.length() ;i++){

                if (s[i] == 'W' && to_w>0 ){
                    to_w--;
                }
                else if (s[i] =='N' && to_n >0 ){
                    to_n --;
                }
                if (to_w ==0 && to_n ==0){
                    break;
                }
                k++;
            }
            if (to_w == 0 && to_n ==0){
                cout <<k<<endl;

            }
            else {
                cout<<-1<<endl;
            }



    }


    else if (ex-sx >=0 && ey-sy<=0 ){

        int to_e = abs(ex-sx);
        int to_s = abs(ey-sy);
            int k=1;
            for (int i=0;i< s.length() ;i++){

                if (s[i] == 'E' && to_e>0 ){
                    to_e--;
                }
                else if (s[i] =='S' && to_s >0 ){
                    to_s --;
                }
                if (to_e ==0 && to_s ==0){
                    break;
                }
                k++;
            }
            if (to_e == 0 && to_s ==0){
                cout <<k<<endl;

            }
            else {
                cout<<-1<<endl;
            }
     }

      else if (ex-sx <=0 && ey-sy<=0 ){

        int to_w = abs(ex-sx);
        int to_s = abs(ey-sy);
            int k=1;
            for (int i=0;i< s.length() ;i++){

                if (s[i] == 'W' && to_w>0 ){
                    to_w--;

                }
                else if (s[i] =='S' && to_s >0 ){
                    to_s --;
                }
                if (to_w ==0 && to_s ==0){
                    break;
                }
                k++;
            }
            if (to_w == 0 && to_s ==0){
                cout <<k<<endl;

            }
            else {
                cout<<-1<<endl;
            }



}
}

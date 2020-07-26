#include<iostream>
#include <cmath>
using namespace std ;

int main () {
int n,m,a;

cin>>n>>m>>a;
double l= (double)n/(double)a;
double w= (double)m/(double)a;

long long int result =ceil(l)*ceil(w);

cout<<result;
}

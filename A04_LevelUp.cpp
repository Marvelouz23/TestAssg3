#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

int main(){
    int c,m,l;
    cin>>c>>m>>l;
    float total=ceil( (pow(c,2)+log(m+1)) * (exp((double) l / (c+1))) );
    cout<<fixed<<setprecision(2)<<total;
}
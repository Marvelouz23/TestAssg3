#include<iostream>
#include<string>
using namespace std;

int main(){
    long long a,b;
    string s;
    cin>>s>>a>>b;
    a--;
    long long totalb = ( b * (2*4 + (b-1) * 4) ) / 2 , totala = ( a * (2*4 + (a-1) * 4) ) / 2;
    cout<<s<<' '<<"has"<<' '<<totalb - totala<<' '<<"attackable tiles.";
}
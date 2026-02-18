#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n , x;
    //cout<<"Test: ";
    cin>>n>>x;
    long long floor_N = ceil(sqrt(n)) , floor_X = ceil(sqrt(x));
    long long delta_floor = floor_N - floor_X;
    //cout<< floor_N << " and " << floor_X;
    //cout<<delta_floor;
    long long tmp = x + ( (delta_floor * (12 + (delta_floor - 1) * 2 ) ) / 2);
    //cout<<tmp;
    long long total1 = abs(n - tmp);
    //cout<<total1;
    cout<< (total1 == 0) ? (2 * delta_floor - 1) : (total1 + delta_floor) ;
}
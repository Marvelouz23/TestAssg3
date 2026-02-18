#include<iostream>
using namespace std;

int main(){
    int hr1,hr2,min1,min2;
    cout<<"Type the first hour and minute: "; cin>>hr1>>min1;
    cout<<"Type the second hour and minute: "; cin>>hr2>>min2;
    int sum1,sum2;
    sum1=hr1*60+min1;
    sum2=hr2*60+min2;
    int total=sum2-sum1;
    //cout<<total<<endl;
    int hr= ( ( (total % 1440) + 1440 ) % 1440 ) / 60 
    , min = ( ( (total % 1440) + 1440 ) % 1440 ) % 60;
    cout << hr << " hr "<< min << " min until alarm rings.";
    /*cout<<hr1<<' '<<min1<<endl;
    cout<<hr2<<' '<<min2;*/
}
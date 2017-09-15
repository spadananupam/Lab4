#include<iostream>
using namespace std;

int checkPrimeNumber(int);
int main(){
     int a,b;
     bool flag;
     cout<<"Enter the intervals: \n";
     cin>>a>>b;
     cout<<"The prime numbers between "<<a<<" and "<<b<<" are ";
     for (int i=a+1; i<b; ++i){
        flag=checkPrimeNumber(i);
        if (flag)
            cout<<i<<" ";
     }
     return 0;
}
     int checkPrimeNumber(int n){
     bool flag =true;
     for(int j=2; j<=n/2; ++j){
        if(n%j==0){
            flag=false;
            break;
        }
     } return flag;

     }
















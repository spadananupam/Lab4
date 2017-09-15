#include<iostream>
#include<cmath>
using namespace std;

int cube(int a){
       return pow(a, 3);
}

int main(){
       int b;
       cout << "Enter a number to be cubed:\n\n";
       cin >> b;
       cout << "The cube of " << b << "is " << cube(b);
       return 0;
}

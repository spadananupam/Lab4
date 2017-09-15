#include<iostream>
#include<cmath>
using namespace std;

void finder (int a, int b) {
       if (a > b)
              cout << a << " is greater than " << b;
       else if (a < b)
              cout << b << " is greater than " << a;
       else cout << "They're equal";
 }

int main(){
       float a, b;
       cout << "Enter two numbers consecutively:\n";
       cin >> a >> b;

       finder(a, b);
       return 0;
}

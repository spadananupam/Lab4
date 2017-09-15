#include<iostream>
#include<cmath>
using namespace std;

void finder (int a, int b) {
       if (a % 2 == 0)
              cout << "The number is even";
       else
              cout << "The number is odd";

 }

int main(){
       int a, b;
       cout << "Enter two numbers consecutively:\n";
       cin >> a >> b;
       if (a > 0 && b > 0)
              finder(a, b);
       else
              cout << "Invalid input.";
       return 0;
}

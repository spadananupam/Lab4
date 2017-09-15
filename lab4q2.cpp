#include<iostream>
#include<cmath>
using namespace std;

void diameter(float a){
       cout << "Diameter is " << 2 * a << endl;
}

void circumference(float a) {
       cout << "The circumference of the circle is" << 2 * 3.14159*a << endl;
}

void area(float a) {
       cout << "The area of the circle is: " << 3.14159*a*a << endl;
}

int main(){
       float a;
       cout << "Going in circles 2:\n\n";
       cout << "Type in the radius of the circle:\n";
       cin >> a;

       diameter(a);
       circumference(a);
       area(a);

       return 0;
}

#include <iostream>
#include<cmath>
using namespace std;
int main() {
    int first_digit , last_digit,middle_digits,num;
    cout<<"Number: ";
    cin>>num;
    string number = to_string(num);
    int length = number.length();
    cout<<length<<endl;
    last_digit = num % 10;
    num /= 10;
    int divisor = pow(10,length-2);
    middle_digits = num%divisor;
    first_digit = (num - middle_digits)/(pow(10,length-2));
    int temp = last_digit;
    last_digit = first_digit;
    first_digit = temp;
    int newNumber = first_digit*pow(10,length-1)+middle_digits*10 + last_digit;
    cout<<newNumber;
    return 0;
}

#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int num;
    cout<<"enter a number: ";
    cin>>num;
    int temp = num,counter=0,digits =5,remainder=0,reverse=0;
    int temp1 = digits;
    while(num>0){
        if(counter==0){
            remainder = num%10;
            digits--;
            reverse += remainder*pow(10,digits);
            counter++;
            num /= 10;
            continue;
        }else if (counter < temp1-1){
            remainder = num % 10;
            reverse += remainder*pow(10,counter);
        }else{
            remainder = num %10;
            reverse += remainder;
        }
        digits--;
        counter++;
        num /= 10;
    }cout<<reverse;
    
    return 0;
}

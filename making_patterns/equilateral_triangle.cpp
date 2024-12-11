
#include <iostream>
using namespace std;
int main() {
    int num;
    cout<<"enter a number : ";
    cin>>num;
    for(int i=num;i>=1;i--){
        int counter = num-1;
        for(int j=1;j<=i;j++){
            if(i==num){
            cout<<"* ";
            }else if (i<=counter){
                cout<<" ";
                counter--;
                j--;
            }else{
                cout<<"* ";
            }
        }cout<<endl;
    }

    return 0;
}

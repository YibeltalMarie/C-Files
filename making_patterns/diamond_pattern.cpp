#include<iostream>
using namespace std;

int main(){
for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6 + i - 1; j++) {
        if (j <= 6 - i) {
            cout << " ";
        }else if (j == 6 - i + 1 || j == 6 + i - 1 ){
            cout << "*"; } else {
                cout << " ";
            }
    } cout<<endl;
    }
for (int i = 6; i>=1; i--) {
    for (int j = 1; j <= 6 + i - 1; j++) {
        if (j <= 6 - i) {
            cout << " ";
        }else if (j == 6 - i + 1 || j == 6 + i - 1 ){
            cout << "*"; } else {
                cout << " ";
            }
    } cout<<endl;
    }
return 0;
}

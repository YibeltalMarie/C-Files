#include<iostream>
using namespace std;
int main(){
for (int i=1;i<=9;i++){
    for(int j=1;j<=9;j++){
        if(((i==1)&&(j>3&&j<7))||((i==9)&&(j>3&&j<7))){
            cout<<"*";
        }else if((i==2&&j==2)||(i==2&&j==8)){
            cout<<"*";
        }else if((i==8&&j==2)||(i==8&&j==8)){
            cout<<"*";
        }else if(((i>2&&i<8)&&j==1)||((i>2&&i<8)&&j==9)){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
    }cout<<endl;
}
  return 0;
}

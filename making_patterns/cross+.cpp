#include<iostream>
using namespace std;
int main(){
for (int i=1;i<=7;i++){
        for(int j=1;j<=5;j++){
            if(i==3){
                cout<<"*";
    }else if((i==2)&&((j>1)&&(j<5))){
        cout<<"*";
    }
    else if(j==3){
        cout<<"*";
        }else{
            cout<<" ";
        }
    }cout<<endl;
    
}
}

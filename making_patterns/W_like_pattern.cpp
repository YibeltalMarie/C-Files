#include<iostream>
using namespace std;

int main(){

for(int i=1;i<=7;i++){
    for(int j=1;j<=19;j++){
        if(((i==1)&&(j==1||j==19))||((i==2)&&(j==2||j==18))){
            cout<<"*";
        }else if((i==3)&&(j==3||j==17)){
            cout<<"*";
        }
        else if((i==4)&&(j==4||j==10||j==16)){
            cout<<"*";
        }else if((i==5)&&(j==5||j==9||j==11||j==15)){
            cout<<"*";
        }else if((i==6)&&(j==6||j==8||j==12||j==14)){
            cout<<"*";
        }else if((i==7)&&(j==7||j==13)){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }cout<<endl;
}
cout<<endl;

for(int i=7;i>=1;i--){
    for(int j=1;j<=19;j++){
        if(((i==1)&&(j==1||j==19))||((i==2)&&(j==2||j==18))){
            cout<<"*";
        }else if((i==3)&&(j==3||j==17)){
            cout<<"*";
        }
        else if((i==4)&&(j==4||j==10||j==16)){
            cout<<"*";
        }else if((i==5)&&(j==5||j==9||j==11||j==15)){
            cout<<"*";
        }else if((i==6)&&(j==6||j==8||j==12||j==14)){
            cout<<"*";
        }else if((i==7)&&(j==7||j==13)){
            cout<<"*";
        }else{
            cout<<" ";
        }
    }cout<<endl;
}
return 0;
}

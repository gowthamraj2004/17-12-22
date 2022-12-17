#include<iostream>
using namespace std;
int main(){
    int age;
    float time;
    float w=10.15,x=13.30,y=18.00,z=22.00;
    cin>>age>>time;
    if(age>13){
        if(time==x||time==y){
            cout<<"$5.00";
        }
        else{
            cout<<"$8.00";
        }
    }
    else{
        if(time==x||time==y){
            cout<<"$2.00";
        }
        else{
            cout<<"$4.00";
        }
    }
}
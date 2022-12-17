#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char x[100],y[100];
    int i,sum=0,len;
    cin>>x>>y;
    len=strlen(x);
    for(i=0;i<len;i++){
        if(x[i]!=y[i]){
            if(x[i]!=63&&y[i]!=63){
           sum=1; 
           break;
        }
        }
    }
        if(sum==0){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    
}
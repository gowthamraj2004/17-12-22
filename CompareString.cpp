#include <iostream>
#include<cstring>
using namespace std;
int main(){
    char x[100],y[100];
    int i,sum=0;
    cin>>x>>y;
    for(i=0;i<strlen(x)&&i<strlen(y);i++){
        if(x[i]==y[i]||x[i]=='?'||y[i]=='?'){
           sum=1; 
        }
        
    }
        if(sum==1){
            cout<<"Yes";
        }
        else{
            cout<<"No";
        }
    
}
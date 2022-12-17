#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char x[50],y[50];
    int i,len,min=0,max=0;
    cin>>x>>y;
    len=strlen(x);
    for(i=0;i<len;i++){
        if(x[i]!=y[i]){
            if(x[i]!=63&&y[i]!=63){
                min+=1;
                max+=1;
            }
            else{
                max+=1;
            }
        }
        else if(x[i]==y[i]&&x[i]==63){
            max+=1;
        }
    }
    cout<<min<<" "<<max;
}
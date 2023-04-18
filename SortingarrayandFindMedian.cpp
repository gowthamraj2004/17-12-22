#include<bits/stdc++.h>
#include<iomanip>
using namespace std;
int main(){
    int arr[50],n,i,a,b;
    cin>>n;
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    if(n%2!=0){
    a=n/2;
    cout<<arr[a];
    }
    else if(n%2==0){
        a=n/2;
        b=a-1;
        float c=((float)arr[a]+(float)arr[b])/2;
        cout<<fixed<<setprecision(1)<<c<<"\n";
    }
     for(i=0;i<n;i++){
        cout<<arr[i];
    }
}
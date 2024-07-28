#include<iostream>
using namespace std;

int unique(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans = ans^i;
    }
    for(int i=0;i<n-1;i++){
        ans= ans^i;

    }
    return ans;
}



int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<unique(arr,n);
}
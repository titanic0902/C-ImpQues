#include<iostream>
using namespace std;

int missing(int arr[],int n){

    int total = (n)*(n+1)/2;
     int sum=0;
    for(int i=0;i<n;i++){
       
        sum+= arr[i];
    }

    return total-sum;


}




int main(){
    int n;
    cin>>n;
    int arr[1000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<missing(arr,n);
}
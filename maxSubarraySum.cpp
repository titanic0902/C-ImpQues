#include<iostream>
using namespace std;
int MaxSum(int arr[],int n){
    int sum =0;
    int max=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];

        if(sum<0){
            sum=0;
        }
        if(sum>max){
            max = sum;
        }
    }
    return max;

}
int main(){
    int n;
    cin>>n;
    
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<MaxSum(arr,n);
   
    return 0;
}
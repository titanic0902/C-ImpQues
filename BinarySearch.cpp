#include<iostream>
using namespace std;

int BinarySearch(int arr[],int n,int key){
    int start =0;
    int end = n-1;
    int mid = (start+end)/2;
    while(start<=end){
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]<key){
            start = mid+1;

        }
        else{
            end = mid-1;
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int key;
    cin>>key;
    int arr[10000];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<BinarySearch(arr,n,key);
   
    return 0;
}
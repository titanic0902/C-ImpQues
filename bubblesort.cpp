#include<iostream>
using namespace std;



int printarray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}
 int bublesort(int input[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1-i;j++){
            if(input[j]>input[j+1]){
                int temp = input[j];
                input[j]=input[j+1];
                input[j+1] = temp;
            }
        }
    }
 }

int main(){
    int n;
    cin>>n;
    int input[1000];
     for(int i=0;i<n;i++){
        cin>>input[i];
    }
    bublesort(input,n);
    printarray(input,n);
}
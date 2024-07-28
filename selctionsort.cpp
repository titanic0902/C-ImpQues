#include<iostream>
using namespace std;



void printarray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}

void selectionsort(int input[],int n){
    for(int i=0;i<n-1;i++){
        int min = input[i];
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(input[j]<min){
                min = input[j];
                minindex = j;

            }
        }
        int temp = input[i];
        input[i] = input[minindex];
        input[minindex] = temp;
    }
}
int main(){
    int n;
    cin>>n;
    int input[1000];
     for(int i=0;i<n;i++){
        cin>>input[i];
    }
    selectionsort(input,n);
    printarray(input,n);
}
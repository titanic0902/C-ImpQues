#include<iostream>
using namespace std;



void printarray(int input[],int n){
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }
}

void Insertionsort(int input[],int n){
    for(int i=1;i<n;i++){
        int current = input[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(current<input[j]){
                input[j+1] = input[j];
            }
            else{
                break;
            }
            
        }
          input[j+1] = current;
      
    }
}



int main(){
    int n;
    cin>>n;
    int input[1000];
     for(int i=0;i<n;i++){
        cin>>input[i];
    }
    Insertionsort(input,n);
    printarray(input,n);
}
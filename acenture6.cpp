#include<iostream>
#include <algorithm>
using namespace std;


int output(int input[],int n, int sum){
    int answer =0;
    
    sort(input, input + n);


       if(input[0]+input[1]<=sum){
       return   input[0]* input[1];
       }
       else{
        return 0;
       }
    

}






int main(){
    int n;
    cin>>n;
    int sum;
    cin>>sum;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<output(input,n,sum);
    return 0;

}
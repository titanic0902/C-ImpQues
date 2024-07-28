#include<iostream>
using namespace std;

int count(int input[],int n,int num,int diff){
    int count=0;
    for(int i=0;i<n;i++){
        if(abs(input[i]-num)<=diff){
            count++;
        }
        if(count>0){
            return count;
        }
        else{
            return -1;
        }
    }
   

}



int main(){
    int n;
    cin>>n;
    int num;
    cin>>num;
    int diff;
    cin>>diff;
    int input[100];

    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<count(input,n,num,diff);
    return 0;
}
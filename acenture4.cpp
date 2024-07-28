#include<iostream>
using namespace std;


int count(int input[],int n, int r,int unit){
    int count =0;
    int sum =0;
    int limit = r*unit;
    for(int i=0;i<n;i++){
       
        sum+=input[i];
        if(sum>=limit){
            count = i+1;
            break;
        }
       
    }
      if(sum<limit){
            return 0;
        }

    return count;
}
int main(){
    int n , r , unit;
    cin>>n>>r>>unit;
    int input[100];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    cout<<count(input,n,r,unit);
    return 0;
    
}
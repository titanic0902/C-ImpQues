#include<iostream>
using namespace std;

int sumdifference(int m, int n){
    int sum1=0 , sum2=0;
    for(int i=0;i<=m;i++){
        if(i%n == 0){
            sum1+=i;
        }
        else{
            sum2+=i;
        }
    }
    return sum2-sum1;
}





int main(){
    int m;
    cin>>m;
    int n;
    cin>>n;
    cout<<sumdifference(m,n);
}
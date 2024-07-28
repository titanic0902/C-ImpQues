#include<iostream>
using namespace std;

int Reverse(int num){
    int digit =0;
    int rev =0;
    while(num!=0){
        digit = num%10;
        rev = rev*10+ digit;
        num =num/10;

    }
    return rev;
}
int main(){
    int num;
    cin>>num;
    cout<<Reverse(num);
    return 0;
}
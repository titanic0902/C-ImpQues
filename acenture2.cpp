#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int smallestproduct(int *array, int n,int sum){
    int ans , check;
    sort(array, array+n);
    check = array[0] +array[1];
    if(check<=sum){
        ans = array[0]*array[1];
    }
    else{
        return 0;
    }
    return ans;
}



int main(){
    int n,sum;
    cin>>sum>>n;
    int result;
    int array[n];

    for(int i=0;i<n;i++){
        cin>>array[i];
    }
 result = smallestproduct(array,n,sum);
 cout<<result;
 return 0;

}
#include<iostream>

using namespace std;

int main(){
    int n ; 
    cout<<"\nEnter size of array:";
    cin>>n;

    int a[n];

    cout<<"\nEnter elements:";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }
    int sum=0;
    for(int i=0 ; i<n ; i++){
        sum=0;
        for(int j=i ; j<n ; j++){
            
            sum += a[j];
            cout<<sum<<" ";
        }
    }
    return 0;
}
#include<iostream>

using namespace std;

int main(){
    int n;
    cout<<"\nEnter size of the array:";
    cin>>n;

    int a[n], max[n], m=0;

    cout<<"\nEnter Elements:";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    for(int i=0 ; i<n ; i++){
        if(max==NULL){
            max[0]=a[0];
            m = max[0];
        }
        else if(a[i]>m){
            max[i]=a[i];
            m = a[i];
        }
        else{
            max[i]=m;
        }
    }

    for(int i=0 ; i<n ; i++){
        cout<<max[i]<<" ";
    }

    return 0;
}
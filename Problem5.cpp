#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\nEnter Size of Array:";
    cin>>n;

    int a[n];

    cout<<"\nEnter elements:";
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    const int N = 1e6+2;
    int idx[N];
    
    for(int i=0 ; i<n ; i++){
        idx[i]=-1;
    }

    int minidx = 999 ;
    for( int i=0 ; i<n ; i++){
        if( idx[a[i]] != -1){
            minidx = min(minidx, idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }

    if( minidx == 999){
        cout<<"endl -1";
    }
    else{
        cout<<"\n"<<minidx+1;
    }

    
    return 0;
}
#include<iostream>

using namespace std;

int main(){

    int n;
    cout<<"\nEnter Size of array:";
    cin>>n;

    int a[n+1];
    a[n] = -1;

    cout<<"\nEnter Elements:";
    
    for(int i=0 ; i<n ; i++){
        cin>>a[i];
    }

    int mx = -1, ans =0;

    for(int i=0 ; i<n ; i++){

        if( a[i]>mx && a[i]>a[i+1]){
            ans++;
        }
        mx = max(a[i],mx);
    }

    cout<<"\nNo. of Record breaking days: "<<ans;

    return 0;
}
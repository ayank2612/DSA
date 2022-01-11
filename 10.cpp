#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i=n; i>(n/2)+1; i--){
        for(int j=n-i-1; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1) cout<<n-i+1;
            else cout<<" ";
        }
        cout<<endl;
    }

    for(int i=1; i<=(n/2)+1; i++){
        for(int j=n; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=2*i-1; k++){
            if(k==1 || k==2*i-1) cout<<(n/2)+i;
            else cout<<" ";
        }
        cout<<endl;
    }

}
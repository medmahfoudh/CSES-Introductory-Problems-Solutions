#include<iostream>
using namespace std;
#define ll long long

const int mod = (int)(1e9+7);

int main(){
    int n;
    cin>>n;
    int ans = 1;
    for (int i =  0 ; i<n ; i++){
        ans=ans*2;
        ans%=mod;
    }
    cout<<ans;
}

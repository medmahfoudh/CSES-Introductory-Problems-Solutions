#include<iostream>
using namespace std;
#define ll long long


int q;
ll k;

ll pw10(int x){
    ll res=1;
    for(int i=0; i<x; i++){
        res*=10;
    }
    return res;
}

int solve(ll n ){
    if(n<9){
        return (int) n+1;
    }
    int len=1;
    while (9*pw10(len -1) * len<n)
    {
        n-=9*pw10(len-1)*len;
        len++;
    }

    string s = to_string(pw10(len-1) + n/len);
    return (int) (s[n%len] - '0');
}

int main(){
    cin>>q;
    for(int j=0; j<q; j++){
        cin>>k;
        cout<<solve(k-1)<<"\n";
    }
}
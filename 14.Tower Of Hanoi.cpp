#include<iostream>
using namespace std;
#define ll long long

void TH(int src , int dest , int aux , int n){
    if (n<=0)
        return;

    TH(src , aux , dest, n-1);
    cout<<src <<" "<<dest<<endl;
    TH(aux, dest, src, n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<(1<<n)-1<<endl;
    TH(1,3,2,n);
}


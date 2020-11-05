#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    int m;
    cin>>n>>m;
    long long a[n];
    a[0] = 0;
    a[1] = 1;
    long long k = n%m;
    for(long long i = 2; i <=n;i++){
        a[i] = (a[i-1]+a[i-2])%m;
    }
    cout<<a[n];
}
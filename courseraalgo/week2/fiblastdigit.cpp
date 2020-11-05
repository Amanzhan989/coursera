#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    cin>>n;
    long long a[n];
    a[0] = 0;
    a[1] = 1;
    for(long long i = 2; i <=n;i++){
        a[i] = (a[i-1]+a[i-2])%10;
    }
    cout<<a[n];
}
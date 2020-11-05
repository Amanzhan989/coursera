#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long long n;
    long long m = 1;
    cin>>n;
    long long a[n];
    a[0] = 0;
    a[1] = 1;
    if(n==0)
        cout<<0;
    else{
        for(long long i = 2; i <=n;i++){
            a[i] = a[i-1]+a[i-2];
            m+=a[i];
        }
        cout<<m%10;
    }
}
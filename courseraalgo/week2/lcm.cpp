#include<iostream>
#include<cmath>
using namespace std;
long long gsd1(long n,long k){
    if (k==0)
        return n;
    else
        return gsd1(k,n%k);
    }
int main(){
    long long n,k;
    cin>>n>>k;
    long long gsd = gsd1(n,k);
    cout<<(n*k)/gsd;
}
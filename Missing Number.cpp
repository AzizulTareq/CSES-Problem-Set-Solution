#include <bits/stdc++.h>

using namespace std;

int main(){

    long long n,i;
    cin>>n;

    long long nn = n-1, sum = 0;

    long long arr[nn];
    for(i=0; i<nn; i++){
        cin>>arr[i];
        sum += arr[i];
    }

    cout<<((n*(n+1))/2) - sum<<endl;




}

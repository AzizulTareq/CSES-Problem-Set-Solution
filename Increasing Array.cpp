#include <iostream>

using namespace std;

int main(){

    long long n, i;
    cin>>n;
    long long arr[n];
    for(i=0; i<n; i++){
        cin>>arr[i];
    }
    long long ans = 0;
    for(i=0; i<n; i++){
        if(i != 0 && arr[i] < arr[i-1]){
            ans += abs(arr[i-1] - arr[i]);
            arr[i] += abs(arr[i-1] - arr[i]);
        }
    }

    cout<<ans<<endl;
}

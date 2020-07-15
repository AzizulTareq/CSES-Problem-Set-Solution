#include <iostream>

using namespace std;

int main(){

    long long n;
    cin>>n;

    if(n == 0 || n == 1){
        cout<<n<<endl;
    }else if(n <= 3){
        cout<<"NO SOLUTION"<<endl;
    }else if(n == 4){
        cout<<2<<" "<<4<<" "<<1<<" "<<3<<endl;
    }else{
    long long i;
    for(i=1; i<=n; i++){
        if(i % 2 != 0){
            cout<<i<<" ";
        }
    }

    for(i=2; i<=n; i++){
        if(i % 2 == 0){
            cout<<i<<" ";
        }
    }
    }

}

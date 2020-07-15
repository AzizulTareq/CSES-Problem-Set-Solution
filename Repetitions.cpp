#include <bits/stdc++.h>

using namespace std;

int main(){

    string s;
    cin>>s;

    int ans = 0;
    char ch = 'A';
    int cnt = 0;

    for(char d : s){
        if(d == ch){
            ++cnt;
            ans = max(ans, cnt);
        }else{
            ch = d;
            cnt = 1;
        }
    }

    cout<<ans<<endl;
}

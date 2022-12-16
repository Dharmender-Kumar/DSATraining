#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+2;
vector<int> cs(N,0);


int main() {

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    for(int i=0;i<n;i++){
        cs[v[i]]++;
    }
    for(int i=0;i<N;i++){
        if(cs[i]!=-1){
            while(cs[i]--){
                cout<<i<<" ";
            }
        }
    }
}
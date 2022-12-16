#include <bits/stdc++.h>
using namespace std;


void solution(int n){

    // 1) iteration o(n);
    int set=0,unset=0;
    int x = n;
    cout<<__builtin_popcount(x)<<endl;

    while(n){

        if(n&1) set++;
        else unset++;

        n= n>>1;
    }
    cout<<set<<" "<<unset<<endl;;
    
    int count =0;
    while(x){
        x = x&(x-1);
        count++;
    }
    cout<<count;

}
int xorOfNumerInSeries(int n){
    if( n%4 ==0) return n;
    if( n%4 ==1) return 1;
    if( n%4 ==2) return n+1;
    if( n%4 ==3) return 0;
    else return 0;
}

void findMissingNumInSeries(vector<int> v){

    int init = v[0];
    int n = v.size();
    for(int i=1;i<n;i++){
         init ^=v[i];
    }
    int maxEle=0;
    for(int i=0;i<n;i++){
        maxEle = max(v[i],maxEle);
    }
    int xor1=v[0];
    for(int i=1;i<=maxEle-2;i++){
        xor1^=v[i];
    }
    int ans = xorOfNumerInSeries(maxEle);
    int a = ans^xor1;
    cout<<a<<endl;

    for(int i=1;i<=n;i++){
        int x = i^init;
        if(x == ans) 
        {cout<<i<<endl; 
        break;}
    }
}

int main() {

    // solution(10);

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    findMissingNumInSeries(v);


   

}
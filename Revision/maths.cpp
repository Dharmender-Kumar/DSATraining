#include <bits/stdc++.h>
using namespace std;


void seePrime(int n){

    vector<int> v(n+1,0);

    for(int i=2;i<=n;i++){
        if(v[i]==0){
            for(int j=i*i;j<=n;j+=i){
               v[j]=1;
            }
        }
    }
    for(int i=1;i<=n;i++){
        if(v[i]==0) {cout<<i<<" ";}
    }
}

void primeFactors(int n){
    vector<int> v(n+1);
    for(int i=1;i<=n;i++){
       v[i]=i;
    }

    for(int i=2;i<=n;i++){
        if(v[i]==i){
            for(int j=i*i;j<=n;j+=i){
                v[j]=i;
            }
        }
    }
    while(n!=1){
        int x = v[n];
        cout<<x<<" ";
        n/=x;
    }
}
// inclusion and exclusion principal
// including or excluding a thing

// how many number bw (a,b) that are divisible by x1,x2,x3....

void sol(int a,int n,int x,int y){
     
    int x1=n/x,x2=a/x;
    int y1=n/y,y2=a/y;

    int c1=n/(x*y),c2=a/(x*y);

    // <=a total
    int resB = x2+y2-c2;
    int resA = x1+y1-c1;

    cout<<resA-resB<<endl;

}

int main() {
    int n;cin>>n;
    // seePrime(n);
    // primeFactors(n);
    sol(20,40,5,7);
    
}
#include <bits/stdc++.h>
using namespace std;

// o(n)
int kadensAlgo(vector<int> v,int n){
        int currSum=0;
        int res=INT_MIN;

        for(int i=0;i<n;i++){
            currSum+=v[i];
            if(currSum<0){
                res=max(res,currSum);
                currSum=0;
            }else{
                res=max(res,currSum);
            }
        }
       
        return res;
    }
int maxSubarraySumCircular(vector<int>& v) {
    int n = v.size();

    int nw = kadensAlgo(v,n);
    int sum=0;
    int ncm=INT_MIN;
    for(int i=0;i<n;i++){
       ncm=max(ncm,v[i]);
    }
    if(ncm<=0) return ncm;
    for(int i=0;i<n;i++){
        sum+=v[i];
        v[i]=v[i]*(-1);
    }
    int wp = sum+kadensAlgo(v,n);
    cout<<nw<<" "<<wp<<endl;

    return max(wp,nw);
}

// nlog(n)
void pairSumBinary(vector<int> v,int st,int ed,int k){
    sort(v.begin(),v.end());
    while(st<ed){
        if(v[st]+v[ed]==k){
            cout<<"yes"<<endl;
            return;
        }else if(v[st]+v[ed]>k){
            ed--;
        }else{
            st++;
        }
    }

}
const int N=1e3+2;
vector<vector<int>> dp(N,vector<int>(N,-1));
// vector<int> dp(N,-1);
int pairSumDp(vector<int> v,int n,int k){

    if(k==0){
        dp[n][k] = 1;
        return dp[n][k];
    }if(n==0 && k!=0){
        dp[n][k] = 0;
        return dp[n][k];
    }
    if(dp[n][k]==k){
        dp[n][k]=1;
    }
    if(v[n]>k){
        return dp[n][k] = pairSumDp(v,n-1,k);
    }else{
        return dp[n][k] = pairSumDp(v,n-1,k-v[n]) || pairSumDp(v,n-1,k);
    }
}

int main() {
    int n,k;cin>>n>>k;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];
    // pair sum;
    // for(int i=0;i<n-1;i++){
    //    for(int j=i+1;j<n;j++){
    //        if(v[i]+v[j]==k){
    //         cout<<"("<<i<<","<<j<<")"<<endl;
    //        }
    //    }
    // }
    // pairSumBinary(v,0,n-1,k);
    
    if(pairSumDp(v,n-1,k)) cout<<"yes"<<endl;
    else cout<<"NO"<<endl;

}
#include <bits/stdc++.h>
using namespace std;

vector<int> articulationPoints(int V, vector<int>adj[]) {
        // Code here
        vector<int> res;
        
        map<int,int> mp;
        for(int i=0;i<V;i++){
            mp[i]=adj[i].size();
        }
        for(auto x: mp){
            if(mp.second())
        }
    }

int binaryFreq(vector<int> v,int k,int st, int ed){
     
    int mid = (v[st]+v[ed])/2;
    if(k==v[mid]){
        int count=0;
        for(int i=mid+1;i<v.size();i++){
          if(v[i]==k) count++;
          else break;
        }
        for(int i=mid-1;i>=0;i--){
            if(v[i]==k) count++;
            else break;
        }
        return count;
    }

    else if(v[mid]<k){
        return binaryFreq(v,k,0,mid-1);
    }else{
        return binaryFreq(v,k,mid+1,v.size());
    }

}


int main() {
   int n,k;cin>>n>>k;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   binaryFreq(v,k);


}
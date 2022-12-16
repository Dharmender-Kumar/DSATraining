#include <bits/stdc++.h>
using namespace std;

int powerOfNum(int n,int p,vector<int> &dp) {
    if(p==1){
        dp[p]=n;
        return dp[p];
    }
    if(p==0){
        dp[p]=1;
        return dp[p];
    }
    if(dp[p]!=-1){
        cout<<"yes"<<endl;
        return dp[p];
    }
    if(p%2==0){ 
        cout<<p<<" "<<dp[p]<<" "<<endl;
        dp[p] = powerOfNum(n,p/2,dp)*powerOfNum(n,p/2,dp);
        cout<<p<<" "<<dp[p]<<" "<<endl;
    }
    else {
        cout<<p<<" "<<dp[p]<<" "<<endl;
        dp[p] = n*powerOfNum(n,p/2,dp)*powerOfNum(n,p/2,dp);
        cout<<p<<" "<<dp[p]<<" "<<endl;
    }
    return dp[p];
}

bool sorted(int arr[],int n){

    if(n==1) return 1;

    cout<<arr[0]<<endl;
    
    bool restArray = sorted(arr+1,n-1);
    // cout<<restArray<<"  "<<arr[0]<<endl;
    return (arr[0]<arr[1] && restArray);
}

int fact1(int n){
    if(n==1 || n==2){
        return n;
    }
    return n*fact1(n-1);
}

void inc(int n){
    if(n==0) return;
    inc(n-1);
    cout<<n<<endl;

}

void firstLastOccurenceNumbers(vector<int> v,int n){

    map<int,int> mp;
    map<int,int> mpr;
    vector<pair<int,int>> flv;
    
    for(int i=0;i<n;i++){
        mp[v[i]]++;
        mpr[v[i]]=i;
        if(mp[v[i]]==1){
            flv.push_back(make_pair(v[i],i));
        }
    }

    for(int i=0;i<flv.size();i++){
        cout<<flv[i].first<<" F:"<<flv[i].second<<" & L:"<<mpr[flv[i].first]<<endl;
    }

}
void firstLast(vector<int> v,int n,int k){
    
    for(int i=0;i<n;i++){
        if(v[i]==k) {cout<<"F: "<<i<<" & ";break;}
        
    }
     for(int i=n-1;i>=0;i--){
        if(v[i]==k) {cout<<"L: "<<i<<endl;break;}
    }
}
int zc=0;

void towerOfhanaoi(int n,char src,char dest,char helper){

    if(n==0) return;
    towerOfhanaoi(n-1,src,helper,dest);
    zc++;
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerOfhanaoi(n-1,helper,dest,src);
    zc++;
}

string moveAllX(string s){
    if(s.length()==0) return "";
    char x=s[0];
    string ans = moveAllX(s.substr(1));
        cout<<ans<<endl;

    if(x=='x'){
        return ans+x;
    }
    return x+ans;
    

}
int main() {
   
//    int n,p;cin>>n>>p;
//    int n;cin>>n;
//    vector<int> v(n);
//    for(int i=0;i<n;i++) cin>>v[i];
//    firstLastOccurenceNumbers(arr,n);
map<int,int> mp;
// n = max(n,mp.size());
// towerOfhanaoi(10,'A','C','B');
// cout<<zc<<endl;
cout<<moveAllX("xxtenxbenxten");
set<char> st;
st.insert('c');
   

    
}
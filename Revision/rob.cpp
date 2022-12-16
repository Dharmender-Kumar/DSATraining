#include <bits/stdc++.h>
using namespace std;

int rob(vector<int>& v){

    if(v.size()==1) return v[0];
    if(v.size()==2) return max(v[0],v[1]);
    if(v.size()==3) return max(v[0]+v[2],v[1]);
    int money = 0;
    int currMoney=0;
    vector<int> om,em;
    int oddM=0,eveM=0;
    for(int i=0;i<v.size();i++){
        if(i%2==0){ em.push_back(v[i]); eveM+=v[i];}
        else{ om.push_back(v[i]); oddM+=v[i];}
    }
    currMoney = max(oddM,eveM);

    int tempSum=0;
    int i=0;
    int j=0;
    int track=j;

    while(i<om.size()){
       

    }
 
    return max(tempSum,currMoney);
}

int main() {
   int n;cin>>n;
   vector<int> v(n);
   for(int i=0;i<n;i++) cin>>v[i];

   cout<<rob(v);

}
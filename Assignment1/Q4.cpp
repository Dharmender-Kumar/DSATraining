#include <bits/stdc++.h>
using namespace std;

// For a given set of flights, the arrival and departure times are provided in
// 2 arrays. Lets say there are 3 flights with arrival and departure times
// provided as per the arrays provided below:
// int arr[] = { 100, 300, 500 };
// int dep[] = { 900, 400, 600 };
// Find the minimum number of runways required to land/depart for each
// flight.

int main() {

    int n;cin>>n;
    vector<pair<int,int>> vp;
    for(int i=0;i<n;i++){
        int arr;cin>>arr;
        int dep;cin>>dep;
      
        vp.push_back(make_pair(arr,dep));
    }
    sort(vp.begin(),vp.end());
    int count=1;
    for(int i=1;i<vp.size();i++){
          if(vp[i].first<vp[i-1].second){
            count++;
          }
    }
    cout<<"runways: "<<count<<endl;
}
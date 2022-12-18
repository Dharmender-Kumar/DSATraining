#include <bits/stdc++.h>
using namespace std;

// An array contains only 0s and 1s. Write a code to count the Sub arrays
// having equal no. of 0s and 1s


// efficient
void optimalCount(vector<int> v,int n){

    unordered_map<int, int> ump;
    int sum = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == 0) v[i] = -1;
 
        sum += v[i];

        if (sum == 0) count++;
        if (ump[sum]) count += ump[sum];
 
        if (ump[sum] == 0)
            ump[sum] = 1;
        else
            ump[sum]++;
    }
    cout<<count<<endl;
    return;
}

// bruteForce
//  O(n^2)
void bruteCount(vector<int> v,int n){

    int count=0;
    for(int i=0;i<n;i++){
        int p1=0;
        int p0=0;
        for(int j=i;j<n;j++){
           if(v[j]==0) p0++;
           if(v[j]==1) p1++;
           if(p0==p1) count++;
        }
    }
    cout<<count<<endl;
}

int main() {
    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    optimalCount(v,n);
    bruteCount(v,n);

}



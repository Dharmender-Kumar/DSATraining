#include <bits/stdc++.h>
using namespace std;

// Using Binary Search find the count/frequency (how many times it
// occurs) of a particular element in an array.

void findFreq(vector<int> v, int s,int e,int k){
    int mid = (s+e)/2;
    if((mid==0 && v[mid]!=k )|| (mid==e && v[mid]!=k)) {
        cout<<"key not found"; return;
    }
    if(v[mid]==k){
        int count=1;
        int i=mid;
        i--;
        while(v[i]==k){
           count++;
           i--;
        }
        i=mid+1;
        while(v[i]==k){
           count++;
           i++;
        }
        cout<<count<<endl;
        return;
    }
    else if(v[mid]>k){
        return findFreq(v,mid+1,e,k);
    }else{
        return findFreq(v,s,mid-1,k);
    }
}

int main() {

    int n;cin>>n;
    vector<int> v(n);

    for(int i=0;i<n;i++) cin>>v[i];

    int k;cin>>k;
    findFreq(v,0,n-1,k);


   

}
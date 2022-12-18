#include <bits/stdc++.h>
using namespace std;

// Three integer arrays are sorted. Find the common elements in the 3
// arrays
int main() {

    int a,b,c;
    cin>>a>>b>>c;
    vector<int> v1(a);
    vector<int> v2(b);
    vector<int> v3(c);

    for(int i=0;i<a;i++) cin>>v1[i];
    for(int i=0;i<b;i++) cin>>v2[i];
    for(int i=0;i<c;i++) cin>>v3[i];

    vector<int> temp;

    int i=0;
    int j=0;
    while(i<a && j<b){
        if(v1[i]==v2[j]){
            temp.push_back(v1[i]);
            i++;j++;
        }else if(v1[i]>v2[j]){
            j++;
        }else{
            i++;
        }
    }

    j=0;
    i=0;
    set<int> res;
    while(j<temp.size() && i<c){
        if(v3[i]==temp[j]){
            res.insert(v3[i]);
            i++;j++;
        }else if(v3[i]>temp[j]){
            j++;
        }else{
            i++;
        }
    }   
    for(auto k: res){
        cout<<k<<" ";
    } 
}
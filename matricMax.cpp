#include <bits/stdc++.h>
using namespace std;


void solution(vector<int> v, int n){
    vector<int> sol(n,0);
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(v[j]>v[i]){
            sol[i]++;
           }
        }
    }
    for(int i=0;i<n;i++){
        cout<<sol[i]<<" ";
    }
}
 int longestConsecutive(vector<int>& v) {

        priority_queue<int, vector<int>, greater<int>> pq;

        for(int i=0;i<v.size();i++){
            pq.push(v[i]);
        }
        vector<int> temp;
        temp.push_back(pq.top());
        pq.pop();
        cout<<temp[0]<<endl;
        cout<<pq.top()<<endl;
        int count=1;
        int res = 1;
        int i=0;
        while(!pq.empty()){
          if(pq.top()==temp[i]){
            pq.pop();
          }
          else if(pq.top()==temp[i]+1){
             temp.push_back(pq.top());
             count++;
             i++;
             pq.pop();
             res = max(res,count);
          }
          else{
            res = max(res,count);
            count=1;
            i=0;
            temp.clear();
            temp.push_back(pq.top());
            pq.pop();
          }
        }

    return res;
        
}
void StringFunction(string s1,string s2){
     
    char * s = &s1[0];
    char * str = &s2[0];
    int count=0;
    while(*(s+count)!='\0'){
        count++;
    }
    cout<<count<<endl;
    string res = "";
    res+=*(s+1);
    res+=*(str+2);
    cout<<res<<endl;
}



int main() {

    int n;cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    // solution(v,n);
    // StringFunction("hello","world");
    cout<<longestConsecutive(v);
   

}
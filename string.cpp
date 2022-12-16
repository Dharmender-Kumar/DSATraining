#include <bits/stdc++.h>
using namespace std;


void stringNcat(string s1,string s2,int n){
    for(int i=0;i<n;i++){
        s1+=s2[i];
    }
    cout<<s1<<endl;
}
void stringNcomp(string s1,string s2,int n){
    string x="";
    int res=0;
    for(int i=0;i<n;i++){
        if(s1[i]!=s2[i]){
            res=s1[i]-s2[i];
            break;
        }
    }

    cout<<res<<endl;
    cout<<abs(res)<<endl;
}

int main() {

    string s1="hello";
    string s2="helxe";
    
    stringNcomp(s1,s2,4);

    
   

}
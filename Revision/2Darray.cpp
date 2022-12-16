#include <bits/stdc++.h>
using namespace std;


void spiralMatrix(){
    int n,m;cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));
    // vector<vector<int>> v;
    // int v[n][m];

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            // int x;cin>>x;
            cin>>v[i][j];
            // v[i].push_back(x);
        }
    }

//    spiral matrix;
    int rs=0,re=n-1,cs=0,ce=m-1;

    while(rs<=re && cs<=ce){
        // top row
        for(int i=cs;i<=ce;i++){
            cout<<v[rs][i]<<" ";
        }
        rs++;

        // right col
        for(int i=rs;i<=re;i++){
            cout<<v[i][ce]<<" ";
        }
        ce--;

        // bottom row
        if(rs<=re){
            for(int i=ce;i>=cs;i--){
                cout<<v[re][i]<<" ";
            }
            re--;
        }

        // left col
        if(cs<=ce){
            for(int i=re;i>=rs;i--){
                cout<<v[i][cs]<<" ";
            }
            cs++;
        }
    }
}

void inverseMat(){
    // inverse of matrix
    int n,m;cin>>n>>m;
    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            swap(v[i][j],v[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           cout<<v[i][j]<<" ";
        }cout<<endl;
    }
}

int main() {
    
    int n,m,k;cin>>n>>m>>k;
    vector<vector<int>> v(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    
    int i=0,j=0;
    while(true){
        if(k==v[i][j]){ cout<<i<<" "<<j<<endl;break;}
        else if(k>v[i][j] &&){
            i++;
        }
    }
    // matrix multiplication

}
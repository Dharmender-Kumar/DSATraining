#include <bits/stdc++.h>
using namespace std;

int sumOfDigit(int n){

    if(n%10==0) return 0;
    else{
        return n%10+sumOfDigit(n/10);
    }
}
int doublePointer(int * arr,int b){
    int count=0;
    int *ptr = arr;
    int *p = ptr;
    for(int i=0;i<b;i++){
        if(*(*&p+i)%2==0){
           count++;
           *p++;
        }
    }
    return count;
}
int even(int * arr,int b){
    int count=0;
    // int *ptr = arr[0];
    for(int i=0;i<b;i++){
        if(*(arr+i)%2==0){
           count++;
           *arr++;
        }
    }
    return count;
}
int odd(int * arr,int b){
    int count=0;
    for(int i=0;i<b;i++){
        if(*(arr+i)%2!=0){
           count++;
        }
    }
    return count;
}


void kthelement(){
    int n;cin>>n;
    vector<int> v(n);
    priority_queue<int,vector<int>,greater<int>> pq;//minheap

    for(int i=0;i<n;i++){
        cin>> v[i];
        pq.push(v[i]);
    }
    sort(v.begin(),v.end());

    int k;cin>>k;
    int count=0;
    while(count<k-1){
        pq.pop();
        count++;
    }
    cout<<pq.top()<<endl;
}

void positiveNegative(vector<int> v,int n){
    int a = 0;
    int b = n-1;

    while(a<b){
        if(v[a]<0){
             a++;
        }
        else if(v[a]>=0){
            swap(v[a],v[b]);
            b--;
        }
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}

void sorting(vector<int> v,int n){
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
           if(v[j]>v[j+1]){
             swap(v[j],v[j+1]);
           }
        }
    }
}

int matrix(int **a,int n){
    int sum=0;
     for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            sum += *(*(a+i)+j);
        }
    }
    return sum;
}

int main() {

    // int arr[]={27,33,42,96,14,24,33};
    //  int b =7;
    // int evenVal = doublePointer(arr,b);
    // cout<<evenVal;
    // int n = 124;
    // int res = sumOfDigit(n);
    // cout<<res;
    // int n;cin>>n;
    // vector<int> v(n);

    // for(int i=0;i<n;i++){
    //     cin>> v[i];
    // }
    // positiveNegative(v,n);


    int mat[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>mat[i][j];
            cout<<mat[i][j];
        }
    }
    

    int **ptr;
    *ptr = mat[0];
    int res = matrix(ptr,3);
    cout<<res;
    
}
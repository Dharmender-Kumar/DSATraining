#include <bits/stdc++.h>
using namespace std;

void rotRightByOne(int arr[], int n,int s){
    int temp = arr[n-1];
    for(int i=n-1;i>s;i--){
        arr[i]=arr[i-1];
    }
    arr[s] = temp;
}

void rotRight(int arr[],int n,int d,int s){
    for(int i=0;i<d;i++){
        rotRightByOne(arr,n,s);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotRightByX(int arr[],int n,int d){
    int mod=d%n;
    for(int i=0;i<n;i++){
        cout<<arr[(n+i-mod)%n]<<" ";
    }
}

void rotLeftByOne(int arr[], int n,int s){
    int temp = arr[s];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1] = temp;
}

void rotLeft(int arr[],int n,int d,int s){
    for(int i=0;i<d;i++){
        rotLeftByOne(arr,n,s);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

void rotLeftByX(int arr[],int n,int d){
    int mod=d%n;
    for(int i=0;i<n;i++){
        cout<<arr[(i+mod)%n]<<" ";
    }
}

void reverseArray(int *arr,int n){
    int i=0,j=n-1;
    while(i<j){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

int main() {
   int n,d;
   cin>>n;
//    d=d%n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
//    rotRight(arr,n,d,0);
//    cout<<endl;
//    rotLeftByX(arr,n,d);
    
//     reverseArray(arr,n);
//     for(int i=0;i<n;i++){
//        cout<<arr[i];
//    }
   
   return 0;
}

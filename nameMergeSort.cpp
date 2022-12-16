#include <bits/stdc++.h>
using namespace std;


void merge(vector<string>& arr,int l,int mid, int r){

  int n1=mid-l+1;//size of first sub array
  int n2=r-mid;//size of second subarray

  vector<string> a(n1);//temp arrray for n1
  vector<string> b(n2);//temp array for n2

  for(int i=0;i<n1;i++){
      a[i]=arr[l+i];                //getting input of subarray
  }
  for(int i=0;i<n2;i++){
      b[i]=arr[mid+1+i];
  }

int i=0,j=0,k=l;       //for pointing elements in array
while(i<n1 && j<n2){        //   comparing elements in in array
    if(a[i]<b[j]){
    arr[k]=a[i];
    k++; 
    i++;
    }
    else{
        arr[k]=b[j];
        k++; 
        j++;
    }
}

while(i<n1){              //if any pointer reaches to end 
    arr[k]=a[i];             //so for continuation of array
    k++; 
    i++;
}
while(j<n2){
    arr[k]=b[j];
    k++; 
    j++;
}

}

void mergeSort(vector<string>& arr,int l,int r){
    if(l<r){
        int mid=(l+r)/2;
        mergeSort(arr,l,mid);        //division of array
        mergeSort(arr,mid+1,r);

        merge(arr,l,mid,r); //merging of array
    }
}

int main(){
    int n;cin>>n;
    // vector<int> v(n);
    // for(int i=0;i<n;i++) cin>>v[i];
    // mergeSort(v,0,4);
    // for(int i=0;i<n;i++){
    //     cout<<v[i]<<" ";
    // }
    vector<string> v(n);
    for(int i=0;i<n;i++){
        string s1;cin>>s1;
        transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
        v[i]=s1;;
    }
    mergeSort(v,0,n-1);
     for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}
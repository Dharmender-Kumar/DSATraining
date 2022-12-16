#include <bits/stdc++.h>
using namespace std;

void decimalToBinary(int n){
    string res="";

    while(n){
        int x = n%2;
        n/=2;
        res+=x+'0';
    }
    reverse(res.begin(),res.end());
    cout<<res<<endl;
}

bool isPrime(int n){
    if(n<=1) return false;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return false; 
    }
    return true;
}

void fibo(int n){
    int a1=0;
    int a2=1;

    while(n--){
        cout<<a1<<" ";
        int temp = a1;
        a1=a2;
        a2=a1+temp;;
    }
}

void fibo(int a,int b,int n){
    
    if(n==0) return;
    cout<<a<<" ";
    return fibo(b,a+b,n);
}

void pascalTriangle(int n){
    
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
          c=c*(i-j)/j;
        }
        cout<<endl;
    }
}
void pascalTriangle2(int n){
    
    for(int i=1;i<=n;i++){
        int c=1;
        for(int j=1;j<=i;j++){
            cout<<c<<" ";
          c=c*(i-j)/j;
        }
        cout<<endl;
    }
}

void binaryToDecimal(int n){
    int res=0;
    int count=0;
    while(n){
        int x = pow(2,count++);
        res+=x*(n%10);
        n/=10;
    }
    cout<<res<<endl;
}
void octalToDecimal(int n){
    int res=0;
    int count=0;
    while(n){
        int x = pow(8,count++);
        res+=x*(n%10);
        n/=10;
    }
    cout<<res<<endl;

}

int main() {
   
//    decimalToBinary(10);
    //   if(isPrime(2)) cout<<"yes";
    // fibo(0,1,14);
    // pascalTriangle(5);
    binaryToDecimal(1010);

}
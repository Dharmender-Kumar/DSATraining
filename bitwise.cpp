#include <bits/stdc++.h>
using namespace std;


// hacks bitwise operator

// 1) set bit at ith position

void setBit(int n, int pos){

    int setBitAt = 1<<pos;
    n = n|setBitAt;
    cout<<"Set bit: "<<n<<endl;
}

void unSetBit(int n,int pos){

    int unSetBitAt = ~(1<<pos);

    n = n & unSetBitAt;
    cout<<"Unset bit: "<<n<<endl;
}

void toogleBit(int n, int pos){

    int toogleBitAt = 1<<pos;

    n = n^toogleBitAt;
}

bool checkForSetOrUnsetBit(int n, int pos){
    int checkAt = 1<<pos;
    return n&checkAt;
}

void oneAndTwosComplement(int n){
    int onesComplement = ~n;
    int twosComplement = ~n+1;
    cout<<onesComplement<<" "<<twosComplement<<endl;
}

void stripLowestSetBit(int n){

    int strippedLowestBit = n & (n-1);
    cout<<strippedLowestBit<<endl;
}

void gettingLSB(int n){
    int lsb = n&(-n);
    cout<<lsb<<endl;
}

void mulNumBytwo(int n){
    int newNum = n<<1;
    cout<<n<<endl;
}

// tactics bitwise

//  A. xor of a number from 1 to n

void numOfBits(int n){

    int digit = (int)(log2(n))+1;
    cout<<digit<<endl;
}

int main() {
    int n;cin>>n;
    numOfBits(n);
   
    
}
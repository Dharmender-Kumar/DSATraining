#include<stdio.h>
// Implement the following String functions w/o using any of the library
// functions in C:
// string length, string copy, string reverse, string concatenate

int strLen(char str[]) {
    int count; 
    for (count = 0; str[count] != '\0'; ++count);
    return count; 
}
void strReverse(char s[],int n) {
    int i=0;
    // int j=n-1;
    for(i=0;i<n/2;i++){
        char temp=s[i];
        s[i]=s[n-i-1];
        s[n-i-1]=temp;
    }
    s[n]='\0';
}

void strCopy(char str2[30], char str1[30]){
    int i;
    for(i=0;str1[i]!='\0';i++){
    str2[i] = str1[i];
    }
    str2[i] = '\0';
}

void strConcatenate(char str1[],char str2[],int n,int m){
    int i=n;
    int j=0;
    for(j=0;j<m;j++,i++){
        str1[i]=str2[j];
    }
    str1[i]='\0';
}

int main(){
    char str1[1000], str2[1000]; 
    scanf("%s", str1); 
    scanf("%s", str2); 

    printf("%s\n%s\n\n",str1,str2);

    int n = strLen(str1);
    int m = strLen(str2); 
     printf("%d\n%d\n\n",n,m);

    strReverse(str1,n);
    strReverse(str2,m);
    printf("%s\n%s\n\n",str1,str2);

    strCopy(str1,str2);
    printf("%s\n%s\n\n",str1,str2);
    strConcatenate(str1,str2,n,m);
    printf("%s\n%s\n\n",str1,str2);


}
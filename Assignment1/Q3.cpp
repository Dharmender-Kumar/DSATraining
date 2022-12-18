#include <bits/stdc++.h>
using namespace std;
#define d 256

// For a given string and pattern, check if the pattern exists in the given
// string using:
// o Brute Force
// o KMP
// o Rabin Karp Algorithm
 
void computeLPSArray(char* pat, int M, int* lps){
    int len = 0;
    lps[0] = 0; // lps[0] is always 0
    int i = 1;
    while (i < M) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        }
        else {
            if (len != 0) {
                len = lps[len - 1];
            }
            else // if (len == 0)
            {
                lps[i] = 0;
                i++;
            }
        }
    }
}
void KMPSearch(char* pat, char* txt){
    int M = strlen(pat);
    int N = strlen(txt);
    int lps[M];
    computeLPSArray(pat, M, lps);
    int i = 0; // index for txt[]
    int j = 0; // index for pat[]
    while ((N - i) >= (M - j)) {
        if (pat[j] == txt[i]) {
            j++;
            i++;
        }
        if (j == M) {
            printf("Found pattern at index %d ", i - j);
            j = lps[j - 1];
        }
        else if (i < N && pat[j] != txt[i]) {
            if (j != 0)
                j = lps[j - 1];
            else
                i = i + 1;
        }
    }
}

void Rabincarpsearch(string pat,string txt, int q){
    int M = pat.length();
    int N = txt.length();
    int i, j;
    int p = 0; // hash value for pattern
    int t = 0; // hash value for txt
    int h = 1;
 
    for (i = 0; i < M - 1; i++)
        h = (h * d) % q;
 
    for (i = 0; i < M; i++) {
        p = (d * p + pat[i]) % q;
        t = (d * t + txt[i]) % q;
    }
    for (i = 0; i <= N - M; i++) {
        if (p == t) {
            for (j = 0; j < M; j++) {
                if (txt[i + j] != pat[j]) {
                    break;
                }
            }
 
            if (j == M)
                cout << "Pattern found at index " << i
                     << endl;
        }
        if (i < N - M) {
            t = (d * (t - txt[i] * h) + txt[i + M]) % q;
            if (t < 0)
                t = (t + q);
        }
    }
}



void BruteForcesearch(string pat, string txt){
    int M = pat.length();
    int N = txt.length();
    for (int i = 0; i < N; i++) {
        int j;
        for (j = 0; j < N-M; j++)
            if (txt[i + j] != pat[j])
                break;
        if (j == M) // if pat[0...M-1] = txt[i, i+1, ...i+M-1]
            cout << "Pattern found at index " << i << endl;
    }
}


int main() {

    string s1,s2;cin>>s1>>s2;
    BruteForcesearch(s1,s2);
    int q=INT_MAX;
    Rabincarpsearch(s1,s2,q);
    KMPSearch(&s1[0],&s2[0]);
   

}
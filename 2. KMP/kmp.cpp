#include<iostream>
using namespace std;

void computeLPS(string pat, int lps[]) {
    int len = 0;
    lps[0] = 0;

    int i = 1;
    while (i < (int)pat.length()) {
        if (pat[i] == pat[len]) {
            len++;
            lps[i] = len;
            i++;
        } else {
            if (len != 0) {
                len = lps[len - 1];
            } else {
                lps[i] = 0;
                i++;
            }
        }
    }
}

void KMPSearch(string pat, string txt) {
    int M = pat.length();
    int N = txt.length();

    int lps[M];
    computeLPS(pat, lps);

    int i = 0; 
    int j = 0; 
    while (i < (int)N) {
        if (pat[j] == txt[i]) {
            i++;
            j++;
        }

        if (j == M) {
            cout << "Found pattern at index " << i - j << endl;
            j = lps[j - 1];
        } else if (i < N && pat[j] != txt[i]) {
            if (j != 0) {
                j = lps[j - 1];
            } else {
                i++;
            }
        }
    }
}

int main() {
    string text, pattern;

    cout << "Enter text" << endl;
    cin >> text;

    cout << "Enter pattern" << endl;
    cin >> pattern;

    KMPSearch(pattern, text);

    return 0;
}
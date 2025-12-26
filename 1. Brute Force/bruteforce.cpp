#include<iostream>
using namespace std;

int main() {
    string text, pattern;
    int found = 0;

    cout << "Enter the text" << endl;
    cin >> text;

    cout << "Enter the pattern" << endl;
    cin  >> pattern;

    int n = text.length();
    int m = pattern.length();

    for ( int i = 0; i <= n -m ; i++){
        int j;
        for( j = 0; j < m; j++){
            if ( text[i + j] != pattern[j])
            break;
        }
        if ( j == m){
            cout<< " Pattern Found at Index "<< i << endl;
            found = 1;
        }
    }

    if (!found)
    cout<< "Pattern Not Found"<< endl;

    return 0;
}
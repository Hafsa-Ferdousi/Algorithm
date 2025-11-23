#include <bits/stdc++.h>
using namespace std;

void NaivePatternSearch(string text, string pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {

        int j = 0;
        while (j < m && text[i + j] == pattern[j]) {
            j++;
        }

        if (j == m) {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main() {

    string text = "ABCABAACDABABCABAB";
    string pattern;

    cout << "Enter pattern to search: ";
    cin >> pattern;

    NaivePatternSearch(text, pattern);

    return 0;
}

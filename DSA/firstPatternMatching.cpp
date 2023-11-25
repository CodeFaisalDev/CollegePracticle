#include <iostream>
#include <string>

using namespace std;

void naivePatternMatching(const string& text, const string& pattern) {
    int n = text.length();
    int m = pattern.length();

    for (int i = 0; i <= n - m; i++) {
        int j;

        for (j = 0; j < m; j++) {
            if (text[i + j] != pattern[j]) {
                break;
            }
        }

        if (j == m) {
            cout << "Pattern found at index " << i << endl;
        }
    }
}

int main() {
    string text = "ABABDABACDABABCABAB";
    string pattern = "AB";

    cout << "Text: " << text << endl;
    cout << "Pattern: " << pattern << endl;

    cout << "Pattern occurrences: " << endl;
    naivePatternMatching(text, pattern);

    return 0;
}

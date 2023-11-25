#include <iostream>
#include <string>
using namespace std;

string replaceSubstring(const string& originalText, 
                            const string& oldSubstring, 
                            const string& newSubstring) {
    string replacedText = originalText;
    size_t pos = replacedText.find(oldSubstring);

    while (pos != string::npos) {
        replacedText.replace(pos, oldSubstring.length(), newSubstring);
        pos = replacedText.find(oldSubstring, pos + newSubstring.length());
    }

    return replacedText;
}

int main() {
    string originalText = "Hello, World! This is a sample text.";
    string oldSubstring = "World";
    string newSubstring = "Universe";

    string result = replaceSubstring(originalText, oldSubstring, newSubstring);

    cout << "Original Text: " << originalText << endl;
    cout << "Text after Replacement: " << result << endl;

    return 0;
}

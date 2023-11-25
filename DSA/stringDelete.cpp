#include <iostream>
#include <string>

using namespace std;

string deleteSubstring(const string& originalText, const string& substringToDelete) {
    string newText = originalText;
    size_t pos = newText.find(substringToDelete);

    while (pos != string::npos) {
        newText.erase(pos, substringToDelete.length());
        pos = newText.find(substringToDelete, pos);
    }

    return newText;
}

int main() {
    string originalText = "Hello, World! This is a sample text. World is deleted.";
    string substringToDelete = "World";

    string result = deleteSubstring(originalText, substringToDelete);

    cout << "Original Text: " << originalText << endl;
    cout << "Text after Deletion: " << result << endl;

    return 0;
}

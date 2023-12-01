#include <iostream>
#include <fstream>
using namespace std;

void appendFile(const string& sourceFileName, const string& destinationFileName){
    try{
        ifstream sourceFile(sourceFileName);

        if (!sourceFile.is_open()){
            throw runtime_error("Couldn't open the source file " + sourceFileName);
        }

        ofstream destinationFile(destinationFileName);
        
        if(!destinationFile.is_open()){
            throw runtime_error("Couldn't open the destination file " + destinationFileName);
        }

        char ch;
        while(sourceFile.get(ch)){
            destinationFile.put(ch);
        }

        cout << "Content from '" << sourceFileName << "' appended to '" << destinationFileName << "' successfully." << endl;


        sourceFile.close();
        destinationFile.close();

    }
    catch(const exception& e){
        cerr << "Error: " << e.what() << endl;
    }
}

int main() {
    string sourceFilePath = "source.txt";
    string destinationFilePath = "destination.txt";

    appendFile(sourceFilePath, destinationFilePath);

    return 0;
}
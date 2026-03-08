#include <iostream>
using namespace std;

int main() {

    string fullName = "Tashi Penjor";
    size_t length_of_string = fullName.size();

    // convert to uppercase
    string upperName = fullName;
    for (char &ch : upperName) {
        ch = toupper(static_cast<unsigned char>(ch));
    }
    
    // convert to lowercase
    string lowerName = fullName;
    for (char &ch : lowerName) {
        ch = tolower(static_cast<unsigned char>(ch));
    }
    
    // extract initials
    string initials;
    bool newWord = true;                    
    for (char ch : fullName) {
        if (isspace(static_cast<unsigned char>(ch))) {
            newWord = true;
        } else if (newWord) {
            initials.push_back(ch);          
            newWord = false;
        }
    }

    // length of the first name only
    size_t firstSpace = fullName.find(' ');
    size_t firstNameLength;
    if (firstSpace == string::npos) {
        // no space found: entire string is one name
        firstNameLength = fullName.size();
    } else {
        firstNameLength = firstSpace;
    }

    cout << "================================" << endl;
    cout << "String Manipulation & Analysis" << endl;
    cout << "================================" << endl;
    cout << "Full Name: " << fullName << endl;
    cout << "Total Length: " << length_of_string << endl;
    cout << "Uppercase: " << upperName << endl;
    cout << "Lowercase: " << lowerName << endl;
    cout << "Initials: " << initials << endl;
    cout << "First name length: " << firstNameLength << endl;

    return 0;
}
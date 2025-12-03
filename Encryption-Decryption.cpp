#include <iostream>
#include <string>
#include <cctype>
using namespace std;

char rot13(char c) {
    if (c >= 'a' && c <= 'z')
        return (c - 'a' + 13) % 26 + 'a';
    if (c >= 'A' && c <= 'Z')
        return (c - 'A' + 13) % 26 + 'A';
    if (c == '.') 
        return '.';            // Periods stay periods
    if (c == ' ') 
        return ' ';            // Spaces stay spaces
    return '?';                // Invalid character placeholder
}

int main() {
    // UI Banner
    cout << "]--------------------------------------------------------------------------[\n";
    cout << "   Creator: Michael Black\n";
    cout << "   Program: ROT-13 Style Encryption Tool\n";
    cout << "   Instructions:\n";
    cout << "     • Type your full message normally\n";
    cout << "     • Letters ONLY (spaces allowed)\n";
    cout << "     • Invalid characters will be marked with '?'\n";
    cout << "]--------------------------------------------------------------------------[\n\n";

    // Ask user for entire string
    cout << " -> Enter the message you want to encrypt:\n   > ";
    string input;
    getline(cin, input);

    // Perform ROT-13 with error handling
    string output;
    for (char c : input) {
        if (isalpha(c) || c == ' ' || c == '.')
            output.push_back(rot13(c));
        else
            output.push_back('?');   // Unknown character
    }

    // Output
    cout << "\n--------------------------------------------------------------------------\n";
    cout << "                                Converting...\n";
    cout << "--------------------------------------------------------------------------\n";

    cout << "\nEncrypted Message:\n   > " << output << "\n";

    cout << "\nPress ENTER to exit.";
    cin.get();

    return 0;
}
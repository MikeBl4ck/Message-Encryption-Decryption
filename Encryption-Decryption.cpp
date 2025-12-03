#include <iostream>
#include <string>
using namespace std;

// -----------------------------------------------------------
// ROT-13 Function (Encryption & Decryption — same logic)
// -----------------------------------------------------------
char rot13(char c) {
    // Uppercase
    if (c >= 'A' && c <= 'Z') {
        return ((c - 'A' + 13) % 26) + 'A';
    }
    // Lowercase
    if (c >= 'a' && c <= 'z') {
        return ((c - 'a' + 13) % 26) + 'a';
    }
    // Allowed characters: space & period
    if (c == ' ' || c == '.') {
        return c;
    }

    // Anything else → invalid symbol
    return '?';
}

// -----------------------------------------------------------
// UI Banner
// -----------------------------------------------------------
void banner() {
    cout << "]--------------------------------------------------------------------------[\n";
    cout << "   Creator: Michael Black\n";
    cout << "   Program: ROT-13 Style Encryption / Decryption Tool\n";
    cout << "--------------------------------------------------------------------------]\n\n";
}

// -----------------------------------------------------------
// Menu Display
// -----------------------------------------------------------
void showMenu() {
    cout << "==================== MENU ====================\n";
    cout << "1. Encrypt Message (ROT-13)\n";
    cout << "2. Decrypt Message (ROT-13)\n";
    cout << "3. Exit Program\n";
    cout << "==============================================\n";
    cout << "Choose an option (1-3): ";
}

// -----------------------------------------------------------
// Process ROT-13 on a full string
// -----------------------------------------------------------
string processString(const string& msg) {
    string result = msg;
    for (size_t i = 0; i < msg.length(); i++) {
        result[i] = rot13(msg[i]);
    }
    return result;
}

// -----------------------------------------------------------
// Main Program
// -----------------------------------------------------------
int main() {
    banner();

    int choice = 0;

    while (true) {
        showMenu();
        cin >> choice;
        cin.ignore(); // clear leftover newline

        if (choice == 1) {
            cout << "\n[Encryption Mode Selected]\n";
            cout << "Enter your full message:\n>> ";

            string msg;
            getline(cin, msg);

            string encrypted = processString(msg);

            cout << "\nEncrypted Message:\n>> " << encrypted << "\n\n";
        }
        else if (choice == 2) {
            cout << "\n[Decryption Mode Selected]\n";
            cout << "Enter the encrypted message:\n>> ";

            string msg;
            getline(cin, msg);

            string decrypted = processString(msg);

            cout << "\nDecrypted Message:\n>> " << decrypted << "\n\n";
        }
        else if (choice == 3) {
            cout << "\nExiting program... Goodbye!\n";
            break;
        }
        else {
            cout << "\n!! Invalid Option. Please enter 1–3.\n\n";
        }
    }

    return 0;
}
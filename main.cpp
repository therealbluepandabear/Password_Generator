#include <iostream>
#include <ctime>

using namespace std;

char generateRandomChar();
string generatePassword(int length);
string removeWhitespace(string str);

int main() {
    srand ( time(NULL) );

    cout << generatePassword(12) << endl;
    return 0;
}

string generatePassword(int length) {
    string password;
    for (int i = 0; i < length; ++i) {
        password += generateRandomChar();
    }
    return removeWhitespace(password);
}

string removeWhitespace(string str) {
    string newStr;
    for (int i = 0; i < str.length(); ++i) {
        if (str[i] != ' ') {
            newStr += str[i];
        }
    }
    return newStr;
}

char generateRandomChar() {
    char lettersArr[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890!@#$%^&*";
    char rand = lettersArr[std::rand() % std::size(lettersArr)];
    return rand;
}

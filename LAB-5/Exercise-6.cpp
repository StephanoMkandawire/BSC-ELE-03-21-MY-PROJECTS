#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

//reverse function
string Reverse(string fileData) {
    return string(fileData.rbegin(), fileData.rend());
}

//capitalizing second letter function.
string capitalize_second_letter(string fileData) {
    stringstream fileName(fileData);
    string word;
    string result;

    while (fileName >> word) {
        if (word.length() > 1) {
            word[1] = toupper(word[1]);
        }
        result += word + " ";
    }

    return result.substr(0, result.length() - 1);
}

//counting vowels function.
int count_vowels(string fileData) {
    int count = 0;
    for (char c : fileData) {
        c = tolower(c);
        if ((c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')||(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')) {
            count++;
        }
    }
    return count;
}

//counting words function.
int count_words(string fileData) {
    stringstream fileName(fileData);
    string word;
    int count = 0;

    while (fileName >> word) {
        count++;
    }

    return count;
}

// main function.
int main() {
    ifstream file("MyFile.txt");
    string line;
    string fileData;

    if (file.is_open()) {
        while (getline(file, line)) {
            fileData += line + "\n";
        }
        file.close();

        cout << "Number of vowels: " << count_vowels(fileData) << endl;
        cout << "Number of words: " << count_words(fileData) << endl;
        cout << "Reversed statement: " << Reverse(fileData) << endl;
        cout << "Statement with second letter capitalized: " << capitalize_second_letter(fileData) << endl;
    } else {
        cout << "Unable to open file." << endl;
    }

    return 0;
}
#include<iostream>
#include<string>
using namespace std;

bool checkPalindrome(string &word, int left, int right) {
    if (left >= right) {
        return true;
    } else if (word[left] == word[right]) {
        return checkPalindrome(word, left + 1, right - 1);
    } else {
        return false;
    }
}

bool is_palindrome(string &word) {
    int length = word.length();
    if (length == 0 || length == 1) {
        return true;
    }
    return checkPalindrome(word, 0, length - 1);
}

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    if (is_palindrome(word)) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word is not a palindrome." << endl;
    }
    return 0;
}
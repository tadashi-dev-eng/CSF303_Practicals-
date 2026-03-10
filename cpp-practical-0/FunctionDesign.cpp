#include <iostream>
using namespace std;

// returns sum of digits of n (handles non-negative)
int digitSum(int n) {
    n = (n < 0) ? -n : n;
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

// simple primality test (n >= 2)
bool isPrime(int n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

// count vowels in string (case insensitive)
int countVowels(const string &s) {
    int count = 0;
    for (char c : s) {
        char lc = tolower(static_cast<unsigned char>(c));
        if (lc=='a' || lc=='e' || lc=='i' || lc=='o' || lc=='u')
            ++count;
    }
    return count;
}

// return reversed copy of string
string reverseString(const std::string &s) {
    string r(s.rbegin(), s.rend());
    return r;
}

int main() {
    int studentNumber = 2230306;
    string fullName = "Tashi Penjor";

    int sumDigits = digitSum(studentNumber);
    bool prime = isPrime(studentNumber);
    int vowels = countVowels(fullName);
    string reversed = reverseString(fullName);

    cout << "--- Function results for Tashi Penjor---\n";
    cout << "digitSum(" << studentNumber << ") = " << sumDigits << '\n';
    cout << "isPrime(" << studentNumber << ") = " << (prime ? "true" : "false") << '\n';
    cout << "countVowels(\"" << fullName << "\") = " << vowels << '\n';
    cout << "reverseString(\"" << fullName << "\") = \"" << reversed << "\"" << '\n';

    return 0;
}

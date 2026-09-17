#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";

    // ==========================================
    // 1. length() and size()
    // ==========================================
    cout << "--- 1. length() & size() ---" << endl;
    cout << s1.length() << endl;   // Output: 5
    cout << s1.size() << endl;     // Output: 5
    // Comparison: length() == size() (both return number of characters)

    // ==========================================
    // 2. at() and []
    // ==========================================
    cout << "\n--- 2. at() & [] ---" << endl;
    cout << s1.at(1) << endl;      // Output: e
    cout << s1[1] << endl;         // Output: e
    // Comparison: at() checks bounds and throws out_of_range exception, [] does not check bounds

    // ==========================================
    // 3. front() and back()
    // ==========================================
    cout << "\n--- 3. front() & back() ---" << endl;
    cout << s1.front() << endl;    // Output: H (first character)
    cout << s1.back() << endl;     // Output: o (last character)

    // ==========================================
    // 4. append()
    // ==========================================
    cout << "\n--- 4. append() ---" << endl;
    s1.append(" C++");
    cout << s1 << endl;            // Output: Hello C++

    // ==========================================
    // 5. push_back()
    // ==========================================
    cout << "\n--- 5. push_back() ---" << endl;
    s1.push_back('!');
    cout << s1 << endl;            // Output: Hello C++!

    // ==========================================
    // 6. pop_back()
    // ==========================================
    cout << "\n--- 6. pop_back() ---" << endl;
    s1.pop_back();
    cout << s1 << endl;            // Output: Hello C++

    // ==========================================
    // 7. find() and rfind()
    // ==========================================
    cout << "\n--- 7. find() & rfind() ---" << endl;
    cout << s1.find("C++") << endl;    // Output: 6 (finds first occurrence from left)
    cout << s1.rfind("l") << endl;     // Output: 3 (finds last occurrence from right)
    // Index starts from 0
    // If not found -> returns string::npos

    // ==========================================
    // 8. find_first_of()
    // Finds first occurrence of ANY character matching the given set
    // ==========================================
    cout << "\n--- 8. find_first_of() ---" << endl;
    string text = "C++ Programming 101";
    
    // (a) find_first_of(string, pos = 0)
    // Finds first character matching any vowel in "aeiouAEIOU"
    size_t pos1 = text.find_first_of("aeiouAEIOU");
    cout << "First vowel at index: " << pos1 << " ('" << text[pos1] << "')" << endl; // Index 6 ('o')

    // (b) find_first_of(char, pos = 0)
    size_t pos2 = text.find_first_of('P', 0);
    cout << "First 'P' at index: " << pos2 << endl; // Index 4

    // (c) find_first_of(const char* s, pos, count)
    // Checks only first 'count' characters of the C-string "12345"
    size_t pos3 = text.find_first_of("12345", 0, 3); // Checks against '1','2','3'
    cout << "First digit (1-3) at index: " << pos3 << endl; // Index 16 ('1')

    // ==========================================
    // 9. find_last_of()
    // Finds last occurrence of ANY character matching the given set (searches backward)
    // ==========================================
    cout << "\n--- 9. find_last_of() ---" << endl;
    string path = "/home/user/docs/file.txt";

    // (a) find_last_of(string, pos = npos)
    // Finds the last occurrence of '/' (useful for extracting file path / directory)
    size_t lastSlash = path.find_last_of("/\\");
    cout << "Last separator index: " << lastSlash << endl; // Index 15
    cout << "Filename: " << path.substr(lastSlash + 1) << endl; // "file.txt"

    // (b) find_last_of(char, pos = npos)
    size_t lastDot = path.find_last_of('.');
    cout << "File extension: " << path.substr(lastDot) << endl; // ".txt"

    // (c) find_last_of(const char* s, pos, count)
    size_t lastVowel = path.find_last_of("aeiou", string::npos, 5);
    cout << "Last vowel at index: " << lastVowel << " ('" << path[lastVowel] << "')" << endl; // Index 19 ('e')

    // ==========================================
    // 10. find_first_not_of()
    // Finds first character that does NOT match any character in the given set
    // ==========================================
    cout << "\n--- 10. find_first_not_of() ---" << endl;
    string padded = "   ---Hello World---   ";

    // (a) find_first_not_of(string, pos = 0)
    // Skipping leading whitespaces and hyphens (trimming left)
    size_t startIdx = padded.find_first_not_of(" -");
    cout << "First non-space/hyphen at index: " << startIdx << " ('" << padded[startIdx] << "')" << endl; // Index 6 ('H')

    // (b) find_first_not_of(char, pos = 0)
    string zeroes = "000045600";
    size_t firstNonZero = zeroes.find_first_not_of('0');
    cout << "First non-zero at index: " << firstNonZero << " ('" << zeroes[firstNonZero] << "')" << endl; // Index 4 ('4')

    // (c) find_first_not_of(const char* s, pos, count)
    size_t notABC = text.find_first_not_of("ABC+", 0, 4);
    cout << "First char not in [A,B,C,+] at index: " << notABC << " ('" << text[notABC] << "')" << endl;

    // ==========================================
    // 11. find_last_not_of()
    // Searches backward for last character that does NOT match any character in given set
    // ==========================================
    cout << "\n--- 11. find_last_not_of() ---" << endl;
    
    // (a) find_last_not_of(string, pos = npos)
    // Skipping trailing whitespaces and hyphens (trimming right)
    size_t endIdx = padded.find_last_not_of(" -");
    cout << "Last non-space/hyphen at index: " << endIdx << " ('" << padded[endIdx] << "')" << endl; // Index 16 ('d')
    cout << "Trimmed string: \"" << padded.substr(startIdx, endIdx - startIdx + 1) << "\"" << endl; // "Hello World"

    // (b) find_last_not_of(char, pos = npos)
    size_t lastNonZero = zeroes.find_last_not_of('0');
    cout << "Last non-zero at index: " << lastNonZero << " ('" << zeroes[lastNonZero] << "')" << endl; // Index 6 ('6')

    // (c) find_last_not_of(const char* s, pos, count)
    size_t notDigits = text.find_last_not_of("0123456789", string::npos, 10);
    cout << "Last non-digit at index: " << notDigits << " ('" << text[notDigits] << "')" << endl;

    // ==========================================
    // 12. substr()
    // substr(start_index, length)
    // ==========================================
    cout << "\n--- 12. substr() ---" << endl;
    cout << s1.substr(0, 5) << endl; // Output: Hello

    // ==========================================
    // 13. insert()
    // ==========================================
    cout << "\n--- 13. insert() ---" << endl;
    s2.insert(5, " C++");
    cout << s2 << endl;             // Output: World C++

    // ==========================================
    // 14. erase()
    // erase(start_index, length)
    // ==========================================
    cout << "\n--- 14. erase() ---" << endl;
    s2.erase(5, 4);
    cout << s2 << endl;             // Output: World

    // ==========================================
    // 15. replace() - With All Argument Variations
    // ==========================================
    cout << "\n--- 15. replace() ---" << endl;

    // (1) replace(pos, len, const string& str)
    // Replaces 'len' chars starting at 'pos' with string 'str'
    string str1 = "This is a red apple.";
    str1.replace(10, 3, "green");
    cout << "1. replace(pos, len, str): " << str1 << endl; 
    // Output: This is a green apple.

    // (2) replace(pos, len, const string& str, subpos, sublen)
    // Replaces 'len' chars at 'pos' with a substring of 'str' (starting at 'subpos', length 'sublen')
    string str2 = "I like apples.";
    string fruits = "juicy bananas and oranges";
    str2.replace(7, 6, fruits, 6, 7); // Replaces "apples" with "bananas"
    cout << "2. replace(pos, len, str, subpos, sublen): " << str2 << endl;
    // Output: I like bananas.

    // (3) replace(pos, len, const char* s)
    // Replaces 'len' chars at 'pos' with a C-style string
    string str3 = "Hello World!";
    str3.replace(6, 5, "C++");
    cout << "3. replace(pos, len, const char*): " << str3 << endl;
    // Output: Hello C++!

    // (4) replace(pos, len, const char* s, count)
    // Replaces 'len' chars at 'pos' with first 'count' characters of C-string
    string str4 = "Hello World!";
    str4.replace(6, 5, "Developer Zone", 9); // Takes first 9 chars: "Developer"
    cout << "4. replace(pos, len, const char*, count): " << str4 << endl;
    // Output: Hello Developer!

    // (5) replace(pos, len, count, char ch)
    // Replaces 'len' chars at 'pos' with 'count' copies of character 'ch'
    string str5 = "User password: secret";
    str5.replace(15, 6, 6, '*'); // Replaces "secret" with "******"
    cout << "5. replace(pos, len, count, ch): " << str5 << endl;
    // Output: User password: ******

    // (6) replace(iterator first, iterator last, const string& str)
    // Replaces range [first, last) with string 'str'
    string str6 = "Replace iterator range test";
    str6.replace(str6.begin() + 8, str6.begin() + 16, "ITERATOR");
    cout << "6. replace(it1, it2, str): " << str6 << endl;
    // Output: Replace ITERATOR range test

    // (7) replace(iterator first, iterator last, const char* s)
    // Replaces range [first, last) with C-style string
    string str7 = "Good Morning!";
    str7.replace(str7.begin() + 5, str7.end() - 1, "Evening");
    cout << "7. replace(it1, it2, const char*): " << str7 << endl;
    // Output: Good Evening!

    // (8) replace(iterator first, iterator last, const char* s, count)
    // Replaces range [first, last) with first 'count' chars of C-string
    string str8 = "Alpha Beta Gamma";
    str8.replace(str8.begin() + 6, str8.begin() + 10, "Omega123", 5); // Takes "Omega"
    cout << "8. replace(it1, it2, const char*, count): " << str8 << endl;
    // Output: Alpha Omega Gamma

    // (9) replace(iterator first, iterator last, count, char ch)
    // Replaces range [first, last) with 'count' copies of 'ch'
    string str9 = "Loading...";
    str9.replace(str9.end() - 3, str9.end(), 5, '!');
    cout << "9. replace(it1, it2, count, ch): " << str9 << endl;
    // Output: Loading!!!!!

    // (10) replace(iterator first, iterator last, InputIt first2, InputIt last2)
    // Replaces range [first, last) with characters from another iterator range
    string str10 = "Base [OLD] text";
    string replacement = "<<NEW>>";
    str10.replace(str10.begin() + 5, str10.begin() + 10, replacement.begin(), replacement.end());
    cout << "10. replace(it1, it2, inIt1, inIt2): " << str10 << endl;
    // Output: Base <<NEW>> text

    // ==========================================
    // 16. empty()
    // ==========================================
    cout << "\n--- 16. empty() ---" << endl;
    cout << s2.empty() << endl;      // Output: 0
    // 0 = false (not empty)
    // 1 = true  (empty)

    // ==========================================
    // 17. clear()
    // ==========================================
    cout << "\n--- 17. clear() ---" << endl;
    string s3 = "Hello";
    s3.clear();
    cout << s3.empty() << endl;      // Output: 1
    // clear() removes all characters and sets size to 0

    // ==========================================
    // 18. compare()
    // ==========================================
    cout << "\n--- 18. compare() ---" << endl;
    string a = "Apple";
    string b = "Banana";

    cout << a.compare(b) << endl;
    // Output: negative number
    // 0     -> strings are equal
    // < 0   -> a is smaller
    // > 0   -> a is greater

    // ==========================================
    // 19. String comparison using operators
    // ==========================================
    cout << "\n--- 19. Comparison Operators ---" << endl;
    cout << (a == b) << endl;        // Output: 0 (Equal)
    cout << (a != b) << endl;        // Output: 1 (Not equal)
    cout << (a < b) << endl;         // Output: 1 (Smaller)
    cout << (a > b) << endl;         // Output: 0 (Greater)
    cout << (a <= b) << endl;        // Output: 1 (Smaller or equal)
    cout << (a >= b) << endl;        // Output: 0 (Greater or equal)

    // ==========================================
    // 20. swap() - Member & Non-member function
    // ==========================================
    cout << "\n--- 20. swap() ---" << endl;
    string x = "Hello";
    string y = "World";

    cout << "Before swap: x = " << x << ", y = " << y << endl;

    // (a) Member function: str1.swap(str2)
    x.swap(y);
    cout << "After member swap (x.swap(y)): x = " << x << ", y = " << y << endl;
    // Output: x = World, y = Hello

    // (b) Non-member function: swap(str1, str2) from <utility> / <string> / <algorithm>
    swap(x, y);
    cout << "After non-member swap (swap(x, y)): x = " << x << ", y = " << y << endl;
    // Output: x = Hello, y = World
    // Note: swap() exchanges internal pointers in O(1) constant time without copying buffer contents

    // ==========================================
    // 21. reverse() (from <algorithm>)
    // ==========================================
    cout << "\n--- 21. reverse() ---" << endl;
    reverse(x.begin(), x.end());
    cout << "Reversed x: " << x << endl; // Output: olleH

    // ==========================================
    // 22. begin(), end(), rbegin(), rend()
    // ==========================================
    cout << "\n--- 22. Iterators: begin(), end(), rbegin(), rend() ---" << endl;
    string z = "ABC";

    cout << "Forward iteration: ";
    for (auto i = z.begin(); i != z.end(); i++)
        cout << *i << " ";
    cout << endl; // Output: A B C

    cout << "Reverse iteration: ";
    for (auto ri = z.rbegin(); ri != z.rend(); ri++)
        cout << *ri << " ";
    cout << endl; // Output: C B A

    return 0;
}
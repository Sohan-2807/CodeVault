#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
    string s1 = "Hello";
    string s2 = "World";

    // 1. length() and size()
    cout << s1.length() << endl;   // Output: 5
    cout << s1.size() << endl;     // Output: 5
    // Comparison: length() == size()

    // 2. at() and []
    cout << s1.at(1) << endl;      // Output: e
    cout << s1[1] << endl;         // Output: e
    // Comparison: at() checks bounds, [] does not

    // 3. front() and back()
    cout << s1.front() << endl;    // Output: H
    cout << s1.back() << endl;     // Output: o

    // 4. append()
    s1.append(" C++");
    cout << s1 << endl;            // Output: Hello C++

    // 5. push_back()
    s1.push_back('!');
    cout << s1 << endl;            // Output: Hello C++!

    // 6. pop_back()
    s1.pop_back();
    cout << s1 << endl;            // Output: Hello C++

    // 7. find()
    cout << s1.find("C++") << endl; // Output: 6
    // Index starts from 0
    // If not found -> string::npos

    // 8. substr()
    cout << s1.substr(0, 5) << endl; // Output: Hello
    // substr(start, length)

    // 9. insert()
    s2.insert(5, " C++");
    cout << s2 << endl;             // Output: World C++

    // 10. erase()
    s2.erase(5, 4);
    cout << s2 << endl;              // Output: World
    // erase(start, length)

    // 11. replace()
    s2.replace(0, 5, "C++");
    cout << s2 << endl;              // Output: C++

    // 12. empty()
    cout << s2.empty() << endl;      // Output: 0
    // 0 = false (not empty)
    // 1 = true  (empty)

    // 13. clear()
    string s3 = "Hello";
    s3.clear();
    cout << s3.empty() << endl;      // Output: 1
    // clear() removes all characters

    // 14. compare()
    string a = "Apple";
    string b = "Banana";

    cout << a.compare(b) << endl;
    // Output: negative number
    // 0     -> strings are equal
    // < 0   -> a is smaller
    // > 0   -> a is greater

    // 15. String comparison using operators
    cout << (a == b) << endl;        // Output: 0
    cout << (a != b) << endl;        // Output: 1
    cout << (a < b) << endl;         // Output: 1
    cout << (a > b) << endl;         // Output: 0
    cout << (a <= b) << endl;        // Output: 1
    cout << (a >= b) << endl;        // Output: 0

    // Comparison:
    // ==  -> Equal
    // !=  -> Not equal
    // <   -> Smaller
    // >   -> Greater
    // <=  -> Smaller or equal
    // >=  -> Greater or equal

    // 16. swap()
    string x = "Hello";
    string y = "World";

    x.swap(y);

    cout << x << " " << y << endl;
    // Output: World Hello

    // 17. reverse()
    reverse(x.begin(), x.end());

    cout << x << endl;
    // Output: dlroW

    // 18. begin() and end()
    string z = "ABC";

    for (auto i = z.begin(); i != z.end(); i++)
        cout << *i << " ";

    // Output: A B C

    return 0;
}
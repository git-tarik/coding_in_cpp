#include <iostream>
#include <string>
using namespace std;

int main() {
    // 1️⃣ Creating strings
    string str1 = "Hello";
    string str2 = "World";

    // 2️⃣ Display basic properties
    cout << "String 1: " << str1 << endl;
    cout << "String 2: " << str2 << endl;
    cout << "Length of str1: " << str1.length() << endl;
    cout << "Is str1 empty? " << (str1.empty() ? "Yes" : "No") << endl;

    // 3️⃣ Appending and concatenation
    str1.append(", ");
    str1 += str2; // same as str1 = str1 + str2
    cout << "After appending: " << str1 << endl;

    // 4️⃣ Adding and removing characters
    str1.push_back('!');
    cout << "After push_back: " << str1 << endl;
    str1.pop_back(); // removes '!'
    cout << "After pop_back: " << str1 << endl;

    // 5️⃣ Inserting and replacing
    str1.insert(5, " dear");
    cout << "After insert: " << str1 << endl;
    str1.replace(0, 5, "Hi"); // replace "Hello" with "Hi"
    cout << "After replace: " << str1 << endl;

    // 6️⃣ Erasing part of string
    str1.erase(3, 5); // remove 5 chars starting at index 3
    cout << "After erase: " << str1 << endl;

    // 7️⃣ Accessing characters
    cout << "First char: " << str1.front() << endl;
    cout << "Last char: " << str1.back() << endl;
    cout << "Character at index 2: " << str1.at(2) << endl;

    // 8️⃣ Substring
    string part = str1.substr(0, 2);
    cout << "Substring (first 2 chars): " << part << endl;

    // 9️⃣ Searching
    string sentence = "C++ is fun and C++ is powerful!";
    size_t pos = sentence.find("C++");
    if (pos != string::npos)
        cout << "First 'C++' found at index: " << pos << endl;

    size_t lastPos = sentence.rfind("C++");
    cout << "Last 'C++' found at index: " << lastPos << endl;

    // 10️⃣ Comparison
    string a = "apple";
    string b = "banana";
    if (a.compare(b) < 0)
        cout << a << " comes before " << b << endl;

    // 11️⃣ Swapping strings
    cout << "\nBefore swap: a = " << a << ", b = " << b << endl;
    a.swap(b);
    cout << "After swap: a = " << a << ", b = " << b << endl;

    // 12️⃣ Converting between string and numbers
    string numStr = "123";
    int num = stoi(numStr); // string → int
    cout << "\nString to int: " << num << " + 10 = " << num + 10 << endl;
    string backToString = to_string(num + 10); // int → string
    cout << "Int to string: " << backToString << endl;

    // 13️⃣ Iterating through string
    cout << "\nCharacters in str2: ";
    for (char c : str2)
        cout << c << " ";
    cout << endl;

    // 14️⃣ Clearing and checking
    str2.clear();
    cout << "After clear(), str2 is empty? " << (str2.empty() ? "Yes" : "No") << endl;

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    string str = "I am Going to America";

    cout << "Length of String " << str.length() << endl;  // string_name.length();
    cout << "String Size is " << str.size() << endl;      // string_name.size();
    cout << "String Capacity " << str.capacity() << endl; // string_name.capacity();
    // The above three working are same to find string length.

    str.resize(40); // string_name.resize(); is extend the string length
    cout << "Now String Length Becomes " << str.length() << endl;

    str.clear(); // String_name.clear() clear all the string character
    cout << "Now str becomes Clear " << str << endl;

    // string_name.empty() is used to check the given string is haveing character or not
    if (str.empty())
    {
        cout << "String is Empty " << str << endl;
    }
    else
    {
        cout << "String is " << str << endl;
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;

int main() {
    string str = "hellojee";
    stack<char> st;

    // Push each character of the string onto the stack
    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        st.push(ch);
    }

    // Print the reversed string with spaces
    cout << endl;
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <string>
using namespace std;

bool containsX(const string& str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'X') {   
            return true;       
        }
    }
    return false;
}

int main() {
    string test = "HELLO WORLD";
    if (containsX(test)) {
        cout << "Contains X" << endl;
    } else {
        cout << "Does not contain X" << endl;
    }
    return 0;
}

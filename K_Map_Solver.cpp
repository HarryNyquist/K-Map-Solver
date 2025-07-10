#include <iostream>
#include <vector>
#include <string>
using namespace std;

string getTerm(int index) {
    string expr = "";
    if ((index & 4) == 0) expr += "A'";
    else expr += "A";
    if ((index & 2) == 0) expr += "B'";
    else expr += "B";
    if ((index & 1) == 0) expr += "C'";
    else expr += "C";
    return expr;
}

int main() {
    vector<int> kmap(8);
    cout << "Enter the 8 K-map values (0 or 1) in the order m0 to m7:\n";
    for (int i = 0; i < 8; i++) {
        cin >> kmap[i];
    }

    cout << "\nMinimized SOP Expression:\n";
    bool found = false;
    for (int i = 0; i < 8; i++) {
        if (kmap[i] == 1) {
            if (found) cout << " + ";
            cout << getTerm(i);
            found = true;
        }
    }

    if (!found) cout << "0"; 
    cout << endl;
    return 0;
}

//To be expanded on

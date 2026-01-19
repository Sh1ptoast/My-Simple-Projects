#include <iostream>
#include <string>
#include<cmath>
using namespace std;

/*
This code is meant to be used to help a person manually translate hex and base 10 for a project
I was working on. It could be remade into an automatic converter someday, but the project only
required a few lines of translation, so it was easier to do it manually than to code a system
which I wouldn't use outside of that singular project.
*/

int main() {
    int input;
    cout << "rows: ";
    cin >> input;
    char hex[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
    
    for (int i = input; i > 0; --i) {
        cout << "\n#" << i << ": ";
        for (int j = 0; j < 16; ++j) {
            cout << hex[j] << " = " << j * pow(16, (i - 1)) << "  ";
        }
    }
    return 0;
}

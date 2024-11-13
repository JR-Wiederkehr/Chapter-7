#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int nNumberofArgs, char* pszArgs[]) {
    vector<string> cmd_input(nNumberofArgs);
    for (int i = 0; i < nNumberofArgs; i++) {
        cout << "Argument " << i << " is " << pszArgs[i] << endl;
        cmd_input[i] = pszArgs[i];
        bool is_integer = true;
        for (char c : cmd_input[i]) {
            if (!isdigit(c)) {
                is_integer = false;
                break;
            }
        }
        if (is_integer)
        {
            cout << "Argument " << i << " is an integer" << endl;
        }
        else
        {
            cout << "Argument " << i << " is not an integer" << endl;
        }
    }

    
    return 0;
}
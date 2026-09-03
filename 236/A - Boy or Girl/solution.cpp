#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    bool used[26] = {false};
    int distinct = 0;
 
    for (char c : s) {
        if (!used[c - 'a']) {
            used[c - 'a'] = true;
            distinct++;
        }
    }
 
    if (distinct % 2 == 0)
        cout << "CHAT WITH HER!";
    else
        cout << "IGNORE HIM!";
 
    return 0;
}
 
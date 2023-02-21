#include <iostream>
#include <string>
#include <locale>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string trimmed;

        for (string::iterator it = s.begin(); it != s.end(); it++) {
            char cur = tolower(*it);
            if ((cur >= '0' && cur <= '9') || (cur >= 'a' && cur <= 'z')) {
                trimmed += cur;
            }
        }

        // cout << "Trimmed character: " << trimmed << endl; // debug

        // First trim non-alphanumeric characters
        string::iterator l = trimmed.begin();
        string::iterator r = trimmed.end() - 1;

        while (l <= r) {
            // cout << "left: " << *l << ", right: " << *r <<endl; // debug
            if (*l != *r) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution soln;
    // string s = "radar";
    string s = "A man, a plan, a canal: Panama";
    cout << soln.isPalindrome(s) << endl;
}
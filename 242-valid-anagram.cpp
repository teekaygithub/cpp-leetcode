#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[26];
        memset(count, 0, sizeof(count));

        // Increment character counts by looping through string s
        for (string::iterator it = s.begin(); it != s.end(); it++) {
            count[*it - 'a'] += 1;
        }

        // Now decrement character counts. If anagram, all char should be 0
        for (string::iterator it = t.begin(); it != t.end(); it++) {
            count[*it - 'a'] -= 1;
        }

        for (int i = 0; i < 26; i++) {
            if (count[i] != 0) return false;
        }

        return true;
    }
};

int main(int argc, char* argv[]) {
    Solution soln;
    string s = "";
    string t = "abc";

    cout << soln.isAnagram(s, t) << endl;
}
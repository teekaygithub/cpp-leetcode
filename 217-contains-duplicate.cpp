#include <vector>
#include <set>
#include <iostream>

using namespace std;

class Solution {
    public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> visited;
        set<int>::iterator it;
        if (nums.size() <= 1) return false;

        visited.insert(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            it = visited.find(nums[i]);
            if (it != visited.end()) {
                return true;
            }
            visited.insert(nums[i]);
        }

        return false;
    }
};

int main() {
    Solution soln;
    vector<int> nums = {1,2,3,1};
    cout << soln.containsDuplicate(nums) << endl;
}
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> result_array(2 * nums.size());
        
        for (int i=0; i<n; i++) {
            result_array[i] = nums[i];
            result_array[i + n] = nums[i];
        }

        return result_array;
    }
};
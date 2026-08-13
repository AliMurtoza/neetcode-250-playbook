#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result_array;

        for (int iteration = 1; iteration <= 2; iteration++) {
            for (int num : nums) {
                result_array.push_back(num);
            }
        }

        return result_array;
    }
};
#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = number value, Value = its index
        std::unordered_map<int, int> numMap;
        
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            
            // Check if the complement exists in our map
            if (numMap.find(complement) != numMap.end()) {
                // If found, return the index of complement and current index
                return {numMap[complement], i};
            }
            
            // Otherwise, insert the current number and index into the map
            numMap[nums[i]] = i;
        }
        
        // Return empty vector if no solution is found (guaranteed not to hit per constraints)
        return {};
    }
};

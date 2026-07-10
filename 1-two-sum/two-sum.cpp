#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Map to store: Key = number, Value = its index
        std::unordered_map<int, int> num_to_index;
        
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            
            // Check if the complement already exists in the map
            if (num_to_index.find(complement) != num_to_index.end()) {
                // If found, return the index of the complement and the current index
                return {num_to_index[complement], i};
            }
            
            // Otherwise, store the current number and its index in the map
            num_to_index[nums[i]] = i;
        }
        
        // Return an empty vector if no solution is found (guaranteed not to happen per constraints)
        return {};
    }
};


// python code
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        d = {}
        for index, num in enumerate(nums):
            anothor_num = target-num
            if anothor_num in d.keys():
                return [d[anothor_num], index]
            else:
                d[num] = index
            
        return []
            

// cpp
// return {}; indicates "return an object of the function's return type initialized with an empty list-initializer". 
// The exact behaviour depends on the returned object's type.                   
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> m;
        for (int i = 0; i < nums.size(); ++i)
        {
            int another_num = target - nums[i];
            if (m.count(another_num))
                return {m[another_num], i};
            m[nums[i]] = i;
        }
        return {};
    }
};

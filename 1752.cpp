// Check if Array Is Sorted and Rotated
 
// Linear Traversal -- TC ON(N), SC=O(N)
class Solution {
public:
    bool check(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]>nums[i+1])count++;
        }
        if(count==1)return nums[nums.size()-1]<=nums[0];
        return count<2;
    }
};

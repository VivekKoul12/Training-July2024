class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        set<int> uniqueSet(nums.begin(), nums.end());
        
        
        nums.clear();
        
       
        nums.insert(nums.begin(), uniqueSet.begin(), uniqueSet.end());
        
        return nums.size();
    }
};


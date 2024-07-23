class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    set <int> sett(nums.begin(),nums.end());
    return sett.size() < nums.size(); 
    }
};

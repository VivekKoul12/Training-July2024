class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero=0;
        vector<int> temp;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            zero++;
            else
            temp.push_back(nums[i]);
        }
        while(zero--)
        temp.push_back(0);
        nums=temp;
    }
};

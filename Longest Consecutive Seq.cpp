class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
     if(nums.size()==0)
        return 0;
      set<int> s={nums.begin(),nums.end()};
      int maxi=0, longest=0,curr_req=*s.begin();
      for(auto x:s)
      {
        if(x==curr_req)
        {
            curr_req++;
            longest++;
        }
        else
        {
            curr_req=x;
            curr_req++;
            maxi=max(maxi,longest);
            longest=1;
        }
      }
      maxi=max(maxi,longest);
      return maxi;
    }
};

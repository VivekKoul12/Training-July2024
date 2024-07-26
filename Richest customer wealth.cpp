class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int sum = 0;
        int maxi=0;
        int i=0;
        int j=0;
        int row=accounts.size();
        int col=accounts[0].size();
        while(i<row&&j<col){
            if(j<col){
                sum+=accounts[i][j];
                j++;

            }
            if(j==col){
                maxi=max(sum,maxi);
                i++;
                j=0;
                sum=0;
            }

        }
    return maxi;    
    }
   
};

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int sum=0;
        int dig1=0;
        int dig2=0;
        for(int i=0;i<n;i++){
            if(n%2==1){
                if(i==n/2){
                    dig1+=mat[i][i];
                    continue;
                }
                dig1+=mat[i][i];
                dig2+=mat[i][n-i-1];
            }
            else{
            dig1+=mat[i][i];
            dig2+=mat[i][n-i-1];
            }

        }
      
            
        
        return dig1+dig2;
        
    }
    
};

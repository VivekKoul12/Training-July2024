class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry=0;
         //digits.back() += 1;
        for(int i=digits.size()-1;i>=0;--i){
            if(i==digits.size()-1)
            {
                if(digits[i]+1<=9){
                digits[i]+=1;
                carry=0;
                break;
            }
                else
                {
                    digits[i]=0;
                    carry=1;
                }
            }
            else if(digits[i]+carry<=9){
                digits[i]+=carry;
                carry=0;
                break;
            }
            else
            {
                digits[i]=0;
                carry=1;
            }
        }
        if(carry==1){
            digits.insert(digits.begin(),1);

        }
        return digits;
    }
};

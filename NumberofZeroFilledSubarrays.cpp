class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {

        int count=0;
        long long res=0;
        for (auto num: nums)
        {
            if (num == 0)
            {
                ++count;
                res += count;
            }
            else
            {
                count = 0;
            }
        }

        return res;
        
    }
};

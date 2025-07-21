class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {

        int len= nums.size();

        //data filtering
        for(int i=0;i<len;i++){
            if(nums[i] >= len+1 || nums[i]<=0 ){
                nums[i]=len+1;
            }
        }

         for(int i=0;i<len;i++){
           
           int ele = abs(nums[i]);
           if(ele==len+1){
            continue;
           }
           int seat= ele-1;
           if(nums[seat]>0){
             nums[seat]= -nums[seat];
           }
            
        }

        for(int i=0;i<len;i++){

            if(nums[i]>0){
                return i+1;
            }
            
            
        }
        return len+1;
        
        
    }
};

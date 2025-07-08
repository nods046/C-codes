

int removeDuplicates(int* nums, int numsSize) {
    
    int i=0;

    for(int j=1; j<numsSize ; j++){
       
      if (nums[i] != nums[j]) {
        
        nums[++i] = nums[j];
       }

        
    }
    return i+1;
    
}


/* Example 1:

Input: nums = [1,1,2]
Output: 2, nums = [1,2,_]
Explanation: Your function should return k = 2, with the first two elements of nums being 1 and 2 respectively.
It does not matter what you leave beyond the returned k (hence they are underscores). */

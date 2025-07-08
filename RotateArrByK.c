void rotate(int* nums, int numsSize, int k) {

    int temp[numsSize];


    for(int i= 0; i<numsSize ;i++){
       temp[(i+k)%numsSize]=nums[i];
    }
  
     for(int i= 0; i<numsSize ;i++){
      nums[i] = temp[i];
    }
  

}


/* Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]  */

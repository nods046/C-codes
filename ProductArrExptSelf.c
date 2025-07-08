//Optimized O(n) + spaceO(1) 

 

int* productExceptSelf(int* nums, int numsSize, int* returnSize) { 

     

  int* ans = (int*)malloc(sizeof(int) * numsSize); 

    *returnSize = numsSize; 

   

ans[0] = 1; 

for (int i = 1; i < numsSize; i++) { 

    ans[i] = ans[i-1] * nums[i-1];  

} 


int suffix=1; 
  

    for(int j= numsSize-2; j>=0;j--){ 

       suffix *= nums[j+1]; 

       ans[j] *= suffix; 

    } 

    return ans;     

} 

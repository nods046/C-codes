//leetcode:: 122. Best Time to Buy and Sell Stock II

int maxProfit(int* prices, int pricesSize) {


    int max=0;

    for(int i=0;i<pricesSize-1;i++){
        if(prices[i] < prices[i+1]){
            max+=prices[i+1]-prices[i];
        }


    }
    return max;    
}

/* Example 1:

Input: prices = [7,1,5,3,6,4]
Output: 7
Explanation: Buy on day 2 (price = 1) and sell on day 3 (price = 5), profit = 5-1 = 4.
Then buy on day 4 (price = 3) and sell on day 5 (price = 6), profit = 6-3 = 3.
Total profit is 4 + 3 = 7. */

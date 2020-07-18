// Coins distribition problem or coins required problem in TCS codevita

// Find the minimum number of coins required to form any value between 1 to N, both inclusive. 
// Cumulative value of coins should not exceed N. Coin denominations are 1 Rupee, 2 Rupee and 5 Rupee.

// Let's understand the problem using the following example. 
// Consider the value of N is 13, then the minimum number of coins required to formulate any value between 1 and 13, is 6. 
// One 5 Rupee, three 2 Rupee and two 1 Rupee coins are required to realize any value between 1 and 13. 
// Hence this is the answer.

// However, if one takes two 5 Rupee coins, one 2 rupee coins and two 1 rupee coins, then to all values between 1 and 13 are achieved. 
// But since the cumulative value of all coins equals 14, i.e., exceeds 13, this is not the answer. 


#include<stdio.h>
#include<stdlib.h>
int main() {
    int total,five,two,one,i,dp,val;
    scanf("%d",&total);
    five=(total-4)/5;
    dp=5*five;
    val=total-dp;
    if(val%2==0)
    {
        one=2;
        val=val-one;
    }
    else
    {
        one=1;
        val=val-one;
    }
    two=val/2;
    printf("total no. of coins-%d\n",five+two+one);
    printf("five-%d\ntwo-%d\none-%d",five,two,one);
    
}

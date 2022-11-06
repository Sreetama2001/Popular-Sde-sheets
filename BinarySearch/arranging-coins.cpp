/*Maths 
        x -> no of possible complete steps with n coins
        (x*(x+1))/2 <= n 
        x^2 +x =2n
        (x+1/2)^2 =2n +1/4
        x = sqrt(2n+1/4) -1/2
*/

// Binary Search

class Solution {
public:
    int arrangeCoins(int n) {
        // binary search
        long steps , sum ;
        int l = 0 , r =n ;
        while(l<=r){
            steps =l+(r-l)/2;
            sum = (steps*(steps+1))/2;
            if (sum ==n)
                return steps;
            else if (sum > n) r =steps-1;
            else l =steps+1;
            
        }
        return r;  
        // we are returning r since when sum will be smaller at(l==r) l will            //  overshoot, l=r+1 
    }
};
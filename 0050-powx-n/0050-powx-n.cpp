class Solution {
public:
    double myPow(long double x, long n) {
        // return pow(x, n);


        
        // double j = x;
        // if (x == 1)
        //     return x;
        // if (x == -1) {
        //     if (n % 2 == 0)
        //         return abs(x);
        //     return x;
        // }
        // if (n > 0) {
        //     for (int i = 1; i <= n - 1; i++)
        //         x = x * j;
        // } else if (n < 0) {
        //     for (int i = n; i <= 0; i++)
        //         x = x / j;
        // } else
        //     return 1.00;
        // return x;
        if(n < 0) {
            x = 1 / x;
        } 
        
        long num = labs(n);
        
        double pow = 1;
        
        while(num){ // equivalent to while(num != 0)
            if(num & 1) { // equivalent to if((num & 1) != 0)
                pow *= x;
            }
            
            x *= x;
            num >>= 1;
        }
        
        return pow;
    }
};
class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0, prod = 1, tmp = n;
        while(n > 0){
            int a = n % 10;
            sum += a;
            prod *= a;
            n /= 10;

        }

        return(tmp % (sum + prod) == 0);
    }
};
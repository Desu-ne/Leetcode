class Solution {
public:
    int arrangeCoins(int n) {
        long long check=0, sum=0;
        while (n>=sum) {
            check++;
            sum +=check;
        }
        return check-1;
    }
};

// change to binary later
class Solution {
public:
    int mySqrt(int x) {
        return binary_search_sqrt(x);
    }


    int binary_search_sqrt(int num) {
        if (num < 0) {
            return NAN; 
        }
        if (num == 0) {
            return 0;
        }

        long long high = num;
        long long low = 0;
        long long output = 0;

        if (num < 1) {
            high = 1; 
        }

        while (low <= high) {
            long long mid = low + (high - low) / 2;
            long long mid_squared = mid * mid;
            if (mid_squared == num) {
                return mid;
            } else if (mid_squared < num) {
                output = mid;
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        return floor(output); 
    }
};
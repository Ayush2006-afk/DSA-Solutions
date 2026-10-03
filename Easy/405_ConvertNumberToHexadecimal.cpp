#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    string toHex(int num) {
        if (num == 0) return "0";

        const char hexDigits[] = "0123456789abcdef";
        string result;

        // Treat as unsigned 32-bit to handle negative numbers (two's complement)
        unsigned int n = static_cast<unsigned int>(num);

        while (n > 0) {
            result += hexDigits[n & 0xf];  // Extract last 4 bits
            n >>= 4;                        // Shift right by 4 bits
        }

        reverse(result.begin(), result.end());
        return result;
    }
};

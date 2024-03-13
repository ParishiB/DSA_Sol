// class Solution {
// public:
//     int pivotInteger(int n) {
//       int sum = 0;
//       for(int i = 1 ; i <= n ; i++){
//          sum += i;
//       }

//       for(int i = 1; i <= n ; i++){
//         int ans = 0;
//         ans += i;
//         if(ans == sum - ans + i)return i;
//       }

//       return -1;
//     }
// };

class Solution {
public:
    int pivotInteger(int n) {
        int totalSum = n * (n + 1) / 2; // Sum of all elements from 1 to n
        int prefixSum = 0;

        for (int i = 1; i <= n; i++) {
            prefixSum += i;
            if (prefixSum == totalSum - prefixSum + i) {
                return i;
            }
        }

        return -1;
    }
};

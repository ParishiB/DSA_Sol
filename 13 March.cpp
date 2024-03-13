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


// Binary search solution
class Solution {
public:
    int pivotInteger(int n) {
         int left = 1;
    int right = n;

    while (left <= right) {
        int x = (left + right) / 2;
        int leftSum = (x * (x + 1)) / 2; 
        int rightSum = ((n * (n + 1)) / 2) - leftSum; w

        if (leftSum == rightSum) {
            return x;
        } else if (leftSum < rightSum) {
            left = x + 1;
        } else {
            right = x - 1;
        }
    }

    return -1;
    }
};

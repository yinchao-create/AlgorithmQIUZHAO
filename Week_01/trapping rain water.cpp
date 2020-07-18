class Solution {
public:
    int trap(int* A, int n) {
        int l = 0, r =n-1, level = 0, res = 0;
        while (l < r) {
            int lower = A[(A[l] < A[r]) ? l++ : r--];
            level = max(level, lower);
            res += level - lower;
        }
        return res;
    }
};
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        unordered_map<int, int> cnt;
        for (int bill : bills) {
            ++cnt[bill];
            if (cnt[5] < cnt[20] + cnt[10]) return false;
            if (cnt[5] < 3 * cnt[20] - cnt[10]) return false;
        }
        return true;
    }
};
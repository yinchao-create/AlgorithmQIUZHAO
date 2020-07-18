class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
    int n = numbers.size();
    map<int, int> index;
    vector<int> result;
     
    for(int i=0; i<n; i++)
    {
        int diff = target - numbers[i];
        if(index.find(diff) == index.end()) // can't find
        {
            index.insert(pair<int, int>(numbers[i], i));
        }
        else //find
        {
           int b = index[diff];
            result.push_back(b+1);
             result.push_back(i+1);
            break;
        }
    }
     return result;
    }
};
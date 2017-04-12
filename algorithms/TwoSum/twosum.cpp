#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> idx;
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i ++)
        {
            map.insert(make_pair(nums[i], i));
        }
        for (int i = 0; i < nums.size(); i ++)
        {
            unordered_map<int, int>::iterator it = map.find(target - nums[i]);
            if (it == map.end()) continue;
            if (it->second != i)
            {
                idx.push_back(min(i, it->second));
                idx.push_back(max(i, it->second));
                break;
            }
        }
        return idx;
    }
};

int main()
{
    return 0;
    
}
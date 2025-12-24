#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hashtable;
        for(int i=0; i < nums.size(); i++){
            auto it = hashtable.find(target-nums[i]);
            if(it != hashtable.end()){
                return {it->second, i };
            }
            hashtable[nums[i]] = i ;
        }
        return {}; // 理论上不会到达这里，但为了编译通过
    }    
};

/*
比如 1 ，2，3，4，5，6，7，8，9  找两个数想加等于10
第一次nums[0] = 1,hashtable是空的，所以是找不到的，接下来就把自己添加到哈希表中{(1,0)}
依次类推，所以其实hashtale中存的一直是自己，找的是自己的匹配对
*/
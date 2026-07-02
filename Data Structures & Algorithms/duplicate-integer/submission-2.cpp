class Solution{
public:
    bool hasDuplicate(vector<int>& nums)
    {
        unordered_set<int> seen;
        
        if(nums.size() == 0) return false;
        for(int num : nums)
        {
            if(seen.count(num)) return true;
            seen.insert(num);

        }
        return false;
    }
};
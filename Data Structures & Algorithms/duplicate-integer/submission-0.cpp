class Solution {
public:
    bool hasDuplicate(vector<int>& nums)
    { 
        unordered_set<int> vip;
        for (int n : nums)
        {
          if (vip.count(n)) return true;
          vip.insert(n);

        }
        return false;
       
    }
};
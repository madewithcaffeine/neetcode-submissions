class Solution{
public:
    int findMaxConsecutiveOnes(vector<int>& nums)
    {
        int count = 0;
        int maxCount = 0;

        for(int num : nums)
        {
            if(num == 1)
            {
                //increse the count
                count++;
                //save the biggest count
                if (maxCount < count)
                {
                    maxCount = count;
                }

            }
            else
            {
                //reset count
                count = 0;
            }

        }
        return maxCount;
    }
};
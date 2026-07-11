class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>mp;
int n=nums.size();
        for(int i:nums)
        {
mp[i]++;
        }
        n=n/2;
        
        for(auto &p:mp)
        {
            if(p.second>n)
            {
                return p.first;
            }

        }
        return  0;
    }
};
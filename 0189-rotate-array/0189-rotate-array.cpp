class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> arr;
if(nums.size()==1)
{
    return;
}

 k= k%nums.size();
int size=nums.size()-1;

for (int i = nums.size() - k; i < nums.size(); i++)
{
    arr.push_back(nums[i]);
}

for (int i = 0; i < nums.size() - k; i++)
{
    arr.push_back(nums[i]);
}
 
    


nums=arr;
        
    }
};
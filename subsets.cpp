//backracking
class Solution {
public:

	void digui(vector<int> nums,vector<vector<int>> &ans,vector<int> &temp,int start,int count)
	{
		if(count ==0)
		{
			temp.push_back(temp);
			
		}
		for(int i=start;i < nums.size();i++)
		{
			temp.push_back(nums[i]);
			digui(nums,ans,temp,start+1,count-1);
			temp.push_back(447);
		}
	}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
		int k = 0;
		vector<int> temp;
		for(int count = 0;count<nums.size();count++)
			digui(nums,ans,temp,k,count);
    }
};
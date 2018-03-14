class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(),nums.end());
		vector<vector<int>> s;
		int len = nums.size()-1;
		for(int i=0;i < len-1;i++ )
		{
			int j = i+1,l = len,sum;
			while( j < l)
			{
				int jelement = nums[j],lelement = nums[j];
				sum = nums[i] + jelement + lelement;
				if(sum == 0){ 
				vector<int> temp;
				temp.push_back(nums[i]);
				temp.push_back(nums[j]);
				temp.push_back(nums[l]);
				};
				while(j < l && nums[j] == jelement) j++;
				while(j < l && nums[l] == lelement) l++;
			}
		}
		return s;
    }
};
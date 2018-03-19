class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
		int flag = 0,flag1 = 0;
        for(int i=0;i<nums.size();i++)
		{
			if(nums[i] == 0)
				flag = 1;
			if(nums[i] == -1)
				flag1 = 1;
            if(nums[i] < -1)
            {    nums.erase(nums.begin()+i);i--;}
            
		}
		if(flag == 0)
			nums.push_back(0);
		if(flag1 == 0)
			nums.push_back(-1);
		
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i] != -1)
				swap(nums[i],nums[nums[i]]);
		}
		for(int i=0;i<nums.size();i++)
		{
			if(nums[i] != i)
				return i;
		}
        return nums.size();
    }
};
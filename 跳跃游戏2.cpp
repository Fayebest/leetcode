class Solution {
public:
    int jump(vector<int>& nums) {
        if(nums.size() == 1) return 0;
        
		int jumptimes = 0;int i=0;
		while(i<nums.size()-1)
		{
			int maxnum =0,temp;
			for(int j=0;j<=nums[i] ;j++)
			{
                if(i+nums[i] >= nums.size()-1 ) return jumptimes+1;
                else if (i+nums[j] >= nums.size() -1 ) return jumptimes+2;
                if(j+nums[i+j] >= maxnum)
                { temp =j; maxnum = j+nums[i+j];}
			}
			jumptimes++;
			i=i+temp;
		}
		return jumptimes;
    }
};
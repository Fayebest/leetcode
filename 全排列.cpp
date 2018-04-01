class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
		vector<vector<int>> answer;
        answer.push_back(nums);
		vector<int> tempans;
		int leng;
		int indleng = nums.size();
        for(int i=0;i<indleng-1;i++)
		{
			leng = answer.size();
			for(int j=0;j<leng;j++)
			{
				for(int  k = i+1;k<indleng;k++)
				{
					tempans = answer[j];
					swap(tempans[i],tempans[k]);
					answer.push_back(tempans);
				}					
			}
		}
		return answer;
    }
};
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxnum=0;
        int leng = height.size();
        for(int i=0;i<leng;i++)
        {
            for(int j=i+1;j<leng;j++)
            {
                int temp = height[i] > height[j] ? height[j]:height[i];
                int tempcon = (j-i)*temp;
                maxnum = maxnum > tempcon ? maxnum:tempcon;
            }
        }
        return maxnum;
    }
};
#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxnum=0;
        vector<int> ::iterator it;
        for(it=height.begin();it!=height.end();it++)
            cout<<*it<<endl;
            if (maxnum > *it)
                continue;
            int maxtemp = *it>*(it+1)? *(it+1):*it ;
            maxnum = maxnum > maxtemp? maxnum:maxtemp;
        return maxnum;
    }
};

int main()
{
	Solution a;
	vector<int> test;
	test.push_back(1);
	test.push_back(1);
	int tt=20;
	cout<<a.maxArea(test);
}

class Solution {
public:
    int longestValidParentheses(string s) {
		stack <char> stk;
		stack <int> stkcount;
		int num=0,tempnum=0;
		for(int i=0;i<s.size();i++)
		{
			if(s[i] == '(')
			{
				stk.push(s[i]);
				stkcount.push(tempnum);
				if(tempnum != 0 && !stk.empty())
                {  num = max(num,tempnum); tempnum = 0; }
			}
			
			else if(!stk.empty() && stk.top() == '(' && s[i] == ')')
			{
				tempnum = tempnum + 2+ stkcount.top();
				stkcount.pop();
				stk.pop();
			}
			else
			{
				if(tempnum != 0)
				{
					num = max(num,tempnum);
					tempnum = 0;
				}
			}
		}
        num = max(num,tempnum);
		return num;
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
		string maxPal = s.substr(0,1);
        string tempPal;
        for(int i=1;i <= s.size();i++)
		{
			string str = s.substr(0,i);
			tempPal = calculatePalindrome(str);
			maxPal = maxPal.size() > tempPal.size()? maxPal:tempPal;
		}
		return maxPal;
    }
	
	string calculatePalindrome(string s)
	{
		int len = s.size();
		string maxPal;
		int imin,imax;
		for(int i=0;i < len ; i++)
		{
			imin = i;imax = len-1;
			while( imin < imax)
			{
				if( s[imin] != s[imax] )
					break;
				imin++;imax--;
			}
			if(imin >= imax)
				return maxPal = s.substr(i,len-i);
		}
	}
	
	
};
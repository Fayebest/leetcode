class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        int i=1;
		while(1)
		{
			if((int)(x/pow(10,i)) == 0)
				break;
			i++;
		}
		int imin=1,imax = i;
		while(imin <= imax)
		{
			if( (int)(x/pow(10,imin-1)) %10 != (int)(x/pow(10,imax-1)) %10 )
				return false;
            imin++;imax--;
		}
		return true;
    }
};
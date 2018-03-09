class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
       int length1 = nums1.length(),length2 = nums2.length();
	   if(length1 > length2)
		   return findMedianSortedArrays(nums1,nums2);
	   int i,j,imin = 0,imax = length1,half = (length1+length2+1)/2;
	   while(imin <= imax)
	   {
		   i = (imin +imax)/2;
		   j = half -i;
		   if(i>0 && nums1[i-1] > nums2[j])
			   imax--;
		   else if(i<m && nums1[i] < nums2[j-1])
			   imin++;
		   else break;
	   }
	   int maxleft;
	   if (i==0) maxleft = nums2[j-1];
	   else if(j==0) maxleft = nums1[i-1];
	   else maxleft = max(nums2[j-1],nums1[i-1]);
	   if((length1 + length2)%2==1) return maxleft;
	   int minright;
	   if(i==length1) minright = nums2[j];
	   else if (j == length2) minright = nums1[i];
	   else minright = min(nums1[i],nums2[j]);
	   return (maxleft + minright)/2;
    }
};
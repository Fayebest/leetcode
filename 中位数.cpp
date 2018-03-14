class Solution {
public:
    void sort(int temp[])
	{
		for(int i=0;i<3;i++)
		{
			for(int j=i+1;j<3;j++)
			{
				if(temp[i] > temp[j])
				{
					int tt = temp[i];
					temp[i] = temp[j];
					temp[j] = tt; 
				}
			}
		}
	}
    
    double calculat(vector<int>& nums1, vector<int>& nums2){
		int length1 = nums1.size();int length2 = nums2.size();
        if(length1 == 0)
        {
            if(length2%2 != 0) return nums2[(length2+1)/2-1];
			else return (nums2[length2/2]+nums2[length2/2+1])/2.0;
        }
		if(length1 == 1){
			int count;
			for(count =0;count < length2-1;count++)
			{
				if(count ==0 && nums1[0] < nums2[count] )
					nums2.insert(nums2.begin(),nums1[0]);
				if(nums2[count]<nums1[0] && nums2[count+1] > nums1[0])
					nums2.insert(nums2.begin()+count+1,nums1[0]);
			}
			if(count == length2-1)
				nums2.push_back(nums1[0]);
			length2+=1;
			if(length2%2 != 0) return nums2[(length2+1)/2-1];
			else return (nums2[length2/2]+nums2[length2/2+1])/2.0;
		}
		int i = length1/2;
		int j = (length1+length2+1)/2-i;
		while(1)
		{
			if(i==0)
			{
				if((length1+length2)%2 != 0)return nums2[(length1+length2+1)/2-1];
				else return (nums2[(length1+length2)/2-1]+nums1[0])/2;
			}	
			else if(i == length2-1)
			{
				if((length1+length2)%2 != 0) return nums2[(length1+length2+1)/2-1];
				else return (nums2[(length1+length2)/2-1]+nums1[length1-1])/2.0;
			}
			
			if(nums1[i] > nums2[j-1] && nums1[j] > nums2[i-1])
			{
				int temparr[4] = {nums1[i-1],nums1[i],nums2[j-1],nums2[j]};
				sort(temparr);
				if((length1+length2)%2 != 0) return temparr[1];
				else return (temparr[1]+temparr[2])/2.0;
			}
			else if(nums1[i] < nums2[j-1])
			{i++;j--;}
			else
			{i--;j++;}	
		}
    }
	
                                     
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        if(nums1.size() < nums2.size())
			return calculat(nums1,nums2);
		else
			return calculat(nums2,nums1);
	}
	
	
};
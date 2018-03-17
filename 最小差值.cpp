#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int x;
    cin>>x;
	int *arr = new int[x];
	cin>>x;
	for(int i=0;i<x;i++)	cin>>arr[i];
	int minde = 0,temp;
	for(int i=0;i<x;i++)
	{
		for(int j=0;j<x;j++)
		{
			if(j != i)
			{
				temp = fabs(arr[i]-arr[j]);
				minde = min(minde,temp);
				if(minde == 0)
				{cout<< 0;return 0;}
			}
		}
	}
	cout<< temp;
	return 0;
	int *x= new int[3];
	for(int i=0;i<3;i++)
        cin>>x[i];
}

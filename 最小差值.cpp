#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
	int x,i;
	cin>>x;
	int *arr = new int[x];
	for(int i=0;i<x;i++) cin>>arr[i];
	sort(arr,arr+x);
	int minx = 0,temp;
	for(int i=0;i < x-1;i++)
	{
		temp = arr[i+1] - arr[i];
	if(temp == 0) {cout<<0;return 0;}
	else
		minx = min(temp,minx);
	}
	cout<<minx;
	return 0;
	
}

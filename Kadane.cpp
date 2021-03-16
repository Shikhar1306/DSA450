#include<bits/stdc++.h>

using namespace std;

//kadane's algo
int maxSubarraySum(int arr[], int n){
        
        int meh = 0;
        int msf = 0;
        
        for(int i = 0; i < n; i++){
            meh = meh + arr[i];
            if(meh < 0)
                meh = 0;
            if(msf < meh)
                msf = meh;
        }
        return msf;
    }

//main function
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the elements"<<endl;
	for(int i = 0; i < size; i++){
		cin>>arr[i];
	}
	
	cout<<"The maximum sum contiguous sub array has sum equals :"<< maxSubarraySum(arr,size);
	
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

//function to move all negative numbers to one side
void RearrangeNegative(int arr[],int n)
{
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i] < 0){
			if(i != j)
				swap(arr[i],arr[j]);
			j++;
		}
	}
}

//main function
int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	RearrangeNegative(arr,size);
	
	cout<<"The rearranged array is ";
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


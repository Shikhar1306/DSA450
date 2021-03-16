#include<bits/stdc++.h>

using namespace std;

//functions
int maxEle(int arr[],int n){
	int ele_max = arr[0];
	for(int i=1;i<n;i++){
		if(arr[i] > ele_max)
			ele_max = arr[i];
	}
	return ele_max;
}

int minEle(int arr[],int n){
	int ele_min = arr[0];
	for(int i=1;i<n;i++){
		if(ele_min > arr[i])
			ele_min = arr[i];
	}
	return ele_min;
}

int main()
{
	int size;
	cout<<"Enter the size of the array"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the elements :";
	for(int i=0;i<size;i++){
		cin>>arr[i];
	} 
	
	cout<<"The maximum element of the array is "<<maxEle(arr,size)<<endl;     	
	cout<<"The minimum element of the array is "<<minEle(arr,size)<<endl;
}


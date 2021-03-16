#include<bits/stdc++.h>

using namespace std;

void reverseArray(int arr[],int i,int j){
	//condition where recursion should stop
	if (i>=j)
		return;
	
	//swapping of ith & jth element 	
	int temp = arr[i];
	arr[i] = arr[j];
	arr[j] = temp;
	
	//recursive call
	reverseArray(arr,i+1,j-1);
}

int main()
{ 
	int size;
	cout<<"Enter size of array"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the elements"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}
	
	reverseArray(arr,0,size-1);
	cout<<"Reversed array is: ";
	for(int i =0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


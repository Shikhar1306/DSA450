#include<bits/stdc++.h>

using namespace std;

//rotate function
void rotate(int arr[], int n)
{
    int temp = arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
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
	
	rotate(arr,size);
	
	cout<<"The rotated array is :";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


#include<bits/stdc++.h>

using namespace std;

//function of sorting
void sort012(int a[], int n) //dutch national flag algorithm
    {
        int low = 0;
        int mid = 0;
        int high = n-1;
        int temp;
        
        while(mid <= high){
            switch(a[mid]){
                case 0:{
                    temp = a[low];
                    a[low] = a[mid];
                    a[mid] = temp;
                    low++;
                    mid++;
                    break;
                }
                case 1: mid++;
                        break;
                case 2:{
                    int temp = a[mid];
                    a[mid] = a[high];
                    a[high] = temp;
                    high--;
                    break;
                }
            }
        }
    
    }

int main()
{
	int size;
	cout<<"Enter the size of array"<<endl;
	cin>>size;
	
	int arr[size];
	
	cout<<"Enter the elements(0,1,2)"<<endl;
	for(int i=0;i<size;i++){
		cin>>arr[i];
	}	
	
	sort012(arr,size);
	
	cout<<"The sorted array is ";
	for(int i=0;i<size;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}


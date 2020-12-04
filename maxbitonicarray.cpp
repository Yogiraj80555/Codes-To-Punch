/*
Given an array Arr of N elements which is first increasing and then may be decreasing, find the maximum element in the array.
Note: If the array is increasing then just print then last element will be the maximum value.

Example 1:

Input: 
N = 9
Arr[] = {1,15,25,45,42,21,17,12,11}
Output: 45
Explanation: Maximum element is 45.

Example 2:

Input: 
N = 5
Arr[] = {1, 45, 47, 50, 5}
Output: 50
Explanation: Maximum element is 50.

Your Task:  
You don't need to read input or print anything. Your task is to complete the function findMaximum() which takes the array arr[], and n as parameters and returns an integer denoting the answer.

Expected Time Complexity: O(logN)
Expected Auxiliary Space: O(1)

*/

#include<iostream>

class Solution{
	public:
		int findMaximum(int arr[], int n){
			for(int i=0; i<n; i++){
	        	if(arr[i+1] < arr[i] )
	            return arr[i];
	    	}
	    
	    	return arr[n];	
		}
		
		
		int findMaximum(int arr[], int start, int end){
			int mid = (start+end)/2;
			if(mid+1 > end){
			    return arr[end];
			}
			if(arr[mid] > arr[mid+1] && arr[mid] > arr[mid-1]){
				return arr[mid];
			}
			else if(arr[mid] < arr[mid+1]){//go towared right mid to n
				return findMaximum(arr,mid+1,end);
			}
			else if(arr[mid] > arr[mid+1] ){
				return findMaximum(arr,start,mid-1);
			}
		}
};


int main(){
	Solution s;
	int n = 10041;
	int arr[10041]= {5 ,1079 ,950 ,901 ,899 ,801 ,750 ,650 ,10 ,1};//{ 1,15,25,45,42,21,17,12,11};
	for(int i=0; i<n; i++){
		arr[i] = i+1;
	}
	
	int n1 = s.findMaximum(arr,n);	
	std::cout<<"Max is: "<<n1<<std::endl;
	n = s.findMaximum(arr,0,n);
	std::cout<<"Max is: "<<n;
	return 0;
}



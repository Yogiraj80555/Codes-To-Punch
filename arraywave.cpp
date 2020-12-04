/*
Wave Array
Given a sorted array arr[] of distinct integers. Sort the array into a wave-like array and return it. 
In other words, arrange the elements into a sequence such that a1 >= a2 <= a3 >= a4 <= a5..... 
(considering the increasing lexicographical order).
Input:
N = 5
arr[] = {1,2,3,4,5}
Output: 2 1 4 3 5
Explanation: Array elements after 
sorting it in wave form are 
2 1 4 3 5.
*/


#include<iostream>

void convertToWave(int *arr, int n){
    
    for(int i=0; i<n-1; i+=2){
        arr[i] = arr[i] ^ arr[i+1];
        arr[i+1] = arr[i] ^ arr[i+1];
        arr[i] = arr[i] ^ arr[i+1];
    }
}
    
    
int main(){
   	int a[10],n=10;
   	for(int i=0; i<n; i++){
   		a[i] = i+2;
	}
		
	convertToWave(a,n);
	
	for(int i=0; i<n; i++){
		std::cout<<a[i]<<" ";
	}
	
	std::cin>>n;
}

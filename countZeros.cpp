#include<iostream>

class LogN{
	public:
		int countZeros(int arr[], int n){
			if(arr[0] == 0)
            	return n;
       		else if(arr[n-1] == 1)
            	return 0;
            int x = countZeros(arr,0,n-1);
        	return n-x; 
		}
		
		int countZeros(int arr[], int start, int end){
			int mid = (start+end)/2;
			if(arr[mid-1]==1 && arr[mid] == 0){
				return mid;
			}
			else if(arr[mid] == 1){
				return countZeros(arr,mid+1,end);
			}
			else{
				return countZeros(arr,start,mid-1);
			}
		}
};




int main(){
	LogN l;
	int n = 12,rule=9;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		if(i<rule){
			arr[i] = 1;
		}else{
			arr[i] = 0;
		}
	}
	std::cout<<"This can be "<<l.countZeros(arr,n);
		
}






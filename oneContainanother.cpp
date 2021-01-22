#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int* data(int a[],int b[]){
	int x[5];
	 
	int cnt = 0;

	while(*a != '\0'){
		int *b1 = b;
		int flg = 0;
		while(*b1 != '\0'){
			if(*a == *b1){
				flg++;
			}
			b1++;
		}
		
		if(flg == 0){
			x[cnt] = *a;
			cnt++;	
		}
		
		a++;
	}	
	
	int *x1 = x;
	while(*x1 != '\0'){
		std::cout<<*x1<<std::endl;
		x1++;
	}

}


int main(int argc, char** argv) {
	
	int arr1[] ={1,2,2,2,3};
	int arr2[] = {};
	data(arr1,arr2);
	return 0;
}

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	const int width = 10;
	const int height = 10;
	int tble[width][height];//1 to 10 tables 
	for(int i=0; i<width;i++){
		for(int j = 0; j<10; j++){
			tble[i][j] = i+1 * j+1;
			std::cout<<(i+1) * (j+1)<<"\t";
		}
		std::cout<<std::endl;
	}
	
	
	
	return 0;
}

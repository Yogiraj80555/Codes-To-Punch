#include <iostream>



int valid_braces(int num) 
{	int a=0;

while(num>0){
	
	if(num%2){
		a++;
	}
  	num /=2;
  	
  	
  	
  }
  
  return a;
}









int main(int argc, char** argv) {
	int x = valid_braces(1234);
	
	std::cout<<"Value is: "<<x<<std::endl;
	return 0;
}

#include <iostream>


int main(int argc, char** argv) {
	
	std::string data = "This is c programe";
	void* c = &data;
	data[0] = '3';
	
	std::cout<<data[0]<<"   "<<argv[0]<<"   "<<argc<<"  "<<c;
	std::cin.get();
	return 0;
}

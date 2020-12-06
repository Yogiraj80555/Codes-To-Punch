#include<iostream>

std::string reverseWord(std::string str){
	int len = str.length();
	int j = len-1;
	for(int i=0; i<len; i++){
		if(i > j or i==j)
			break;
		str[i] = str[i] ^ str[j];
		str[j] = str[i] ^ str[j];
		str[i] = str[i] ^ str[j];
		j--;
	}
	
	
	return str;
	
}

int main(){
	std::string s = "forig";
	std::cout<<reverseWord(s);
}

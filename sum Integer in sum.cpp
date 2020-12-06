#include<iostream>

struct SumInteger{
	int findSum(std::string str){
		int sum = 0;
		for(int i=0; i<str.size(); i++){
			char c = str[i];
			if(c > 47 && c < 58){
				int c=0, j=i;	
				while(str[j] > 47 && str[j] < 58){
					int x = str[j] - 48;
					c = c*10 + x;
					j++;
				}
				sum += c;
				i = j;
			}
		}
		return sum;
	}		
};



int main(){
	SumInteger i;
	std::cout<<i.findSum("0str1234abc2");
}

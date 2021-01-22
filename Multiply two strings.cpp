#include<iostream>
#include<string>


std::string stringMultiply(std::string s1, std::string s2){
	long long val1=0; 
	long long val2=0;
	bool flag=false; 
	for(int i=0;i<s1.size();i++){
	    if(s1[i] == 45){
	        flag=true;
	        continue;
	    }
	   val1 = (10*val1) + (s1[i]-48);
	}
	if(flag){val1 = val1 - (2*val1); flag=false;}
	for(int i=0;i<s2.size();i++){
	    if(s2[i] == 45){
	        flag=true;
	        continue;
	    }
	   val2 = (10*val2) + (s2[i]-48);
	}
	if(flag){val2 = val2 - (2*val2); flag=false;}
	val1 = val1*val2;
	//std::string s = to_string(val1);
	return NULL;
}



int main(){
	
	std::string s1 = "505041410988047";
	std::string s2 = "3318139";
	std::cout<<stringMultiply(s1,s2);
	
}

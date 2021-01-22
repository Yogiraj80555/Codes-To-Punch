#include<iostream>

int main(){
    int a=0;

    std::cin>>a;

    for(int i=0; i<a; i++){
      std::string str;
      std::cin>>str;
      int len = str.size();
      std::string odd, even;

      for(int j=0; j<len; j++){
        if(i%2 == 0){
          std::string s = even + str[i];
          even = s;
        }else{
          std::string s = odd + str[i];
          odd = s;
        }
      }

      std::cout<<even <<" "<<odd;



      
    }
    return 0;
}
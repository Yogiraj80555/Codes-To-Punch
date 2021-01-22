#include<iostream>


int main(){

    int n;
    std::cin>>n;
   
    int max=0;
    int consicative = 0;
    while(n != 0){
        int s = n%2;
        n = n/2;
        if(s == 0){
            consicative=0;
        }else{
            consicative++;
        }
        if(consicative > max){
            max = consicative;
        }
        
       
    }

  

    std::cout<<"Pair is: "<<max<<std::endl;
    return 0;
}
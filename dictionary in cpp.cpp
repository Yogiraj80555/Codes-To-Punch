#include<iostream>
#include<map>
int main(){

    std::map<std::string, long> m;
    int n = 0;
    std::cin>>n;
   
    for(int i=0;i<n;i++){
        std::string key;
        long value;
        std::cin>>key;
        std::cin>>value;
        m[key] = value;
    }
   

    std::string s1;
    std::cin>>s1;
    while(s1.size() > 0){
        if(m.find(s1) == m.end()){
            std::cout<<"Not found"<<std::endl;
        }
        else{
            std::cout<<s1<<"="<<m[s1]<<std::endl;
        }
        s1="";
        std::cin>>s1;
    } 
    
    return 0;
}
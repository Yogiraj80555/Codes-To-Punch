#include<stdio.h>
int is_valid_ip(const char *);


int main(){

printf("%d",is_valid_ip("12.34.56.1"));
return 0;
}

int is_valid_ip(const char * addr){
    if(*addr == '0' || *addr == '\0')
        return 0;
    char *c;
    int i=0,dot=0;
    while(*addr){
        //printf("%c",*addr);
        if((*addr > 47 && *addr <58) || *addr == 46){
            if(*addr == 46 && *(addr+1) == '0' )
                return 0;
        
            if(*addr == 46){
                dot++;
                if(i > 255)
                    return 0;
                i=0;
                addr++;
                continue; //if we get dot no need to add it in `i` so go to next word
            }
        
            char c = *addr;
            addr++;
            i = i*10+(c-'0');
            
            


        }else{  return 0;}
    }
    if(dot != 3)
        return 0;
    return 1;
}

/*

#include <arpa/inet.h>

// Return 1 is addr is a valid IP address, return 0 otherwise 
int is_valid_ip(const char *addr) {
  struct sockaddr_in sockaddr;
  return inet_pton(AF_INET, addr, &(sockaddr.sin_addr)) ? 1 : 0;
}

*/
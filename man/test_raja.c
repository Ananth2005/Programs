#include<stdio.h>

const char* myName() {
  return "\nEsakkiraja \n";
}

int main(){
    
    printf("%s",myName());
    return 0;
}
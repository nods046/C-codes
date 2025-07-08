//String rev using pointers 

#include <stdio.h> 

#include<string.h> 

int main() 

{ 

   char str[]="mohit"; 

    char* start= str; 

     

    char* end = str+ strlen(str)-1; 

    char temp; 

    while(start<end){ 

       temp=*str; 

       *str=*end; 

       *end=temp; 

        

        start++; 

        end--; 

    }   

    printf("%s",str); 

    return 0; 

} 

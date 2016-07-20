#include<stdarg.h>
#include<string.h>
#include<stdio.h>

void print(const char* str, ...){
    
    
    
    
    int counter = 0;
    int i = 0;
    
    while(str[i]!='\0'){
        if(str[i] == '%')
        {
            switch(str[i+1]){
                    
                case 'd' : 
                    
                case 'c' : 
                    
                case 'f' : 
                    
                case 's' :
                    counter++;
                    break;
                    
            }
            
            
        }
        
        i++;
    }
    
    
    va_list variable_list;
    va_start(variable_list, counter);
    
    
    for(char c=str[0]; c!='\0'; c=str[++i]){
        
    }
    
    i=0;
    
    while(str[i]!='\0'){
        
        if(str[i] == '%')
        {
            switch(str[i+1]){
                    
                case 'd' :printf("%d",va_arg(variable_list,int)); 
                        
                    i++;
                    break;
                    
                case 'c' :printf("%c",va_arg(variable_list,char));
                    i++;
                    break;
                    
                case 'f' :printf("%f",va_arg(variable_list,float));
                    i++;
                    break;
                case 's' :printf("%s",va_arg(variable_list,char*));
                    i++;
                    break;
                
                    
            }
        }else printf("%c", str[i]);
            
        
        
        i++;
    }
    
    
    
    
    va_end(variable_list);
    
}


int main(){
    
    
    int a=2;
    print("%d %d %s\n",a, 4, "deepak");
    return 1;
}


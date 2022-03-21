#include <stdio.h>
 
int main()
{
    char text[] = "fajsfjasjf asfasf asdasd asdasd.";
    int slen = 0, count = 0, index = 0; 
 
    for(slen = 0; text[slen]!='\0'; slen++){
      
    };
    
    for(int i = slen; i!=0; i--){
        if( text[i] == ' ' ){ count++; };
        if( count == 2 ){ index = i+1; break;};
    };
 
    for(int i = index; text[i]!=' '; i++){
        printf("%c", text[i]);
    };
    printf("\n");
    
    return 0;
}
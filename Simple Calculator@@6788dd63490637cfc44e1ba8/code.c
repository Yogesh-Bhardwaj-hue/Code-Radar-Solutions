#include <stdio.h>
int main(){
   int a,b;
   char c;
   scanf("%d %d",&a,&b);
   scanf(" %c",&c);
   
   return 0;
   switch(c){
    case '+' : 
    printf("%d %c %d = %d",a,c,b,a+b);
    break;
    case '-' :
    printf("%d %c %d = %d",a,c,b,a-b);
    break;
    case '*' :
    printf("%d %c %d = %d",a,c,b,a*b);
    break;
    case '/' :
    printf("%d %c %d = %d",a,c,b,a/b);
    break;
   }
   return 0;
}
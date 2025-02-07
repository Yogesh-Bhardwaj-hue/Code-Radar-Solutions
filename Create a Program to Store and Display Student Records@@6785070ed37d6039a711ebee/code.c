#include <stdio.h>
int main(){
    int n ;
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        int rollnumber,marks;
        char name[100];
        scanf("%d %d %s",&rollnumber,&marks,name);
            printf("Roll Number: %d,Name: %s,Marks: %d",rollnumber,marks,name);
    }
    return 0;
}
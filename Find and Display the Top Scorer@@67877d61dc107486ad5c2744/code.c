#include <stdio.h>  

struct Student {  
    int rollNumber;  
    char name[50];  
    float marks;  
};  

int main() {  
    int N;   
    scanf("%d", &N);  
    struct Student students[N];   
    for (int i = 0; i < N; i++) {   
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);  
    }  

    int maxmarks = &student.marks[0];
    for (int i = 0; i < N; i++) {  
        if(&student.marks[i]>maxmarks){
            maxmarks = &students.marks[i] ;
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",   
               students[i].rollNumber, students[i].name, students[i].marks);  
        }
    }  

    return 0;  
}
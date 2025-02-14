#include <stdio.h>  

struct Student {  
    int rollNumber;  
    char name[50];  
    float marks;  
};  

int main() {  
    int N;  
    printf("Enter the number of students: ");  
    scanf("%d", &N);  
    struct Student students[N];   
    for (int i = 0; i < N; i++) {  
        printf("Enter roll number, name and marks of student %d: ", i + 1);  
        scanf("%d %s %f", &students[i].rollNumber, students[i].name, &students[i].marks);  
    }  

 
    for (int i = 0; i < N; i++) {  
        printf("Roll Number: %d, Name: %s, Marks: %.2f\n",   
               students[i].rollNumber, students[i].name, students[i].marks);  
    }  

    return 0;  
}
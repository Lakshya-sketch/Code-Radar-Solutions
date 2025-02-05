#include <stdio.h>

int main() {
    char grade;
    
    // Input grade
    scanf("%c", &grade);
    
    // Evaluate grade using switch statement
    switch(grade) {
        case 'A':
            printf("Excellent");
            break;
        case 'B':
            printf("Good");
            break;
        case 'C':
            printf("Average");
            break;
        case 'D':
            printf("Below Average");
            break;
        case 'F':
            printf("Fail");
            break;
        default:
            printf("Invalid grade");
    }
    
    return 0;
}
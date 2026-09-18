/*
Question 17: Display a grade using an if-else-if ladder.
*/

#include <stdio.h>
int main()
{
    float marks;
    printf("Enter percentage: ");
    scanf("%f", &marks);
    if (marks >= 90 && marks <= 100) printf("Grade A\n");
    else if (marks >= 80) printf("Grade B\n");
    else if (marks >= 70) printf("Grade C\n");
    else if (marks >= 60) printf("Grade D\n");
    else if (marks >= 0) printf("Grade F\n");
    else printf("Invalid marks\n");
    return 0;
}

/*
Question 14: Calculate average of four marks and display Pass or Fail. Pass mark is 40.
*/

#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, average;
    printf("Enter four marks: ");
    scanf("%f %f %f %f", &m1, &m2, &m3, &m4);
    average = (m1 + m2 + m3 + m4) / 4;
    printf("Average = %.2f\n", average);
    if (average < 40)
        printf("Fail\n");
    else
        printf("Pass\n");
    return 0;
}

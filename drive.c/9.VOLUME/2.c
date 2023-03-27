/*2. Enter the marks of 5 students in Chemistry, Mathematics and Physics (each out of 100) using a Union named Marks having elements roll no.,name, chem_marks, maths_marks and phy_marks and then display the percentage of each student.*/

#include <stdio.h>

union mark
{
    int Chemistry,
        Mathematics,
        Physics,
        roll_no;
    char name[20];
    float percentage;
} s[5];

void main()
{
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Enter Roll No :-");
        scanf("%d", &s[i].roll_no);
        printf("%d\n", s[i].roll_no);

        printf("Enter Name :-");
        scanf("%s", &s[i].name);
        printf("%s\n", s[i].name);

        printf("Enter Marks of Chemistry:-");
        scanf("%d", &s[i].Chemistry);
        printf("%d\n", s[i].Chemistry);

        printf("Enter Marks of Mathematics:-");
        scanf("%d", &s[i].Mathematics);
        printf("%d\n", s[i].Mathematics);

        printf("Enter Marks of Physics:-");
        scanf("%d", &s[i].Physics);
        printf("%d\n", s[i].Physics);

        s[i].percentage = ( s[i].Chemistry + s[i].Mathematics + s[i].Physics ) * 100/300;
        printf("percentage of student %d \n%1f\n",i+1,s[i].percentage);
        
    }
}
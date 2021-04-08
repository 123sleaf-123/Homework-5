#include <stdio.h>

int main()
{
    float total = 0.0;
    float grade = 0.0;
    int count = 0;
    while (++count =< 30)
    {
        printf("Enter a grade: ");
        scanf("%f", &grade);
        if (grade < 0 || grade > 100){
            count = count - 1;/* avoid count increases without adding grade to total */
            continue; /* skip the statements below*/
        }

        total = total + grade;
        /* continue jumps to here */
    }

    return 0;
}

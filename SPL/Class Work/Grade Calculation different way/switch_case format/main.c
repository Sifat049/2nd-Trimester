#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int main()
{
    float score ,grade,g;

    printf("Enter the final score: ");
    scanf("%f", &score);
    grade=round(score /4);
    //g   = round(grade);
    // printf(" grade : %.2f",grade);
    // printf(" grade : %.f",round(grade));

    switch ((int)grade)
    {
    case 23:
    case 24:
    case 25:
        printf("Grade: A\n");
        break;
    case 22:
        printf("Grade: A-\n");
        break;
    case 21:
        printf("Grade: B+\n");
        break;
    case 20:
        printf("Grade: B\n");
        break;
    case 19:
        printf("Grade: B-\n");
        break;
    case 18:
        printf("Grade: C+\n");
        break;
    case 17:
        printf("Grade: C\n");
        break;
    case 16:
        printf("Grade: C-\n");
        break;
    case 15:
        printf("Grade: D+\n");
        break;
        case 14:
           // case 13:
  // if (grade==14 &&  grade==13)
   {
               printf("Grade: D\n");
            break;

   }
    default:
        printf("Grade: F\n");
        break;
    }

    return 0;
}

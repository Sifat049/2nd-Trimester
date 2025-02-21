#include <stdio.h>
#include <stdlib.h>

int main()
{
   int school_days,absent_days,student_id;
     printf("Enter number of school days last month : ");
    scanf("%d",&school_days);
     printf("Enter roll of student  : ");
    scanf("%d",&student_id);
     printf("Enter number of  days student was present  :");
   scanf("%d",&absent_days);

  //  printf("Enter number of school days last month : %d\n",school_days);
  //  printf("Enter roll of student  : %d\n",student_id);
   // printf("Enter number of  days student was present  : %d\n",school_days-absent_days);
    float attendanc_p=(100*absent_days);
    attendanc_p/=school_days;
    printf("\n\n%d was absent in %d out of %d days last month \n attendance percentage : %.02f  FINE : %d\n",student_id,absent_days,school_days,attendanc_p,(absent_days*50));

           return 0;
}

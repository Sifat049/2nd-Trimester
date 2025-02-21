#include<stdio.h>

int main(){
    int x_axis, y_axis;

    while(1)
    {


    printf("\nX coordinate: \n");
    scanf("%d", &x_axis);
    printf("Y coordinate \n");
    scanf("%d", &y_axis); getchar();

    if(x_axis == 0){
        if (y_axis == 0){
            printf("The coordinate point ( %d , %d ) is the center point", x_axis, y_axis);
        }
        else if(y_axis > 0 || y_axis < 0){
            printf("The coordinate point ( %d , %d ) is on Y axis", x_axis, y_axis);
        }
    }

    else if(x_axis> 0){
        if (y_axis == 0){
            printf("The coordinate point ( %d , %d ) is on X axis", x_axis, y_axis);
        }
        else if (y_axis > 0){
            printf("The coordinate point ( %d , %d ) lies in the First quadrant", x_axis, y_axis);
        }
        else{
            printf("The coordinate point ( %d , %d ) lies in the Fourth quadrant", x_axis, y_axis);
        }
    }

    else if(x_axis < 0){
        if (y_axis == 0){
            printf("The coordinate point ( %d , %d ) is on X axis", x_axis, y_axis);
        }
        else if (y_axis < 0){
            printf("The coordinate point ( %d , %d ) lies in the third quadrant", x_axis, y_axis);
        }
        else{
            printf("The coordinate point ( %d , %d ) lies in the second quadrant", x_axis, y_axis);
        }
    }

        }




}

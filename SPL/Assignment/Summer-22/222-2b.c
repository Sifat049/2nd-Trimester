/*#include <stdio.h>
#include <string.h>

int inputData(int goals[ ], int mins[ ], int n);
int countOfHattricks(int goals[ ], int n);
 
 int main()
 {  
    int n;
    scanf("%d",&n);
    int goals[n],mins[n];
    inputData(goals,mins,n);
    printf("%d",countOfHattricks(goals,n));
    return 0;
 }
int inputData(int goals[ ], int mins[ ], int n)
{
   for(int i=0; i<n; i++)
   {
    scanf("%d %d",&goals[i],&mins[i]);
   } 

}

 int countOfHattricks(int goals[ ], int n)
 {
    int hatt=0;
    for(int i=0; i<n; i++)
   {
    if(goals[i]>=3)
    hatt++;
   }
   return hatt;
 }
 */
#include<stdio.h>
#include<string.h>

void main(){
    char str1[100] = "This journey is";
    char str2[100] = "beautiful";
    int j;

    // Copy the first 8 characters of str2 into str1
    strncpy(str1, str2, 8);

    // Append characters from str2 to str1 in reverse order
    for(j = 3; str1[j] != '\0'; j++)
        str1[j] = str2[strlen(str1) - j];

    // Append the first 3 characters of str1 to str2
    strncat(str2, str1, 3);

    printf("String 1: %s\n", str1);
    str2[j - 2] = '\0'; // Set the second-to-last character of str2 to '\0'
    printf("String 2: %s\n", str2);

    // Reverse the string str1 five times
    for(j = 5; j > 2; j--)
        strrev(str1);

    printf("Final: %s", str1);
}

//How many letters in this string
#include<stdio.h>
#include<ctype.h>
int isVowel(char letter)
{
    return(letter=='a' || letter=='e' || letter=='i' || letter=='o'  || letter=='u');
}
int isLetter(char ch)
{
    
}
int main()
{ char text[100];
       printf("Enter a Text :");
      //scanf("%s",text);       //input just one character 
      //gets(text);            //
       fgets(text, sizeof(text),stdin);
       printf("Text = %s",text);
       int numberofLetters=0;
       int numberofUpperLetters=0;
       int numberofLowerLetters=0;
       int numberofDigits=0;
       int numberofSpace=0;
       int numberofSpecialChar=0;
       int numberofVowels=0;
       int numberofConsonents=0;

       for(int index=0; text[index]!='\0' ; index++)
       {
        char currentCharacter=text[index];
        //Number of Letters
        if((currentCharacter>='A' && currentCharacter<='Z') || (currentCharacter>='a' && currentCharacter<='z') )
        { 
         numberofLetters++;
        }
        //Number of UpperLetters
        if((currentCharacter>='A' && currentCharacter<='Z')  )
        numberofUpperLetters++;
         //Number of LowerLetters
        if((currentCharacter>='a' && currentCharacter<='z')  )
        numberofLowerLetters++;
         //Number of Digits
        if(currentCharacter>='0' && currentCharacter<='9')
        numberofDigits++;
        //Number of Space
        if(currentCharacter==' ')
        numberofSpace++;
         //Number of Vowel
        currentCharacter=tolower(currentCharacter);  //conver lowerletter
        if(isVowel(currentCharacter))
       // if(currentCharacter=='a' || currentCharacter=='e' || currentCharacter=='i'|| currentCharacter=='o' || currentCharacter=='u')
        numberofVowels++;
        //Number of Consonent
       // else
        if((currentCharacter>='a' && currentCharacter<='z') && !isVowel(currentCharacter) )
        numberofConsonents++;
       }
        printf("Number of Letters : %d\n",numberofLetters);
        printf("Number of Upper Letters : %d\n",numberofUpperLetters);
        printf("Number of Lower Letters : %d\n",numberofLowerLetters);
        printf("Number of Vowels : %d\n",numberofVowels);
        printf("Number of Consonents : %d\n",numberofConsonents);
        printf("Number of Digits : %d\n",numberofDigits);
        printf("Number of Space : %d\n",numberofSpace);
       // printf("Number of  : %d\n",numberofLetters);
   
    return 0;
}
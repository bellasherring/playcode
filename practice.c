#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase); //substitution encryption pt

int main()
{
    char phrase[206]; //phrase that will be encrypted
    //char i=0; //counter to go through the letters of the phrase
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n"); //prompts phrase to be given
    scanf("%s", phrase); //reads phrase from the user
    
    printf("The encryption is: \n");
    subencrypt(phrase);
    
    printf(" \n"); //prints new line so running in the terminal looks nicer upon exit
    return 0;
}

char subencrypt(char *phrase) //substitution encryption function definition
{
    char i=0;
    while(phrase[i] != 0) //will stop when the phrase is over
    {
        switch(phrase[i]) //for each letter case, the resulting letter is changed
        {
            case 65: 
                phrase[i]='S'; //A into S
                break;
            case 76: 
                phrase[i]='R'; //L into R
                break;
            case 80:
                phrase[i]='A'; //P into A
                break;
            case 72:
                phrase[i]='F'; //H into F
                break;
            case 66:
                phrase[i]='N'; //B into N
                break;
            case 69:
                phrase[i]='O'; //E into O
                break;
            case 84:
                phrase[i]='L'; //T into L
                break;
        }
        printf("%c", phrase[i]); //prints letter by letter
        i++; //increments to encrypt the next letter of the phrase
    }
}

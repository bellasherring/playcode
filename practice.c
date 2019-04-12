#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase); //substitution encryption pt

int main()
{
    char phrase[206]; //phrase that will be encrypted
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n"); //prompts phrase to be given
    scanf("%s", phrase); //reads phrase from the user
    
    printf("The encryption is: \n"); 
    subencrypt(phrase); //calls the substitutional encryption function and executes it
    
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
            case 65: //A
                phrase[i]=rand()%26 + 65; 
                break;
            case 66: //B
                phrase[i]=rand()%26 + 65;
                if
                break;
            case 67: //C
                phrase[i]=rand()%26 + 65; 
                break;
            case 68: //D
                phrase[i]=rand()%26 + 65; 
                break;
            case 69: //E
                phrase[i]=rand()%26 + 65; 
                break;
            case 70: //F
                phrase[i]=rand()%26 + 65; 
                break;
            case 71: //G
                phrase[i]=rand()%26 + 65; 
                break;
            case 72: //H
                phrase[i]=rand()%26 + 65; 
                break;
            case 73: //I
                phrase[i]=rand()%26 + 65; 
                break;
            case 74: //J
                phrase[i]=rand()%26 + 65; 
                break;
            case 75: //K
                phrase[i]=rand()%26 + 65; 
                break;
            case 76: //L
                phrase[i]=rand()%26 + 65; 
                break;
            case 77: //M
                phrase[i]=rand()%26 + 65; 
                break;
            case 78: //N
                phrase[i]=rand()%26 + 65; 
                break;
            case 79: //O
                phrase[i]=rand()%26 + 65; 
                break;
            case 80: //P
                phrase[i]=rand()%26 + 65; 
                break;
            case 81: //Q
                phrase[i]=rand()%26 + 65; 
                break;
            case 82: //R
                phrase[i]=rand()%26 + 65; 
                break;
            case 83: //S
                phrase[i]=rand()%26 + 65; 
                break;
            case 84: //T
                phrase[i]=rand()%26 + 65; 
                break;
            case 85: //U
                phrase[i]=rand()%26 + 65; 
                break;
            case 86: //V
                phrase[i]=rand()%26 + 65; 
                break;
            case 87: //W
                phrase[i]=rand()%26 + 65; 
                break;
            case 88: //X
                phrase[i]=rand()%26 + 65; 
                break;
            case 89: //Y
                phrase[i]=rand()%26 + 65; 
                break;
            case 90: //Z
                phrase[i]=rand()%26 + 65; 
                break;
        }
        printf("%c", phrase[i]); //prints letter by letter
        i++; //increments to encrypt the next letter of the phrase
    }
}

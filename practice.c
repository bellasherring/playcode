#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase, float key); //substitution encryption pt

int main()
{
    char phrase[206]; //phrase that will be encrypted
    char i=0; //counter to go through the letters of the phrase
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n");
    scanf("%s", phrase);
    
    printf("The encryption is: \n");
    
    while(phrase[i] != 0) //will stop when the phrase is over
    {
        switch(phrase[i])
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
        printf("%c", phrase[i]);
        i++;
    }
    
    printf(" \n"); //prints new line so running in the terminal looks nicer upon exit
    return 0;
}

char subencrypt(char *phrase, float key) //substitution encryption
{
    
}

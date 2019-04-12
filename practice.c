#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase); //substitution encryption pt

int main()
{
    char phrase[206]; //phrase that will be encrypted
    //srand(1000);
    
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
        phrase[i]=rand()%26 + 65;
        printf("%c", phrase[i]); //prints letter by letter
        i++; //increments to encrypt the next letter of the phrase
    }
}
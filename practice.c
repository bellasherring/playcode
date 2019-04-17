#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase); //substitution encryption pt
char alphabetencrypt(char *alphabet);

int main()
{
    char phrase[206]; //phrase that will be encrypted
    char alphabet[200]; //alphabet for alphabet encryption function
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n"); //prompts phrase to be given
    scanf("%s", phrase); //reads phrase from the user
    alphabetencrypt(alphabet); //calls the alphabet encryption function and executes it
    
    printf("The encryption is: \n"); 
    
    
    printf(" \n"); //prints new line so running in the terminal looks nicer upon exit
    return 0;
}

char alphabetencrypt(char *alphabet) //alphabet substitution encryption function definition
{
    char i=0;
    alphabet[200]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char encryption[200]="QAZXSWEDCVFRTGBNHYUJMKILOP";
    while (alphabet[i] != 0) //assigns alphabet letters to the new substituted letters
    {
        //printf("alphabet %c encryption %c", alphabet[i], encryption[i]);
        alphabet[i]=encryption[i];
        //printf(" new version of alphabet %c\n", alphabet[i]);
        i++;
    }
}

char subencrypt(char *phrase) //regular substitution function
{
    char i=0;
}
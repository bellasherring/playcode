#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase); //substitution encryption pt
char alphabetencrypt(char *phrase, char x);

int main()
{
    char phrase[206]; //phrase that will be encrypted
    char alphabet[200]; //alphabet for alphabet encryption function
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n"); //prompts phrase to be given
    scanf("%s", phrase); //reads phrase from the user
    
    printf("The encryption is: \n"); 
    subencrypt(phrase);
    
    printf(" \n"); //prints new line so running in the terminal looks nicer upon exit
    return 0;
}

char subencrypt(char *phrase) //regular substitution function
{
    char i=0, x=0;
    char alphabet[200]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(phrase[i] != 0)
    {
        while(phrase[i] != alphabet[x])
        {
            x++;
        }
        alphabetencrypt(phrase, x);
        i++;
    }
}

char alphabetencrypt(char *phrase, char x)
{
    char alphabet[200]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char encryptionKey[200]="QAZXSWEDCVFRTGBNHYUJMKILOP";
    alphabet[x]=encryptionKey[x];
    printf("%c", encryptionKey[x]);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char subencrypt(char *phrase, char *encryptionKey); //substitution encryption pt
char alphabetencrypt(char *phrase, char x, char *encryptionKey);

int main()
{
    char phrase[206]; //phrase that will be encrypted
    char alphabet[200]; //alphabet for alphabet encryption function
    char encryptionKey[200];
    
    printf("Enter a phrase in capitals to substitutionally encrypt: \n"); //prompts phrase to be given
    scanf("%s", phrase); //reads phrase from the user
    
    printf("Enter an encyption key, a string of capital letters with no spaces:\n");
    scanf("%s", encryptionKey);
    
    printf("The encryption is: \n"); 
    subencrypt(phrase, encryptionKey);
    
    printf(" \n"); //prints new line so running in the terminal looks nicer upon exit
    return 0;
}

char subencrypt(char *phrase, char *encryptionKey) //regular substitution function
{
    char i=0, x=0;
    char alphabet[200]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    while(phrase[i] != 0)
    {
        while(phrase[i] != alphabet[x])
        {
            x++;
        }
        alphabetencrypt(phrase, x, encryptionKey);
        i++;
    }
}

char alphabetencrypt(char *phrase, char x, char *encryptionKey)
{
    char alphabet[200]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    alphabet[x]=encryptionKey[x];
    printf("%c", encryptionKey[x]);
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char phrase[300];
    char i=0;
    
    printf("Phrase: \n");
    scanf("%c", phrase);
    
    int countA=0;
    int countB=0;
    int countC=0;
    int countD=0;
    
    while(phrase[i] != 0)
    {
        if(phrase[i]==65)
        {
            countA++;
        }
        else if(phrase[i]==66)
        {
            countB++;
        }
        else if(phrase[i]==67)
        {
            countC++;
        }
        else if(phrase[i]==68)
        {
            countD++;
        }
        i++;
    }
    
    printf("A: %d\nB: %d\nC: %d\nD: %d\n", countA, countB, countC, countD);
    return 0;
}


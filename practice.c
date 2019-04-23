#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char phrase[300];
    char count[30]; 
    int i=0;
    char x=0;
    int countA=0, countB=0, countC=0, countD=0, countE=0, countF=0, countG=0, countH=0, countI=0, countJ=0, countK=0, countL=0, countM=0, countN=0, countO=0, countP=0, countQ=0, countR=0, countS=0, countT=0, countU=0, countV=0, countW=0, countX=0, countY=0, countZ=0;
        
    printf("Phrase: \n");
    scanf("%[^\n]s", phrase);
    
    while(phrase[i] != '\0')
    {
        x=phrase[i];
        switch(x)
        {
            case 65:
                countA++;
                break;
            case 66:
                countB++;
                break;
            case 67:
                countC++;
                break;
            case 68:
                countD++;
                break;
            case 69:
                countE++;
                break;
            case 70:
                countF++;
                break;
            case 71:
                countG++;
                break;
            case 72:
                countH++;
                break;
            case 73:
                countI++;
                break;
            case 74:
                countJ++;
                break;
            case 75:
                countK++;
                break;
            case 76:
                countL++;
                break;
            case 77:
                countM++;
                break;
            case 78:
                countN++;
                break;
            case 79:
                countO++;
                break;
            case 80:
                countP++;
                break;
            case 81:
                countQ++;
                break;
            case 82:
                countR++;
                break;
            case 83:
                countS++;
                break;
            case 84:
                countT++;
                break;
            case 85:
                countU++;
                break;
            case 86:
                countV++;
                break;
            case 87:
                countW++;
                break;
            case 88:
                countX++;
                break;
            case 89:
                countY++;
                break;
            case 90:
                countZ++;
                break;
            default:
                break;
        }
        i++;
        x=0;
    }
    printf("\n A: %d \n B: %d \n C: %d \n D: %d \n E: %d \n F: %d \n G: %d \n H: %d \n ", countA, countB, countC, countD, countE, countF, countG, countH);
    printf("I: %d \n J: %d \n K: %d \n L: %d \n M: %d \n N: %d \n O: %d \n P: %d \n ", countI, countJ, countK, countL, countM, countN, countO, countP);
    printf("Q: %d \n R: %d \n S: %d \n T: %d \n U: %d \n V: %d \n W: %d \n X: %d \n Y: %d \n Z: %d \n", countQ, countR, countS, countT, countU, countV, countW, countX, countY, countZ);

    return 0;
}


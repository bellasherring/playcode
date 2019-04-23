#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    //initialising variables
    char phrase[300];
    int i=0;
    char x=0;
    int countA=0, countB=0, countC=0, countD=0, countE=0, countF=0, countG=0, countH=0, countI=0, countJ=0, countK=0, countL=0, countM=0, countN=0, countO=0, countP=0, countQ=0, countR=0, countS=0, countT=0, countU=0, countV=0, countW=0, countX=0, countY=0, countZ=0;
    int data[26];
    
    //gets the phrase from the user
    printf("Phrase: \n");
    scanf("%[^\n]s", phrase);
    
    //counts the amount of each letter in the phrase
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
    
    //stores the number of each character in a certain place in the data string
    data[0]=countA; data[1]=countB; data[2]=countC; data[3]=countD; data[4]=countE; data[5]=countF; 
    data[6]=countG; data[7]=countH; data[8]=countI; data[9]=countJ; data[10]=countK; data[11]=countL; 
    data[12]=countM; data[13]=countN; data[14]=countO; data[15]=countP; data[16]=countQ; data[17]=countR; 
    data[18]=countS; data[19]=countT; data[20]=countU; data[21]=countV; data[22]=countW; data[23]=countX; 
    data[24]=countY; data[25]=countZ;
    
    int maximum=-1e30;
    int maxindex=0;
    i=0;
    
    while(i<26)  //while the elements don't equal 0, a new line
    {
        if(data[i]>maximum)
        {
            maximum=data[i];    //the new maximum is assigned to the element number i
            maxindex=i;     //max index is set as i
        }
        i++;    //add another
    }
    
    printf("%d at index %d\n", maximum, maxindex); //testing that the maximum finds the right number
    
    return 0;
}
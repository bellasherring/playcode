#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char rotdecrypt(char *phrase, float rotationKey);

int main()
{
    //initialising variables
    FILE *input; //declares file which will be referred to as 'input'
    input = fopen("practicecode.txt", "r");
    
    char phrase[30000];
    char i=0;
    char letter = 0;
    char x=0;
    int countA=0, countB=0, countC=0, countD=0, countE=0, countF=0, countG=0, countH=0, countI=0, countJ=0, countK=0, countL=0, countM=0, countN=0, countO=0, countP=0, countQ=0, countR=0, countS=0, countT=0, countU=0, countV=0, countW=0, countX=0, countY=0, countZ=0;
    int data[26];
    float rotationKey;
    
    //gets the phrase from the user
    //printf("Phrase: \n");
    fscanf(input, "%[^\n]s", phrase);
    
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
    letter=0;
    
    while(letter<26)  //while the elements don't equal 0, a new line
    {
        if(data[letter]>maximum)
        {
            maximum=data[letter];    //the new maximum is assigned to the element number i
            maxindex=letter;     //max index is set as i
        }
        letter++;    //add another
    }
    
    //printf("%d at index %d\n", maximum, maxindex); //testing that the maximum finds the right number
    printf("If T is the most common letter in the decryption, the decryption will be: \n");
    rotationKey = (maxindex+65) - 'T' + 26;
    rotdecrypt(phrase, rotationKey);
    printf("\nIf A is the most common letter in the decryption, the decryption will be: \n");
    rotationKey= (maxindex+65) - 'A' + 26;
    rotdecrypt(phrase, rotationKey);
    
    return 0;
}

char rotdecrypt(char *phrase, float rotationKey)
{
    char i=0; //i is the variable that will count through each individual character of the phrase string. It is initialised as 0 to start at the beginning of the string.
    char x;
    while(phrase[i] != 0) //the content of this while loop will continue to execute until the computer finds that the character 'phrase[i]' is equal to 0, because then it no longer fits the condition of != 0 (not equal to 0). It will occur until a new line is reached.
    {
        x=phrase[i];
        if(x<=64 || x>=91) //if the value of the phrase[i] character in the original plain English text message is something other than a capital letter, this block of code will execute
        {
            x = x; //phrase[i] remains unchanged
        }  
        else if((x-rotationKey)>=65 && (x-rotationKey)<=90) //if the new decrypted ASCII falls within the capital letter range of 65 and 90 (i.e. it remains a capital letter not a different ASCII character that isn't English) this block of code will execute
        {
            x = x - rotationKey; //the ASCII value of phrase[i] is shifted back by the rotationKey in order to decrypt it into the plain English ASCII character
        }
        else if((x-rotationKey)<65) //if the new decrypted ASCII value falls below the capital letter range
        {
            x = x + 26 - rotationKey; //phrase[i] is shifted back by the rotationKey, but 26 is added (the number of letters in the alphabet) so that it stays within the capital letter range
        }
        printf("%c", x); //prints the decrypted letter to the screen (stdout)
        i++;
    }
}

/*
Name: Shalinda Fernando
Date: 01/05/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>

int main(){
    
    // Variable Init
    int counter, userNum, arrNum[6], currentValue, previousValue;

    //  Code Block: Prompt and get the required information from the user
    printf("Enter values to Array: \n");
    for (counter = 0; counter < 6; counter++){
        // Loop 6 times to get user input
        scanf("%d", &userNum);
        arrNum[counter] = userNum;                  // Add to arrNum array
    }

    // Loop though arrNum array starting with index 1
    for (counter = 1; counter < 6; counter++){

        // Variables to keep track of:
        previousValue = arrNum[counter - 1];        // Previous index value
        currentValue = arrNum[counter];             // Current index value

        // If the currentValue is less than previousValue we know the array is in ascending order
        if(currentValue < previousValue){
            puts("\nNumbers are stored in ascending order");
            break;      // Beak out from the loop
        }

        // Code Block: If the currentValue is greater than previousValue we know the array is not in ascending order
        puts("\nNumbers are not stored in ascending order");
        break;           // Beak out from the loop
        
    }

    return 0;
}




/*
Name: Shalinda Fernando
Date: 01/05/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>
#include <string.h>

int main(void){
    
    int counter, intArr[10], positiveNum[10], negativeNum[10], userNum;

    // Initialize arrays with 0s
    for (counter = 0; counter < 10; counter++){
        positiveNum[counter] = 0;
        negativeNum[counter] = 0;
    }
    
    
    //  Code Block: Prompt and get the required information from the user
    printf("Number series: \n");
    for (counter = 0; counter < 10; counter++){
        // Loop 10 times to get user input
        scanf("%d", &userNum);
        intArr[counter] = userNum;                  // Append to arrNum array
    }
    

    // Find positive and negative numbers and append them to the array
    for (counter = 0; counter < 10; counter++){
        // Loop 10 times
        if(intArr[counter] < 0){
            // Deal with negative values
            negativeNum[counter] = intArr[counter];
        }else{
            // Deal with positive values
            positiveNum[counter] = intArr[counter];
        }
    }

    printf("Positive Numbers : ");

    // Display positive number from positiveNum Array
    for (counter = 0; counter < 10; counter++){
        
        if(positiveNum[counter] == 0){
            // If the number is 0 go back to top of the loop
            continue;
        }
        
        printf("%d ", positiveNum[counter]);     

    }

    printf("\nNegative Numbers : ");

    // Display negative number from negativeNum Array
    for (counter = 0; counter < 10; counter++){

        if(negativeNum[counter] == 0){
            // If the number is 0 go back to top of the loop
            continue;
        }

        printf("%d ", negativeNum[counter]);
    }

    return 0;
}


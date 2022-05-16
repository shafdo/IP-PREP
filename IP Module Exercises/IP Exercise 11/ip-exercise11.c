
/*
Name: Shalinda Fernando
Date: 16/05/2022
Student ID: REDACTED
Group: REDACTED
*/

#include <stdio.h>
#include <strings.h>

// Function Prototypes
void displayMenu();
float calculateTotal(float pricePerNight, int numberOfRooms, int numberOfNights, int isPaymentWithCreditCard);


int main(void){
    
    // Init variables
    char roomType, paymentMathod, userDecision;
    int numberOfRooms, numberOfNights;
    float total, pricePerNight;

    // Call function to display menu
    displayMenu();

    // Loop until the user exits
    while (1){

        // Prompt and get the required information from the user
        printf("Room type: ");
        scanf(" %c", &roomType);

        // Code Block: Validate Room Type 
        switch (roomType){
            case 'D':
                pricePerNight = 31000.00;
                break;
            case 'S':
                pricePerNight = 35000.00;
                break;
            case 'C':
                pricePerNight = 50000.00;
                break;
            case 'E':
                pricePerNight = 75000.00;
                break;
            case 'P':
                pricePerNight = 100000.00;
                break;

            default:
                // Display Error
                puts("Invalid Room Type");
                return 0;   // Exit from the main function. AKA exit from the program.
        }
        
        // Prompt and get the required information from the user
        printf("Number of rooms: ");
        scanf(" %d", &numberOfRooms);

        printf("Number of nights: ");
        scanf(" %d", &numberOfNights);
        
        printf("Payment Method (Cash - M / Credit Card - C): ");
        scanf(" %c", &paymentMathod);


        if(paymentMathod == 'C'){
            // Call function calculateTotal. Creditcard parameter on
            total = calculateTotal(pricePerNight, numberOfRooms, numberOfNights, 1);
        }else{
            // Call function calculateTotal. Creditcard parameter off
            total = calculateTotal(pricePerNight, numberOfRooms, numberOfNights, 0);
        }
        
        // Display the total. Limit to 2 decimal places.
        printf("Total: %.2f\n", total);
        
        // Prompt and get the required information from the user
        printf("Do you want to continue (Y/n): ");
        scanf(" %c", &userDecision);
        
        // If user entered don't want to continue. Break from the loop.
        if(userDecision == 'n' || userDecision == 'N'){
            break;
        }

        printf("\n\n");     // Additional line breaks for clarity.
        
    }

    return 0;
}


void displayMenu(){
    printf("%s", "Menu: \n");
    printf("%s", " --------------------------------------------------\n");
    printf("%s", "| Room Type  | Description       | Rate per night  |\n");
    printf("%s", "|------------|-------------------|-----------------|\n");
    printf("%s", "| D          | Deluxe            | 31000.00        |\n");
    printf("%s", "| S          | Superior Deluxe   | 35000.00        |\n");
    printf("%s", "| C          | Club Suites       | 50000.00        |\n");
    printf("%s", "| E          | Executive Suites  | 75000.00        |\n");
    printf("%s", "| P          | Presidential Suite| 100000.00       |\n");
    printf("%s", " --------------------------------------------------\n");
    puts("");
}

float calculateTotal(float pricePerNight, int numberOfRooms, int numberOfNights, int isPaymentWithCreditCard){
    float totalCost, discount;

    // Calculate total
    totalCost = pricePerNight * numberOfRooms * numberOfNights;

    // Conditional to identify weather the discount is eligible
    if(isPaymentWithCreditCard == 1){
        discount = (10.00 / 100.00) * totalCost;
        return totalCost - discount;
    }else{
        return totalCost;
    }

}
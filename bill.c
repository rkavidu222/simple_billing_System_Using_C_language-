#include <stdio.h>

int main() {

    float quantity, price, subtotal, tax, total;
    int numberOfItem;

    printf("Welcome to the Grocery Store!\n");
        
    printf("\nEnter the number of the items : ");
    scanf("%d", &numberOfItem);

    int i = 0;
    do {
        printf("\nEnter the quantity of the item : ");
        if (scanf("%f", &quantity) != 1 || quantity <= 0) {
             printf("Invalid input! Please enter a positive quantity.\n"); 
        }

         printf("Enter the price of the item : ");

        if (scanf("%f", &price) != 1 || price <= 0) {
            printf("Invalid input! Please enter a positive price.\n");
        }

        subtotal = quantity * price;
        i++;
        total = total + subtotal;

    } while (i < numberOfItem); 

    tax = total * 0.07; 
    float bill = total + tax; 

    printf("\nSubtotal bill: $%.2f\n", total);
    printf("Sales tax (7%%): $%.2f\n", tax);
    printf("Total bill: $%.2f\n", bill);
    printf("Thank you for shopping with us!\n");
    
    return 0;
}
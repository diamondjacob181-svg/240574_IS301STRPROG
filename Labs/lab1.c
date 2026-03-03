/*  Problem:Write a program to create a customer’s bill for a company.
    Algorithm:
    1. Define constants for unit prices and tax rate.
    2. Prompt user for quantity of each product.
    3. Calculate total price for each product.
    4. Calculate subtotal 
    5. Calculate tax
    6. Calculate the final total 
    7. Display formatted bill with all details.
    Developed by: George Jacob
    Date:3/3/2026

*/

#include <stdio.h>

#define TV_price 400.00
#define MONITOR_price 220.00
#define FLASH_price 35.20
#define HARD_price 150.00
#define PRINTER_price 300.00
#define TAX_rate 0.0835


int main(){
    int qtyTV, qtyMonitor, qtyFlashdrive, qtyHarddrive, qtyPrinter;
    double TV, Monitor, Flashdrive, Harddrive, Printer;
    double subtotal, tax, total;

printf("How many TVs were sold? ");
    scanf("%d", &qtyTV);

    printf("How many Monitors were sold? ");
    scanf("%d", &qtyMonitor);

    printf("How many Flash Drives were sold? ");
    scanf("%d", &qtyFlashdrive);

    printf("How many Hard Drives were sold? ");
    scanf("%d", &qtyHarddrive);

    printf("How many Deskjet Printers were sold? ");
    scanf("%d", &qtyPrinter);

    TV = qtyTV * TV_price;
    Monitor = qtyMonitor * MONITOR_price;
    Flashdrive = qtyFlashdrive * FLASH_price;
    Harddrive = qtyHarddrive * HARD_price;
    Printer = qtyPrinter * PRINTER_price;

    subtotal = TV + Monitor + Flashdrive + Harddrive + Printer;
    tax = subtotal * TAX_rate;
    total = subtotal + tax;

    printf("\nQTY  DESCRIPTION       UNIT PRICE   TOTAL PRICE\n");
    printf("-------------------------------------------------\n");
    printf("%-4d TV               %8.2f   %10.2f\n", qtyTV, TV_price, TV);
    printf("%-4d Monitor          %8.2f   %10.2f\n", qtyMonitor, MONITOR_price, Monitor);
    printf("%-4d Flash Drive      %8.2f   %10.2f\n", qtyFlashdrive, FLASH_price, Flashdrive);
    printf("%-4d Hard Drive       %8.2f   %10.2f\n", qtyHarddrive, HARD_price, Harddrive);
    printf("%-4d Deskjet Printer  %8.2f   %10.2f\n", qtyPrinter, PRINTER_price, Printer);

    printf("-------------------------------------------------\n");
    printf("Subtotal: %30.2f\n", subtotal);
    printf("Tax:      %30.2f\n", tax);
    printf("Total:    %30.2f\n", total);
    printf("-------------------------------------------------\n");

    return 0;
    
}

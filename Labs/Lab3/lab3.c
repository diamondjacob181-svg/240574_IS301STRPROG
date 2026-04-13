#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *inFile, *outFile;

    int empNo, dept, hoursWorked;
    float payRate, basePay;
    char exempt;
    inFile = fopen("employee.txt", "r");
    if (inFile == NULL) {
        printf("Error opening employee.txt\n");
        return 1;
    }

    outFile = fopen("payroll_register.txt", "w");
    if (outFile == NULL) {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    char header[100];
    fgets(header, sizeof(header), inFile);
    
    fprintf(outFile, "%-10s %-10s %-10s %-10s %-15s %-10s\n",
            "EmpNo", "Dept", "PayRate", "Exempt", "HoursWorked", "BasePay");

    while (fscanf(inFile, "%d %d %f %c %d",
                  &empNo, &dept, &payRate, &exempt, &hoursWorked) != EOF) {

        basePay = payRate * hoursWorked;

        fprintf(outFile, "%-10d %-10d %-10.2f %-10c %-15d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}

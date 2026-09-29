#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paycode = 0;
    double hours, rate, sales, pieces, payPerPiece, weeklyPay;
    while (paycode != 5) {
        printf("1 - Manager\n");
        printf("2 - Hourly Worker\n");
        printf("3 - Commission Worker\n");
        printf("4 - Pieceworker\n");
        printf("5 - Exit Program\n");
        printf("Enter number: ");
        scanf("%d", &paycode);
        switch (paycode) {
            case 1:
                printf("Enter weekly salary: ");
                scanf("%lf", &weeklyPay);
                printf("Manager's pay is $%.2f\n", weeklyPay);
                break;

            case 2:
                printf("Enter hourly rate: ");
                scanf("%lf", &rate);
                printf("Enter hours worked: ");
                scanf("%lf", &hours);

                if (hours <= 40) {
                    weeklyPay = hours * rate;
                } else {
                    weeklyPay = (40 * rate) + ((hours - 40) * rate * 1.5);
                }
                printf("Hourly worker's pay is $%.2f\n", weeklyPay);
                break;

            case 3:
                printf("Enter gross weekly sales: ");
                scanf("%lf", &sales);
                weeklyPay = 250.0 + (sales * 0.057);
                printf("Commission worker's pay is $%.2f\n", weeklyPay);
                break;

            case 4:
                printf("Enter number of pieces produced: ");
                scanf("%lf", &pieces);
                printf("Enter pay per piece: ");
                scanf("%lf", &payPerPiece);
                weeklyPay = pieces * payPerPiece;
                printf("Pieceworker's pay is $%.2f\n", weeklyPay);
                break;

            case 5:
                printf("Exiting program. Total payroll processing complete.\n");
                break;

            default:
                printf("Invalid paycode entered. Please try again.\n");
                break;
        }
    }
    return 0;
}

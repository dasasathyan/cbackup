#include <stdio.h>

int main()
{
    int unit;
    float amt,tax;
    printf("Enter total consumed units: ");
    scanf("%d", &unit);
    if(unit <= 50)
    {
        amt = unit * 0.50;
    }
    else if(unit <= 150)
    {
        amt = 125 + ((unit-50)*0.75);
    }
    else if(unit <= 250)
    {
        amt = 200 + ((unit-150)*1.20);
    }
    else if(unit > 250)
    {
        amt = 320 + ((unit-250)*1.50);
        tax = amt*15/100;
        amt = amt+tax;
    }
    printf("\nElectricity Bill = Rs. %.2f", amt);
    return 0;
}

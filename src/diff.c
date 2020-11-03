#include <stdio.h>

int main(){
    long int decimalNumber, remainder, Quotient;
    int i=1,j,temp;

    char hexadecimalNumber[100];

    printf("Enter the decimal number: ");
    scanf("%ld", &decimalNumber);

    Quotient = decimalNumber;

    while(Quotient != 0)
    {
        temp = Quotient % 16;

        if (temp < 10)
        {
            temp += 48;
        }
        else{temp += 55;}

        hexadecimalNumber[i++] = temp;
        Quotient /= 16;
    } 
    printf("HexadDecimal number of %d is ", decimalNumber);
    for(j=i-1; j>0; j--)
    {
        printf("%c", hexadecimalNumber[j]);
    }
    return 0;
}

#include <cs50.h>
#include <stdio.h>

void brand(long ccn2);
bool checksum(long ccn2);
int length (long n);
bool valid(long ccn);

int main(void)
{
    long ccn;
    do
    {
        ccn = get_long("Enter your credit card number: ");
    }
    while(ccn <= 0);
    if (valid(ccn) == true)
    {
        brand(ccn);
    }
    else
    printf("INVALID\n");
}

bool valid(long ccn)
{
    int len = length(ccn);
    return (len == 13 || len == 15 || len == 16) && checksum(ccn);
}

int length (long n)
{
    int len;
    for(len = 0; n != 0; n /= 10, len++);
    return len;
}

bool checksum(long ccn2)
{
    int sum = 0;
    for(int i = 0; ccn2 != 0; i++, ccn2 /= 10)
    {
        if (i % 2 == 0)
            sum += ccn2 % 10;
        else
        {
            int digit = 2 * (ccn2 % 10);
            sum += digit / 10 + digit % 10;
        }
    }
    return (sum % 10) == 0;
}

void brand(long ccn2)
{
    if((ccn2 >= 34e13 && ccn2 < 35e13) || (ccn2 >= 37e13 && ccn2 < 38e13))
        printf("AMEX\n");
    else if (ccn2 >= 51e14 && ccn2 < 56e14)
        printf("MASTERCARD\n");
    else if ((ccn2 >= 4e12 && ccn2 < 5e12) || (ccn2 >= 4e15 && ccn2 < 5e15))
        printf("VISA\n");
    else
        printf("INVALID\n");
}
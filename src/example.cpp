/* This code example, auto-generated code erased*/
#include "lcd.h"

int main(void)
{
    while (1)
    {
        RESET_ALL_SP_ADDRESS();
        ResetSEGMENTS();
        for (int number = 0; number < 1000; ++number)
        {
            if (number < 10)
            {
                PrintDigit(3, number, 999);
            }
            else if (number > 9 && number < 100)
            {
                int digit1 = number / 10;
                int digit2 = number % 10;
                for (int i = 0; i < 100; ++i)
                {
                    PrintDigit(3, digit1, 4);
                    PrintDigit(2, digit2, 4);
                }
            }
            else if (number > 99 && number < 1000)
            {
                int digit1 = number / 100;

                int two_digits = number % 100;
                int digit2 = two_digits / 10;
                int digit3 = two_digits % 10;

                for (int i = 0; i < 111; ++i)
                {
                    PrintDigit(3, digit3, 3);
                    PrintDigit(2, digit2, 3);
                    PrintDigit(1, digit1, 3);
                }
            }
        }
    }
}
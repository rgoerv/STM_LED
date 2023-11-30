/*
 * lcd.h
 *
 *  Created on: Oct 9, 2023
 *      Author: rgoerv
 */

#ifndef SRC_LCD_H_
#define SRC_LCD_H_

/* Add and change your pin*/
#define A GPIOC, GPIO_PIN_8
#define B GPIOC, GPIO_PIN_6
#define C GPIOB, GPIO_PIN_1
#define D GPIOB, GPIO_PIN_2
#define E GPIOB, GPIO_PIN_12
#define F GPIOB, GPIO_PIN_15
#define G GPIOB, GPIO_PIN_14
#define DP GPIOC, GPIO_PIN_5

#define SP1 GPIOC, GPIO_PIN_7
#define SP2 GPIOB, GPIO_PIN_13
#define SP3 GPIOB, GPIO_PIN_0

void SET_SP_ADDRESS(const int number_module) 
{
	switch(number_module) 
	{
		case 1 : HAL_GPIO_WritePin(SP1, GPIO_PIN_SET); break;
		case 2 : HAL_GPIO_WritePin(SP2, GPIO_PIN_SET); break;
		case 3 : HAL_GPIO_WritePin(SP3, GPIO_PIN_SET); break;
		default : break;
	}
}

void RESET_SP_ADDRESS(const int number_module) 
{
	switch(number_module) 
	{
		case 1 : HAL_GPIO_WritePin(SP1, GPIO_PIN_RESET); break;
		case 2 : HAL_GPIO_WritePin(SP2, GPIO_PIN_RESET); break;
		case 3 : HAL_GPIO_WritePin(SP3, GPIO_PIN_RESET); break;
		default : break;
	}
}

void RESET_ALL_SP_ADDRESS() 
{
	HAL_GPIO_WritePin(SP1, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SP2, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(SP3, GPIO_PIN_RESET);
}

void ResetSEGMENTS() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(B, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(C, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(D, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(E, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(F, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(G, GPIO_PIN_RESET);
	HAL_GPIO_WritePin(DP, GPIO_PIN_RESET);
}


void PrintDigit0() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
	HAL_GPIO_WritePin(E, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
}

void PrintDigit1() 
{
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
}

void PrintDigit2() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
	HAL_GPIO_WritePin(E, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
}

void PrintDigit3() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
}

void PrintDigit4() 
{
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
}

void PrintDigit5() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
}

void PrintDigit6() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
	HAL_GPIO_WritePin(E, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
}

void PrintDigit7() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
}

void PrintDigit8() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
	HAL_GPIO_WritePin(E, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
}

void PrintDigit9() 
{
	HAL_GPIO_WritePin(A, GPIO_PIN_SET);
	HAL_GPIO_WritePin(B, GPIO_PIN_SET);
	HAL_GPIO_WritePin(C, GPIO_PIN_SET);
	HAL_GPIO_WritePin(D, GPIO_PIN_SET);
	HAL_GPIO_WritePin(F, GPIO_PIN_SET);
	HAL_GPIO_WritePin(G, GPIO_PIN_SET);
}

void PrintDigit(const int number) 
{
	switch(number) 
	{
		case 0 : PrintDigit0(); break;
		case 1 : PrintDigit1(); break;
		case 2 : PrintDigit2(); break;
		case 3 : PrintDigit3(); break;
		case 4 : PrintDigit4(); break;
		case 5 : PrintDigit5(); break;
		case 6 : PrintDigit6(); break;
		case 7 : PrintDigit7(); break;
		case 8 : PrintDigit8(); break;
		case 9 : PrintDigit9(); break;
		default : break;
	}
}

void PrintDigit(const int address, const int number)
{
	SET_SP_ADDRESS(address);
	switch(number) 
	{
		case 0 : PrintDigit0(); break;
		case 1 : PrintDigit1(); break;
		case 2 : PrintDigit2(); break;
		case 3 : PrintDigit3(); break;
		case 4 : PrintDigit4(); break;
		case 5 : PrintDigit5(); break;
		case 6 : PrintDigit6(); break;
		case 7 : PrintDigit7(); break;
		case 8 : PrintDigit8(); break;
		case 9 : PrintDigit9(); break;
		default : break;
	}
}

void PrintDigit(const int address, const int number, const int delay) 
{
	SET_SP_ADDRESS(address);
	switch(number) 
	{
		case 0 : PrintDigit0(); break;
		case 1 : PrintDigit1(); break;
		case 2 : PrintDigit2(); break;
		case 3 : PrintDigit3(); break;
		case 4 : PrintDigit4(); break;
		case 5 : PrintDigit5(); break;
		case 6 : PrintDigit6(); break;
		case 7 : PrintDigit7(); break;
		case 8 : PrintDigit8(); break;
		case 9 : PrintDigit9(); break;
		default : break;
	}
	HAL_Delay(delay);
	ResetSEGMENTS();
    RESET_SP_ADDRESS(address);
}

#endif /* SRC_LCD_H_ */

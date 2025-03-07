/* Write a program that will accept the price of an item and the tendered amount. Compute and display the change and the coin denomination. Do not use selection structure.

Example 1: 

	Price of an item: 1650
	Tendered amount: 2000

	Price of an item: 16.50
	Tendered amount: 20.00

	Change: 3.50

	Coin Denomination

	20 peso	:	0
	10 peso	:	0
	 5 peso	:	0
	 1 peso	:	3
       .25 cent.:	2
	.10 cent.:	0
	.05 cent.:	0


Input: Price of an item: ?
printf(The price of an item)
 Tendered amount: ?
 printf ( The tendered amount: ?)
 
 
 Output: Change= Price - Tendered 
 
 Coin Denomination
  

CONST 20 pesos: 0
CONST10 peso: 0
CONST 5 pesos: 0
CONST 1 pesos: 0
CONST .25 cents: 0
CONST .10 cnts : 0
CONST .05 cents: 0
*/
#include <stdio.h>

int main() {
    float price, tendered_amount, change;
    int twenty, ten, five, one, twenty_five_cent, ten_cent, five_cent;

    printf("Tendered amount: ");
    scanf("%f", &tendered_amount);

    printf("Price of an item: ");
    scanf("%f", &price);

    change = tendered_amount - price;

    twenty = change / 20;
    change = change - (twenty * 20);

    ten = change / 10;
    change = change - (ten * 10);

    five = change / 5;
    change = change - (five * 5);

    one = change / 1;
    change = change - (one * 1);

    twenty_five_cent = change / 0.25;
    change = change - (twenty_five_cent * 0.25);

    ten_cent = change / 0.10;
    change = change - (ten_cent * 0.10);

    five_cent = change / 0.05;
    change = change - (five_cent * 0.05);

    printf("Change: %.2f\n", tendered_amount - price);
    printf("Coin Denomination:\n");
    printf("Twenty pesos:%d\n", twenty);
    printf("Ten pesos %d\n", ten);
    printf("Five pesos %d\n", five);
    printf("One pesos %d\n", one);
    printf("Twenty Five cent %d\n", twenty_five_cent);
    printf("Ten Cent %d\n", ten_cent);
    printf("Five Cent %d\n", five_cent);

    return 0;
}



 
 


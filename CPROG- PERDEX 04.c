/*Write a program to create a customer's bill for a company. The company sells only five different products: TV, VCR, Remote Controller, CD Player, and Tape Recorder. The unit prices are P400.00, P220.00, P35.20, P300.00, and P150.00, respectively. The program must read the quantity of each piece of quipment purchased from the keyboard. It then calculates the cost of each item, the subtotal, and the total cost after an 8.25% sales tax.

Example output:

How many TV's were sold? ##
How many VCR's were sold? ##
How many Remote Controllers were sold? ##
How many CD's were sold? ##
How many Tape Recorder's were sold? ##



	QTY		DESCRIPTION		UNIT PRICE		TOTAL PRICE
-----------------------------------------------------------------------------------------------
	XX		TV			XXXX.XX			XXXXX.XX
	XX		VCR			XXXX.XX			XXXXX.XX
	XX		REMOTE CNTRLR		XXXX.XX			XXXXX.XX
	XX		CD PLAYER		XXXX.XX			XXXXX.XX
	XX		TAPE RECORDER		XXXX.XX			XXXXX.XX
									
						SUB. TOTAL		XXXXX.XX (bold)
						TAX			XXXXX.XX (bold)
						TOTAL			XXXXX.XX (bold) */
						
/*

Input:

The amount of products sold for 
TV
VCR
Remote Controller
CD Player
Tape Recorder

OUTPUT
How many TV's were sold? ##
How many VCR's were sold? ##
How many Remote Controllers were sold? ##
How many CD's were sold? ##
How many Tape Recorder's were sold? ##



	QTY		DESCRIPTION		UNIT PRICE		TOTAL PRICE
-----------------------------------------------------------------------------------------------
	%d		TV			     400	 	    QTY*400.00= X
	%d		VCR			     220	 	    QTY*220.00= X
	%d		REMOTE CNTRLR    35.20	   	    QTY*35.20= X
	%d		CD PLAYER		 300.00	   	    QTY*300.00= X
	%d		TAPE RECORDER	 150.00			QRY*150.00= X
									
						SUB. TOTAL	Total Price Of Everything so? (bold)
						TAX			Total Price x 0.0825 (bold)
						TOTAL		Sub Total - Tax (bold)

CONST FLOATS TELIVISION = 400.00
CONST FLOATS VCR = 220.00
CONST FLOATS Remote_Controller = 35.20
CONST FLOATS CD_Player = 150.00
CONST FLOATS Sales_Tax = 0.0825 or 8.25%
*/

#include <stdio.h>

int main() 
{

int TV,VCR,Remote_Controller,CD_Player,Tape_Recorder,Sales_Tax;

float TV_TOTAL,VCR_TOTAL,Remote_TOTAL,CD_TOTAL,Tape_TOTAL,Sub_TOTAL,Taxes,Total_Price;


const float TELIVISION_PRICE = 400.00;
const float VCR_PRICE = 220.00;
const float REMOTE_CONTROLLER_PRICE = 35.20;
const float CD_PLAYER_PRICE = 300.00;
const float TAPE_RECORDER_PRICE = 150.00;
const float SALES_TAX = 0.0825;

printf("How many TV's were sold?");
scanf("%d",&TV);

printf ("How many VCR's were sold?");
scanf("%d",&VCR);

printf ("How many Remote Controller's were sold?");
scanf("%d",&Remote_Controller);

printf("How many CD's were sold?");
scanf("%d",&CD_Player);

printf("How many Tape Recorder's were sold?");
scanf("%d",&Tape_Recorder);

TV_TOTAL = TV * TELIVISION_PRICE;
VCR_TOTAL = VCR * VCR_PRICE;
Remote_TOTAL = Remote_Controller * REMOTE_CONTROLLER_PRICE;
CD_TOTAL = CD_Player * CD_PLAYER_PRICE;
Tape_TOTAL = Tape_Recorder * TAPE_RECORDER_PRICE;

Sub_TOTAL = TV_TOTAL + VCR_TOTAL + Remote_TOTAL + CD_TOTAL + Tape_TOTAL;
Taxes = Sub_TOTAL * SALES_TAX;
Total_Price = Sub_TOTAL - Taxes;

printf("\nHow many TV's were sold? %d",TV);
printf("\nHow many VCR's were sold? %d",VCR);
printf("\nHow many Remote Controller's were sold? %d",Remote_Controller);
printf("\nHow many CD's were sold? %d",CD_Player);
printf("\nHow many Tape Recorder's were sold? %d",Tape_Recorder);


printf("\n QTY  DESCRIPTION             UNIT PRICE           TOTAL PRICE");
printf("\n--------------------------------------------------------------------------------------");
printf("\n%d    TV                      %.2f                    %.2f",TV, TELIVISION_PRICE, TV_TOTAL);
printf("\n%d    VCR                      %.2f                    %.2f",VCR, VCR_PRICE, VCR_TOTAL);  
printf("\n%d    REMOTE CONTROLLER        %.2f                    %.2f",Remote_Controller, REMOTE_CONTROLLER_PRICE, Remote_TOTAL);
printf("\n%d   CD PLAYER                %.2f                    %.2f",CD_Player, CD_PLAYER_PRICE, CD_TOTAL);
printf("\n%d   TAPE RECORDER            %.2f                    %.2f",Tape_Recorder, TAPE_RECORDER_PRICE, Tape_TOTAL);

printf("\nSUB.TOTAl           %.2f",Sub_TOTAL);
printf("\nTAX                 %.2f",Taxes);
printf("\nTOTAL               %.2f",Total_Price);

return 0;

}











































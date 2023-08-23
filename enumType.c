/*Date: 2023.06.02
Purpose: Defines an enum type and uses that type to display the values of some variables*/

#include <stdio.h>

int main() {

	enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO, EBAY, MICROSOFT }; // creates the enum type and assigns valid values to it. 
	//declaring 3 variables and initializing it
	enum Company comp1 = XEROX;
	enum Company comp2 = GOOGLE;
	enum Company comp3 = EBAY;

	//display the value of the variables as output, separate lines
	printf("%d \n", comp1);
	printf("%d \n", comp2);
	printf("%d \n", comp3);

}
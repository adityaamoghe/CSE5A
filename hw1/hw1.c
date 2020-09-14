/* File: hw1.c
 * Name: Aditya Moghe
 * Date: Aug 6, 2019
 * Sources of help: None
 * General description of the program: 
   Part 1: User enters first and last Initials, along with book price and shipping to get a total cost. 
   Part 2: User enters number of conversions to be made along with corresponding weight values; program converts values from one unit of weight to the other as indicatde by user*/
#include <stdio.h>
#define SALES_TAX_RATE  .0775       //Sales tax rate for La Jolla 7.75%
#define POUND_KILO  weight/2.2046   //conversion from pounds to kilos
#define KILO_POUND  weight*2.2046   //conversion from kilos to pounds
/*
 * Part 1: Gather user's initials as well as book price and shipping; ultimately gives total to user 
   Part 2: Asks for a number of conversions (from lb to kg or vise versa) the user wants to run; it then calculates the given number of conversions to the corresponding unit*/
int main()
{
    printf("Part 1:\n\n");
    
    char firstInitial; //first initial
    char lastInitial; //last initial
    double bookCost; //cost of book
    double shippingCost; //cost of shipping
    double tax; //cost of tax
    double totalCost; //total cost
    
    
    printf("Enter the first letter of your first name: ");
    firstInitial = getchar();     //Read single character input
    getchar();                    //Read <ENTER> key
    
    printf("Enter the first letter of your last name: ");
    scanf("%c", &lastInitial);    //Read character input
    getchar();                    //Read <ENTER> key
    
    printf("Enter the cost of the book: ");
    scanf("%lf", &bookCost);      //Read floating point input
    getchar();                    //Read <ENTER> key
    
    printf("Enter the shipping cost: ");
    scanf("%lf", &shippingCost);  //Read floating point input
    getchar(); //Read <ENTER> key
    
    tax = (bookCost*SALES_TAX_RATE); //Defines tax
    
    totalCost = (bookCost + tax + shippingCost);  //Defines totalCost
    
    printf("\nReceipt for %c. %c.:\n", firstInitial, lastInitial);
    printf("Book:\t\t$%8.2lf\nTax:\t\t$%8.2lf\nShipping:\t$%8.2lf\nTotal:\t\t$%8.2lf\n", bookCost, tax, shippingCost, totalCost);
    //End of part 1 of the program
    
    //Beginning of part 2 of the program
	printf("\nPart 2:\n\n");
    
    
    int times; //iteration (i)
    double weight; //Weight value that user wants to be converted
    char value; //Any character the user inputs to denote pound or kilo conversion
    int conversTimes; //The number of weight conversions user wants to perform
    
    printf ("How many weight conversions would you like to perform? ");
    scanf ("%d", &conversTimes);     //Read integer input
    getchar();                       //Read <ENTER> key
    printf ("\n");
    
    for (times=1; times<=conversTimes; times++)
        {
        	printf("[#%d] Enter the weight you want to convert: ", times);
        	scanf ("%lf" , &weight);    //Read floating point input
        	getchar();                  //Read <ENTER> key
        
        	printf("Is this a pound or kilogram weight? [P/K]: ");
        	scanf("%c", &value);        //Read single character input
        	getchar();                  //Read <ENTER> key
		           
            if (value== 'p' || value=='P') //If user inputs 'p' or 'P' as their character input then the program converts the weight value from pounds to kilos
                {
                	printf("\t%8.2lf lb = \t%8.2f kg\n\n", weight, POUND_KILO);
                }
            
            else if (value== 'k' || value=='K') //If user inputs 'k' or 'K' as their character input then the program converts the weight value from kilos to pounds
                {
                	printf("\t%8.2lf kg = \t%8.2f lb\n\n", weight, KILO_POUND  );
                }
            
            else //If user inputs a character other than 'p', 'P', 'K', or 'k' as their character input then the program converts the weight value from pounds to kilos
                {
                	printf("\t%8.2lf lb = \t%8.2f kg\n\n", weight, POUND_KILO); 
                }
        
        }
    
    printf("\nPress ENTER to quit!");   //Quit message
    getchar();                          //Wait for input, freeze screen
    return 0;
}

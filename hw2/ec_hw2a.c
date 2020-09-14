/* File: ec_hw2a.c
 * Name: Aditya Moghe
 * Date: August 13, 2019
 * Sources of help: None
 * General description of the program: The program displays a pizza menu with varying toppings.
 The user may enter up to a max of 6 toppings on this pizza. Once they hit 6 toppings, they can
 choose to submit their order or start over.*/

#include <stdio.h>

#define PIZZA_COST  10.0       //Cost of plain cheese pizza
#define TOPPING_COST 1.25      //Cost per additional topping
#define MAX_VALUE 6             //Maximum topping amount

/*
 * General description of the main function:The main function loops the menu screen for as long as the user keeps up to 6 toppings.
 Once the user places his order by entering '0' the loop ends and the user is checked out */

int main(void)

    {
        double costOfPizza=PIZZA_COST; //cheese pizza (initial pizza with no toppings)
        int countOfToppings=0; //number of toppings added
        int choice; //user input
        char confirmation; //yes/no confirmation when order is placed

        printf("Pizza! Pizza!\nCheese pizza costs $%0.2lf.\n",PIZZA_COST);
        printf("Additional toppings cost $%0.2lf each.\n", TOPPING_COST);
        printf("You can add up to %d toppings.\n\n", MAX_VALUE);

        do

            {
                //menu screen choice 0-9
                printf("0) Place order\n");
                printf("1) Remove all toppings\n");
                printf("2) Add extra cheese\n");
                printf("3) Add pepperoni\n");
                printf("4) Add sausage\n");
                printf("5) Add bacon\n");
                printf("6) Add mushrooms\n");
                printf("7) Add pineapple\n");
                printf("8) Add bell peppers\n");
                printf("9) Add olives\n\n");

                printf("Enter choice:");

                scanf("%d",&choice); //Read integer input
                getchar(); //Read <ENTER> key

                if (choice==1)

                    {
                        costOfPizza=PIZZA_COST; //Pizza cost returns to $10
                        printf("All toppings removed\n");
                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                        countOfToppings=0;  //Count of toppings gets reinitialized back to 0
                    }

                else if (choice==0)

                    {
                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                        printf("You are adding %d extra topping(s) for a total of $%0.2lf.\n" , countOfToppings, costOfPizza ); //Gives user order summary
                        printf("Do you wish to order this pizza (y/n)?");
                        
                        scanf("%c", &confirmation); //Read single character input
                        getchar(); //Read <ENTER> key

                        if (confirmation=='Y'||confirmation=='y')

                            {
                                printf("Thank you for your order, your pizza will be ready soon.\n");
                                printf("Press ENTER to exit!");
                                getchar(); //Read <ENTER> key
                                return 0;
                            }

                        else if (confirmation=='N'||confirmation=='n')

                            {
                                printf("Your order has been cancelled, please come again.\n");
                                printf("Press ENTER to exit!");
                                getchar(); //Read <ENTER> key
                                return 0;
                            }

                        else

                            {
                                printf("Your order has been cancelled, please come again.\n");
                                printf("Press ENTER to exit!");
                                getchar(); //Read <ENTER> key
                                return 0;
                            }

                    }

                else if (choice==2||choice==3||choice==4||choice==5||choice==6||choice==7||choice==8||choice==9)

                    {
                        if (countOfToppings==MAX_VALUE) //only when 6 toppings are added

                            {
                                printf("Maximum toppings reached\n");
                                printf("Current Price: $%0.2lf\n\n", costOfPizza);
                            }

                        else //for toppings less than 6

                            {
                                costOfPizza+=TOPPING_COST; //every user input from 2-9 adds $1.25 to the updating cost of the pizza (cost of pizza starts at $10)
                                ++countOfToppings; //increment amount of toppings

                                if (choice==2)

                                    {
                                        printf("Adding extra cheese\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==3)

                                    {
                                        printf("Adding pepperoni\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==4)

                                    {
                                        printf("Adding sausage\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==5)

                                    {
                                        printf("Adding bacon\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==6)

                                    {
                                        printf("Adding mushrooms\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==7)

                                    {
                                        printf("Adding pineapple\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==8)

                                    {
                                        printf("Adding bell peppers\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                                else if (choice==9)

                                    {
                                        printf("Adding Olives\n");
                                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                                    }

                            }

                    }

                else //if invalid input is entered

                    {
                        printf("Invalid choice\n");
                        printf("Current price: $%0.2lf\n\n", costOfPizza);
                    }


            } while (choice!=0);

        return 0;

    }




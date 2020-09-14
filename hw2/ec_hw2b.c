/* File: ec_hw2b.c
 * Name: Aditya Moghe
 * Date: August 13, 2019
 * Sources of help: None
 * General description of the program: The program loops a math calculator with varying functions.
 The calculator quits with input of 'q' or 'Q'*/

#include <stdio.h>
#include <math.h>

#define _USE_MATH_DEFINES

//Function Prototypes
void displayMenu(void);
char getCharInput(void);
double getDoubleInput(void);

double areaSquare (double width);
double areaRectangle (double width, double height);
double areaCircle (double radius);

double surfaceAreaCube(double width);
double surfaceAreaCylinder(double radius, double height);

double volumeCube(double width);
double volumeSphere(double radius);
double volumeCylinder(double radius, double height);
double volumeRectangularPrism(double length, double width, double height);

/*
 * General description of the main function: Main function calls the other fucntions neccessary to calculate what the user wants. 
 In this version, there are added functions. The display function is called to show the calculator menu.  */

int main()

    {
        char inputByUser; //character input by user
        double width; //width input by user
        double height; //height input by user
        double length; //length input by user
        double radius; //radius input by user
        double calculation; //calculation created

        do //loops calculator until 'q' or 'Q' is entered

            {
                displayMenu(); //calls function displayMenu
                inputByUser=getCharInput(); //calls function getCharInput

                switch (inputByUser)

                    {
                        case '1':
                        	
                            printf("Enter width:");
                            width=getDoubleInput(); //calls function getDoubleInput
                            calculation= areaSquare(width); //calls function areaSquare
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '2':
                        	
                            printf("Enter width:");
                            width=getDoubleInput(); //calls function getDoubleInput
                            printf("Enter height:");
                            height=getDoubleInput(); //calls function getDoubleInput
                            calculation= areaRectangle(width,height); //calls function areaRectangle
                            printf("%0.2lf meters\n\n", calculation);
                            break;
                    
                        case '3':
                        	
                            printf("Enter radius:");
                            radius=getDoubleInput(); //calls function getDoubleInput
                            calculation= areaCircle(radius); //calls function areaCircle
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '4':
                        	
                            printf("Enter width:");
                            width=getDoubleInput(); //calls function getDoubleInput
                            calculation= surfaceAreaCube(width); //calls function surfaceAreaCube
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '5':
                        	
                            printf("Enter radius:");
                            radius=getDoubleInput(); //calls function getDoubleInput
                            printf("Enter height:");
                            height=getDoubleInput(); //calls function getDoubleInput
                            calculation= surfaceAreaCylinder(radius, height); //calls function surfaceAreaCylinder
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '6':

                            printf("Enter width:");
                            width=getDoubleInput(); //calls function getDoubleInput
                            calculation= volumeCube(width); //calls function volumeCube
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '7':

                            printf("Enter radius:");
                            radius=getDoubleInput(); //calls function getDoubleInput
                            calculation= volumeSphere(radius); //calls function volumeSphere
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '8':

                            printf("Enter radius:");
                            radius=getDoubleInput(); //calls function getDoubleInput
                            printf("Enter height:");
                            height=getDoubleInput(); //calls function getDoubleInput
                            calculation= volumeCylinder(radius, height); //calls function volumeCylinder
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case '9':

                            printf("Enter length:");
                            length=getDoubleInput(); //calls function getDoubleInput
                            printf("Enter width:");
                            width=getDoubleInput(); //calls function getDoubleInput
                            printf("Enter height:");
                            height=getDoubleInput(); //calls function getDoubleInput
                            calculation= volumeRectangularPrism(length, width, height); //calls function volumeRectangularPrism
                            printf("%0.2lf meters\n\n", calculation);
                            break;

                        case 'q':
                        case 'Q':

                            printf("Goodbye!\n\nPress ENTER to exit!\n");
                            getchar(); //reads <ENTER> key
                            return(0); //exits program
                            break;

                        default:

                            printf("Invalid choice\n\n"); //if input is incorrect
                            break;


                    }while (inputByUser=='q'||inputByUser=='Q'); //switch loops while input is not 'q' or 'Q'


            } while (inputByUser!='q'||inputByUser!='Q'); //loops display and switch case while input is not 'q' or 'Q'

        
    }


//Funtion definitions below

/*
 * General description of the displayMenu function: Prints the display for the calculator program */

void displayMenu(void)

    {
        printf("Geometry Caluculator:\n");
        printf("1) Area of a Square\n");
        printf("2) Area of a Rectangle\n");
        printf("3) Area of a Circle\n");
        printf("4) Surface Area of a Cube\n");
        printf("5) Surface Area of a Cyliner\n");
        printf("6) Volume of a Cube\n");
        printf("7) Volume of a Sphere\n");
        printf("8) Volume of a Cylinder\n");
        printf("9) Volume of a Rectangular Prism\n\n");
    
        printf("Enter choice (Q/q to quit):");

    }

/*
 * General description of the getCharInput function: Reads the character inputs by the user */

char getCharInput(void)

    {
        char selection;
        scanf("%c", &selection);
        getchar();
        return(selection);
    }


/*
 * General description of the getDoubleInput function: Reads the number inputs by the user*/

double getDoubleInput(void)

    {
        double userInput;
        scanf("%lf", &userInput);
        getchar();
        return(userInput);
    }

/*
 * Calculates the area of a square*/

double areaSquare (double width)

    {
        return (width*width);
    }

/*
 * Calculates the area of a rectangle*/

double areaRectangle (double width, double height)

    {
        return(width*height);
    }


/*
 * Calculates the area of a circle*/

double areaCircle (double radius)

    {
        return(M_PI*radius*radius);
    }

/*
 * Calculates the surface area of a cube*/

double surfaceAreaCube(double width)

    {
        return(6*areaSquare(width));
    }

/*
 * Calculates the surface area of a cylinder*/

double surfaceAreaCylinder(double radius, double height)

    {
        return((2*areaCircle(radius))+(2*M_PI*radius*height));
    }

/*
 * Calculates the volume of a cube*/

double volumeCube(double width)

    {
        return(pow(width, 3));
    }

/*
 * Calculates the volume of a sphere*/

double volumeSphere(double radius)

    {
        return((4.0/3.0)*radius*areaCircle(radius));
    }

/*
 * Calculates the volume of a cylinder*/

double volumeCylinder(double radius, double height)

    {
        return(areaCircle(radius)*height);
    }


/*
 * Calculates the volume of a rectangular prism*/

double volumeRectangularPrism(double length, double width, double height)

    {
        return(length*areaRectangle(width,height));
    }

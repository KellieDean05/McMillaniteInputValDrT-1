/*
	Input Validation with Ref Functions 
	A cleaner way to do input validation
	Validating input, an essential process.
	Source: http://stackoverflow.com/questions/514420/how-to-validate-numeric-input-c
	Keeping Dr. McMillan from breaking my code, defend against "dark side of the force",
	and/or legitimate user error. 
	//Try and Catch blocks are used in error checking
	Teacher: Dr. Tyson McMillan 
*/
#include <cstdlib>  // Provides EXIT_SUCCESS
#include <iostream>  // Provides cout, cerr, endl
#include "Input_Validation_Extended.h" // Provides getValidatedInput<T>(), a header File with a Template Class
                              // Extended 2-11-2016 by Dr. McMillan to add validation methods by datatype
#include<string> //for string manipulation
#include<sstream> //for string manipulation and comparison
#include <cmath>
using namespace std;
void showMenu(); // function prototype
void workSelection(char); // function prototype
void welcomeMessage (); // function prototype
double calcAreaCircle(double);
double calcAreaRhombus(double, double); // 2 parameters
double calcAreaSphere(double);



void welcomeMessage ()
  {
    for(int i = 0; i <= 1;i++)
    cout << "\x1b[92;1mAre you ready to Area?!\x1b[0m\n" << endl;
  }

int main()
{
  
	// a program to practice functions and user-menus
  // with char input. 
  // Kellie Henderson, Dr_T. 8-09-2019

  char option = '\0'; // menu options of the user.
  do
  {
  showMenu();
  welcomeMessage();
  option = validateChar(option);
  workSelection(option); // based on the user input, select a menu item  
  }
while (option != 'e' && option != 'E');  
    
    return 0;
}
// Function Definition
void showMenu()
{
cout << "\n\x1b[36;1mMenu\x1b[0m\n" << endl;
cout << "\nC or c = Area of Circle" << endl;
cout << "R or r = Area of Rhombus" << endl;
cout << "S or s = Area of Sphere" << endl;
cout << "D or d = clear the screen" << endl;
cout << "E or e = EXIT" << endl;
cout << "Selection: " << endl;
}

void workSelection(char selection)
{
  double radius = 0.0, s1 = 0.0, s2 = 0.0;
  if(selection == 'C' || selection == 'c')
   {
      cout << "\nIt's Circle time!" << endl;
      cout << "\nPlease enter a radius." << endl;
      radius = validateDouble (radius);
    // call function to calculate area of circle
    cout << "\nCircle area with radius of: " << radius << " is "<<calcAreaCircle(radius) << endl;
   }

    else if (selection == 'r' || selection == 'R')
  {
    cout << "\nIt's Rhombus time!" << endl;
    cout << "\nPlease enter a side 1 : " << endl;
      radius = validateDouble (s1);
        cout << "\nPlease enter side 2 : " << endl;
      radius = validateDouble (s2);
    // call the function to calculate the area of the Rhombus
    cout << "\nRhombus area with sides( " << s1 << " , " << s2 << " )"; cout << "is \x1b[93;4m " << calcAreaRhombus(s1,s2) << "\x1b[0m\n";
    
  }
  
  else if (selection == 'S'|| selection == 's')
  {
    cout << "\n It's Shpere time!" << endl;
    // call the function to calculate the area of a Sphere
  }
  else if (selection == 'D' || selection == 'd')
   { 
   // clear the screen
   cout << "\033[2J\033[1;1H";
   }
   else if (selection == 'E' || selection == 'e')
   {
     cout << "\nHasta La Vista Baby!" << endl;
   }
   else // default clause
   {
     cout << "\nSomething went wrong!" << endl; 
   }
}

double calcAreaCircle(double r)
  { const double PI = 3.14;
  return (2.0* PI * pow(r,2.0) );


  } 
double calcAreaRhombus(double s1, double s2)
  {
    return ( (s1 * s2) / 2.0);

  } 

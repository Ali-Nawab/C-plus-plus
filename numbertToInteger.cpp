// MAKE A C++ PROGRAM THAT CONVERT NUMBER INTO INTEGER.
#include<iostream> // PREPROCESSOR DIRECTIVE.
using namespace std;
int main () // MAIN FUNCTION
{
 bool khan= false; // VARIABLE BOOL AND GIVEN THE VALUE FALSE.
cout<<"Enter the number : "; // STATEMENT
char z; // VARIABLE DECLARATION.
while(z!='p') // USING WHILE LOOP, AND Z=P, THE LOOP WILL TERMINATED.
{ z=getchar(); // GET CHARACTER FROM THE USER.
 if (z!='\n') // IF CHARACTER NOT EQUAL TO ENTER , THEN FOLLOW NEXT.
 {
 if(khan==true) // IF BOOL TRUE THEN PRINT COMMA.
 {cout<<",";}
 if (z=='0') // IF CHARACTER EQUAL TO 0 THEN PRINT ZERO.
 {cout<<"zero";}
 if (z=='1') // IF CHARACTER EQUAL TO 1 THEN PRINT ONE.
 {cout<<"one";}
 if (z=='2') // IF CHARACTER EQUAL TO 2 THEN PRINT TWO.
 {cout<<"two";}
 if (z=='3') // IF CHARACTER EQUAL TO 3 THEN PRINT ZERO.
 {cout<<"three";}
 if (z=='4') // IF CHARACTER EQUAL TO 4 THEN PRINT ZERO.
 {cout<<"four";}
 if (z=='5') // IF CHARACTER EQUAL TO 5 THEN PRINT ZERO.
 {cout<<"five";}
 if (z=='6') // IF CHARACTER EQUAL TO 6 THEN PRINT ZERO.
 {cout<<"six";}
 if (z=='7') // IF CHARACTER EQUAL TO 7 THEN PRINT ZERO.
 {cout<<"seven";}
 if (z=='8') // IF CHARACTER EQUAL TO 8 THEN PRINT ZERO.
 {cout<<"eight";}
 if (z=='9') // IF CHARACTER EQUAL TO 9 THEN PRINT ZERO.
 {cout<<"nine";}}
 khan=true; // AT LAST WE INITIALIZE KHAN TRUE TO PRINT COMMA BEFORE SECOND DIGIT.
}
return 0;
}
// END OF MAIN.

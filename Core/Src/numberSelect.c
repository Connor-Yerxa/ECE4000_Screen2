//Allows selection of numbers
#include readButtons.h
#include displayText.h
#include math.h

//REDO THIS BECAUSE OF BUTTON CHANGE

int button = 0;
int number = 0;
int extra = 0;
int multiplier = 0;

double numberSelect(char selectionID, int length){
  while (length > 0){
    button = readButtons();
    if (button = 4){ //increase the number
      number++;
    }
    if (button = 5){
      multiplier = pow(10, length); //shifts it over
      extra = extra + muliplier*number; //add multiplied value
      number = 0;  //reset number
      length--; //move to the next number
    }
    if button = 6){ //decrease the number
      number--;
    }
    displayText(); //Display the numbers and buttons
  }
  
    //LIMITS & Checks based on ID (Add more to this!)
  if (extra > 1000){
    extra = 1000;
  }
  return extra
}

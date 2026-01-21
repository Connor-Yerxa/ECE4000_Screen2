/* Reads the button stats, returns 0-6 depending on which are pressed */
//Ignores multiple buttons, just returns the first

int buttonPressed = 0;
boolean button1 = false;
boolean button2 = false;
boolean button3 = false;
boolean button4 = false;
boolean button5 = false;
boolean button6 = false;

double readButtons(){
  while(buttonPressed =  0){
  //Read in buttons from pin activity as booleans, if any are pressed change buttonX. Needs actual pin assignments that will be used.
  
// NEW I/O SINCE BUTTONS HAVE CHANGED - SPEAK TO CONNOR ABOUT NEW PINS
    
  //Write buttonPressed  
    if (button1 = true){
      buttonPressed = 1;
    }
    else if (button2 = true){
      buttonPressed = 2;
    }
    else if (button3 = true){
      buttonPressed = 3;
    }
    else if (button4 = true){
      buttonPressed = 4;
    }
    else if (button5 = true){
      buttonPressed = 5;
    }
    else if (button6 = true){
      buttonPressed = 6;
    }
  }
  return buttonPressed
}

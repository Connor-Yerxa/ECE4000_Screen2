/* Reads the button stats, returns 0-6 depending on which are pressed */
//Ignores multiple buttons, just returns the first

buttonPressed = 0
button1 = false
button2 = false
button3 = false
button4 = false
button5 = false
button6 = false

double readButtons(){
  while(buttonPressed =  0){
  //Read in buttons from pin activity as booleans, if any are pressed change buttonX


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
  return buttonsPressed
}

//Setup after buttons are added! - PCB needed

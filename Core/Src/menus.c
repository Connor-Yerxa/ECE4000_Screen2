/* menus for the display interface */
/* Start on main interface, have text boxes appear, with text added separately, potentially as variables */

#include readButtons.h //Allows the reading of buttons
#include selectNumber.h //Allows for the selection of a number 0-9
#include displayText.h //Lets the screen display the right text
  

// variable setup
double screen = 0; // sets where the screen starts
char text[6][20]; //textbox filler (6 buttons, 20char max)
int button = 0;
int number = 0;

//Expected inputs: Buttons 1-6
//Outputs: Display
//Screen starts at "stage" 0, and alters in an else-if statement until it reaches the section that needs to update.


  while(1) {
      //Main menu 99
      if (screen = 99){
          text = {"New Test", "Calibration", "Settings", "Data", "", ""}
          displayText(screen, 0);
          button = readButtons();
      }
      else if (screen < 200){ // Testing
        both = 0
        text = {"Time","Temperature","Both","Default","",""} //'Both' will do 110 and 111 in order, default will reset.
        displayText(screen, 0);
        button = readButtons();
        
        
        if (screen = 110){ //Time select
         displayText(screen, 0);
         number = numberSelect(I,4);
         
         if (both = 1){  //Active if both was selected
            screen = 111;
         }
        }
        if (screen = 111){ //Temperature Select
         displayText(screen, 0);
         number = numberSelect(E,3);
        }          
        if (screen = 120){ // Test running, runs until done or alternative reached
         text = {"Cancel","","","","",""}
         displayText(screen, 0);
        //READBUTTONFUNCTION??? OR JUST WAIT
        }
      }
      
      //Calibration
      else if (screen < 300){
        text = {"Confirm","Set default","","","","Cancel"}
        displayText(screen, 0);
        button = readButtons();
        
        if (screen = 210){
          text = {"Material-A","material-B","","","","Cancel"}
          displayText(screen, 0);
          button = readButtons();
        }
        
        if (screen = 220){
          text = {"Cancel","","","","",""}
          displayText(screen, 0);
          button = readButtons();
        }
        if (screen = 230){
          text = {"Return","","","","",""}
          displayText(screen, 0);
          button = readButtons();
        }
      }   
            
      //Settings
      else if (screen < 400){
        text = {"Brightness","Default Sample temp cuttoff","Default Sample duration","","","Back"}
        displayText(screen, 0);
        
        if (screen = 310){//Brightness
          displayText(screen, 0);
          number = numberSelect(B,1);
        }
                if (screen = 320){//Sample Temp
          displayText(screen, 0);
          number = numberSelect(E,3);
        }
                if (screen = 330){//Sample Duration
          displayText(screen, 0);
          number = numberSelect(I,4);
        }
      }
        
      //Data
      else if (screen < 500){
        //To be developed potentially later.
      }
      //Out of range
      else{
          printf("Error: outside of range")
      }


      //PUSH TO MAIN SCREEN
}













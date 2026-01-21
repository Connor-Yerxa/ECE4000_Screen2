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
double deltaTemp = 100;
double deltaTime = 600;

//Expected inputs: Buttons 1-6
//Outputs: Display
//Screen starts at "stage" 0, and alters in an else-if statement until it reaches the section that needs to update.


  while(1) {
      //Main menu 99
      if (screen = 99){
          text = {"New Test", "Calibration", "Settings", "Data", "", ""}
          displayText(screen, 0);
          button = readButtons();
          if (button = 1){
              screen = 100; //testing
          }
          else if (button = 2){
              screen = 200; //calibration
          }
          else if (button = 3){
              screen = 300; //settings
          }
          else if (button = 4){
              screen = 400; //Data
          }
          else{
             screen = 99; //do nothing
          }
      }
      else if (screen = 100){ // Testing
          both = 0;
          text = {"Time","Temperature","Both","Default","","Menu"} //'Both' will do 110 and 111 in order, default will reset.
          displayText(screen, 0);
          button = readButtons();
          if (button = 1){
              screen = 110; //Time select
          }
          else if (button = 2){
              screen = 110; //Temperature select
          }
          else if (button = 3){
              screen = 110; //Both
              both = 1;
          }
          else if (button = 4){
              deltaTemp = 100; //10 degrees
              deltaTime = 600; //10 minutes
              screen = 120; //Run test
          }
          else if (button = 6){
              screen = 99; //return to main menu
          }
          else{
             screen = 100; //do nothing
          }
        
        if (screen = 110){ //Time select
         displayText(screen, 0);
         number = numberSelect(I,4);
         
         if (both = 1){  //Active if both was selected
            screen = 111;
         }
          else{
            screen = 120;
          }
        }
        if (screen = 111){ //Temperature Select
           displayText(screen, 0);
           number = numberSelect(E,3);
          screen = 120;
        }          
        if (screen = 120){ // Test running, runs until done or alternative reached
         text = {"Cancel","","","","",""}
          displayText(screen, 0);
          //RUN TEST OUTPUT
        //READBUTTONFUNCTION??? OR JUST WAIT
        }
      }
      
      //Calibration
      else if (screen = 200){
        text = {"Physical Calibration","Set default","","","","Menu"}
        displayText(screen, 0);
        button = readButtons();
          if (button = 1){
              screen = 210;
          }
          else if (button = 2){
              //SET CALIBRATION TO DEFAULT SETTINGS
          }
          else if (button = 6){
              screen = 99; //return to main menu
          }
          else{
             screen = 200; //do nothing
          }


        if (screen = 210){
          text = {"Material-A","Material-B","","","","Back"}
          displayText(screen, 0);
          button = readButtons();
          if (button = 1){
              //MATERIAL A CALIBRATION
          }
          else if (button = 2){
              //MATERIAL B CALIBRATION
          }
          else if (button = 6){
              screen = 200; //return to main menu
          }
          else{
             screen = 210; //do nothing
          }
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
      else if (screen = 300){
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
      else if (screen = 400){
        //To be developed potentially later.
      }
      //Out of range
      else{
          printf("Error: outside of range")
      }


      //PUSH TO MAIN SCREEN
}













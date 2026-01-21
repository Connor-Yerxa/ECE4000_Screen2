/* menus for the display interface */
/* Start on main interface, have text boxes appear, with text added separately, potentially as variables */

#include readButtons.h //Allows the reading of buttons
#include selectNumber.h //Allows for the selection of a number 0-9
#include displayText.h //Lets the screen display the right text
  
/*
// variable setup
double screen = 0; // sets where the screen starts
char text[6][20]; //textbox filler (6 buttons, 20char max)
char display[1][50]; //Screen display
int button = 0;
int number = 0;

//Expected inputs: Buttons 1-6
//Outputs: Display
//Screen starts at "stage" 0, and alters in an else-if statement until it reaches the section that needs to update.


  while(1) {
      //Main menu 0-99
      if (screen < 100){
          display = {"Menu"}
          text = {"New Test", "Calibration", "Settings", "Data", "", ""}
          displayText(screen, 0);
          button = readButtons();
      }
      //Testing
      else if (screen < 200){
        display = {"Select testing limit(s)"}
        both = 0
        text = {"Time","Temperature","Both","Default","",""} //'Both' will do 110 and 111 in order, default will reset.
        displayText(screen, 0);
        button = readButtons();
        
        
        if (screen = 110){ //Time select
         display = "Select time limit (max) 10 minutes"
         displayText(screen, 0);
         number = numberSelect(I,4);
         
         if (both = 1){  //Active if both was selected
            screen = 111;
         }
        }
        if (screen = 111){ //Temperature Select
         display = "Select temperature delta limit (max 10 degrees)"
         displayText(screen, 0);
         number = numberSelect(E,3);
        }          
        if (screen = 120){ // Test running, runs until done or alternative reached
         display = "Test underway"
         text = {"Cancel","","","","",""}
         displayText(screen, 0);
        //READBUTTONFUNCTION??? OR JUST WAIT
        }
      }
      
      //Calibration
      else if (screen < 300){
        display = {"Run calibration?"}
        text = {"Confirm","Set default","","","","Cancel"}
        displayText(screen, 0);
        button = readButtons();
        
        if (screen = 210){
          display = {"Select calibration material"}
          text = {"Material-A","material-B","","","","Cancel"}
          displayText(screen, 0);
          button = readButtons();
        }
        
        if (screen = 220){
          display = {"Running calibration."}
          text = {"Cancel","","","","",""}
          displayText(screen, 0);
          button = readButtons();
        }
        if (screen = 230){
          display = {"Calibration sucessful"}
          text = {"Return","","","","",""}
          displayText(screen, 0);
          button = readButtons();
        }
      }   
            
      //Settings
      else if (screen < 400){
        display = {"Settings"}
        text = {"Brightness","Default Sample temp cuttoff","Default Sample duration","","","Back"}
        displayText(screen, 0);
        
        if (screen = 310){//Brightness
          display = "Brighness 1-10"
          displayText(screen, 0);
          number = numberSelect(B,1);
        }
                if (screen = 320){//Sample Temp
          display = "Temperature change"
          displayText(screen, 0);
          number = numberSelect(E,3);
        }
                if (screen = 330){//Sample Duration
          display = "Sample Duration"
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




*/









/* menus for the display interface */
/* Start on main interface, have text boxes appear, with text added separately, potentially as variables */

/*
// Screen variable
int screen = 0; // sets where the screen starts
char text[6][20]; //textbox filler (6 buttons, 20char max)
char display[1][50]; //Screen display

//Expected inputs: Buttons 1-6
//Outputs: Display
//Screen starts at "stage" 0, and alters in an else-if statement until it reaches the section that needs to update.


  while(1) {
      //Main menu 0-99
      if (screen < 100){
          display = {"Menu"}
          text = {"New Test", "Calibration", "Settings", "Data", "", ""}
          //READBUTTONFUNCTION
      }
      //Testing
      else if (screen < 200){
        display = {"Select testing limit(s)"}
        both = 0
        text = {"Time","Temperature","Both","Default","",""} //'Both' will do 110 and 111 in order, default will reset.
        //READBUTTONFUNCTION
        
        
        if (screen = 110){ //Time select
         display = "Select time limit (max) 10 minutes"
         //READBUTTONFUNCTION
         if (both = 1){  //Active if both was selected
            screen = 111;
         }
        }
        
        if (screen = 111){ //Temperature Select
         display = "Select temperature delta limit (max 10 degrees)"
          //READBUTTONFUNCTION
        }          
        if (screen = 120){ // Test running, runs until done or alternative reached
         display = "Test underway"
         text = {"Cancel","","","","",""}
        //READBUTTONFUNCTION??? OR JUST WAIT
        }
      }
      
      //Calibration
      else if (screen < 300){
        display = {"Run calibration?"}
        text = {"Confirm","Set default","","","","Cancel"}
        //READBUTTONFUNCTION
        
        if (screen = 210){
          display = {"Select calibration material"}
          text = {"Material-A","material-B","","","","Cancel"}
          //READBUTTONFUNCTION
        }
        
        if (screen = 220){
          display = {"Running calibration."}
          text = {"Cancel","","","","",""}
          //READBUTTONFUNCTION
        }
        if (screen = 230){
          display = {"Calibration sucessful"}
          text = {"Return","","","","",""}
          //READBUTTONFUNCTION
        }
      }   
            
      //Settings
      else if (screen < 400){
        display = {"Settings"}
        text = {"Brightness","Default Sample temp cuttoff","Default Sample duration","","","Back"}
        
        if (screen = 310){//Brightness
          display = "Brighness 1-10"
          //READBUTTONFUNCTION
        }
                if (screen = 310){//Sample Temp
          display = "Temperature change"
          //READBUTTONFUNCTION
        }
                if (screen = 310){//Sample Duration
          display = "Sample Duration"
          //READBUTTONFUNCTION
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









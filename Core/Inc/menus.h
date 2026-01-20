/* menus for the display interface */


/* Start on main interface, have text boxes appear, with text added separately, potentially as variables */

/*Types of text: 0-9, confirm or cancel, Main menu, Settings */

/*
// Screen variable
int screen = 0;
char text[6][20]; //textbox filler (6 buttons, 20char max)
char display[1][50]; //Screen display

// constant loop
  while(1) {
      //Main menu 0-99
      if (screen < 100){
          display = {"Menu"}
          text = {"New Test", "Calibration", "Settings", "Data", "", ""}
      }
      //Testing
      else if (screen < 200){
        display = {"Select testing limit"}
        text = {"Time","Temperature","Both","Default","","","","","",""}
        //'Both' will do 110 and 111
        if (screen = 110){ //Time select
         display = "Select time limit (max) 10 minutes"
        }
        if (screen = 111){ //Temperature Select
         display = "Select temperature delta limit (max 10 degrees)"
         text = {"1","2","3","4","5","6","7","8","9","0"}
        }          
        if (screen = 120){ // Test running 
         display = "Test underway"
         text = {"Cancel","","","","","","","","",""}
        }
      }
      
      //Calibration
      else if (screen < 300){
        display = {"Run calibration?"}
        text = {"Confirm","Cancel","Set default","","","","","","",""}
        if (screen = 210)
          display = {"Select calibration material"}
          text = {"A","B","Cancel","","","","","","",""}
        if (screen = 220)
          display = {"Running calibration."}
          text = {"Cancel","","","","","","","","",""}
        if (screen = 230)
          display = {"Calibration sucessful"}
          text = {"Return","","","","","","","","",""}
      }   
            
      //Settings
      else if (screen < 400){
        display = {"Settings"}
        text = {"Brightness","Sample time","Sample duration","","","","","","","Back"}
        if (screen = 310){
          display = "Brighness 1-10"
          text = {"1","2","3","4","5","6","7","8","9","10"}
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









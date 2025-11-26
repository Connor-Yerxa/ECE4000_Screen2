/* menus for the display interface */


/* Start on main interface, have text boxes appear, with text added separately, potentially as variables */

/*Types of text: 0-9, confirm or cancel, Main menu, Settings */

/*
// Screen variable
int screen = 0;
char text[10][20]; //textbox filler
char display[1][50]; //Screen display
//text = {"","","","","","","","","",""}

// constant loop
  while(1) {
      //Main menu 0-99
      if (screen < 100){
          display = {"Menu"}
          text = {"New Test", "Calibration", "Settings", "Data", "", "", "", "", "", ""}
      }
      //Testing
      else if (screen < 200){
          display = {"Select testing limit"}
          text = {"Time","Temperature","Both","Default","","","","","",""}

          //'Both' will do 110 and 111
          if (screen = 110){ //Time select
              display = "Select time limit (max) 10 minutes"
              text = {"1","2","3","4","5","6","7","8","9","0"}
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

      }   
      
      //Settings
      else if (screen < 400){
    
      }

      //Data
      else if (screen < 500){

      
      }
      //Out of range
      else{
          printf("Error: outside of range")
      }

}




*/





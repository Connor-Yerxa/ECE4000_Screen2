char text[6][20]; //textbox filler (6 buttons, 20char max)
char display[1][50]; //Screen display

double displayText(double ID, double extra){
  //reads in ID, shows text based on ID or screen number
  //extra is to read in other values to show

  
  if (ID = 0){//main menu
    display = {"Menu"}
  }
  if (ID = 100){
      display = {"Select testing limit(s)"}
      text = {"Time","Temperature","Both","Default","",""} //'Both' will do 110 and 111 in order, default will reset.
  } 
  if (ID = 110){
      display = {"Select time limit (max) 10 minutes"}
      text = extra;
  }
  if (ID = 111){
      display = {"Select temperature delta limit (max 10 degrees)"}
      text = extra;
  }
  if (ID = 120){
      display = {"Test underway"}
  }
  if (ID = 200){
      display = {"Run calibration?"}
  }
  if (ID = 210){
      display = {"Select calibration material"}
  }
  if (ID = 220){
      display = {"Running calibration."}
  }
  if (ID = 230){
      display = {"Calibration sucessful"}
  }
  if (ID = 300){
      display = {"Settings"}
  }
  if (ID = 310){
      display = {"Brighness 1-10"}
  }
  if (ID = 320){
      display = {"Temperature change"}
  }
  if (ID = 330){
      display = {"Sample Duration"}
  }
  if (ID = 400){
      display = {"Data"}
  }
              
              

  //OUTPUT TO BOARD

  return
}

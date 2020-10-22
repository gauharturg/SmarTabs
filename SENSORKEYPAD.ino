 int LD = 200; // Loop Delay. Do not change.

void setup() {
    Serial.begin(9600);
  
    // input pins
    pinMode(2, INPUT);// Button 1 input pin 2  
    pinMode(3, INPUT);// Button 2 input pin 3  
    pinMode(4, INPUT);// Button 3 input pin 4  
    pinMode(5, INPUT);// Button 4 input pin 5              


    Serial.println("KORYA KLASS");

}

void loop() {

    // button 1 action
    if(digitalRead(2)){
      Serial.println("Button 1 Touched "); 
    }

    // button 2 action
    if(digitalRead(3)){
      Serial.println("Button 2 Touched "); 
  
    }   

    // button 3 action
    if(digitalRead(4)){
      Serial.println("Button 3 Touched "); 
     
    }     

   // button 4 action
    if(digitalRead(5)){
      Serial.println("Button 4 Touched "); 
     
    }

}// loop

    

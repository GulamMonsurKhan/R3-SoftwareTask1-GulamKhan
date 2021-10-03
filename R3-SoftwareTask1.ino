int potPin = A1; //Pin connected to potentiometer

void setup()
{
  //Variables being initialized
  pinMode(potPin, INPUT); 
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  Serial.begin(9600);	 //9600 ms bits/s	
}

void loop()
{
  int potMeasure = analogRead(potPin); //Reading input
  potMeasure = map(potMeasure, 0, 1023, 0, 99); //Maps range
  Serial.println(potMeasure); //Displaying input in Serial Monitor
  delay(20); //To ensure quality
  //Split the number into 2 and display on both sseg's
  int digitOne = (potMeasure/10) % 10; 
  int digitTwo = potMeasure % 10;
  //Call the function for each display 
  leftDisplay(digitOne);
  rightDisplay(digitTwo);
}
//This function assigns LED's for the left SSEG
void leftDisplay(int digitOne){
  switch(digitOne){
    case 0:		//0000	
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    break;
    
    case 1:		//0001	
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    break;
    
    case 2:		//0010	
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    break;
    
    case 3:		//0011	
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    break;
    
    case 4:		//0100	
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    break;
    
    case 5:		//0101	
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    break;
    
    case 6:		//0110	
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    break;
    
    case 7:		//0111	
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    digitalWrite(11, HIGH);
    digitalWrite(10, HIGH);
    break;
    
    case 8:		//1000	
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    break;
    
    case 9:		//1001	
    digitalWrite(13, HIGH);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH); 
    break;
  }
}
//This function assigns LED's for the right SSEG
void rightDisplay(int digitTwo){
  switch(digitTwo){
    case 0:		//0000	
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    break;
    
    case 1:		//0001	
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    break;
    
    case 2:		//0010	
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    break;
    
    case 3:		//0011	
    digitalWrite(6, LOW);
    digitalWrite(5, LOW);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    break;
    
    case 4:		//0100	
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    break;
    
    case 5:		//0101	
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH);
    break;
    
    case 6:		//0110	
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, LOW);
    break;
    
    case 7:		//0111	
    digitalWrite(6, LOW);
    digitalWrite(5, HIGH);
    digitalWrite(4, HIGH);
    digitalWrite(3, HIGH);
    break;
    
    case 8:		//1000	
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, LOW);
    break;
    
    case 9:		//1001	
    digitalWrite(6, HIGH);
    digitalWrite(5, LOW);
    digitalWrite(4, LOW);
    digitalWrite(3, HIGH); 
    break;
  	}
}
//C++ code
//Max By SwankyNoob
//CC-NC-ND
//Date of this Update: 02.19.2023 (Version 1.0.0)

char dado_recebido = 0;

//Max Tip: The setup() function is executed only once, usually used for Max project setups.
void setup()
{
  pinMode(MaxInput1, OUTPUT);
  pinMode(MaxInput2, OUTPUT);
  pinMode(MaxInput3, OUTPUT);
  pinMode(MaxInput4, OUTPUT);
  pinMode(MaxInput5, OUTPUT);
  pinMode(MaxInput6, OUTPUT);
  Serial.begin(9600);
  Serial.println("Max version: 1.0.1");
  Serial.println("Developed by SwankyNoob, license CC-NC-ND");
}

//Max's tip: The loop() function, always executed (as long as the program is active), is the main part of the Max project, and of any other Arduino project.

void loop() 
{
  if(Serial.available() > 0)
  {
      dado_recebido = Serial.read();
      switch(dado_recebido)
      {
        //If Max receives the A (Capital) signal from the smartphone, he will walk forward.
        case 'A':
                  digitalWrite(LED3,HIGH);
                  digitalWrite(LED8,LOW);
                  Serial.println("Received Max Command:");
                  Serial.println("Walk Forward");
        break;
        //If Max receives the a (Minuscule) signal from the smartphone, he will walk to the RIGHT side.
        case 'a':
                  digitalWrite(LED3,LOW);
                  digitalWrite(LED8,HIGH);
                  Serial.println("Received Max Command:");
                  Serial.println("Walking on the Right Side");
                  
        break;
        //If Max receives the B (Capital) signal from the smartphone, he will walk to the LEFT side.
        case 'B':
                  digitalWrite(LED3,LOW);
                  digitalWrite(LED8,HIGH);
                  Serial.println("Received Max Command");
                  Serial.println("Walk to the Left Side");
                  
        break;
        //If Max receives the b (Minuscule) signal from the smartphone, he will walk to the backwards.   
        case 'b':
                  digitalWrite(LED3,LOW);
                  digitalWrite(LED8,HIGH);
                  Serial.println("Received Max Command:");
                  Serial.println("Walking Backwards");
                  
        break;    
        
        default: 
        Serial.println("Max Problem: Invalid Command");
       }
    
  }
         
}

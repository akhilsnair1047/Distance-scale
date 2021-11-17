int trigPin=11; 
int echoPin=12; 
int A=2;
int B=3; 
int C=4; 
int D=5;
int E=6; 
int F=7; 
int G=8;
int led=9;
int brightness=1;

void setup()
{     Serial.begin(9600);   
      Serial.println("Device Started");  
      pinMode(trigPin,OUTPUT); 
      pinMode(echoPin,INPUT); 
 pinMode(A,OUTPUT);  
 pinMode(B,OUTPUT);    
 pinMode(C,OUTPUT);    
 pinMode(D,OUTPUT);    
 pinMode(E,OUTPUT);   
 pinMode(F,OUTPUT);    
 pinMode(G,OUTPUT); 
 
 pinMode(led,OUTPUT);
       
}

void loop()
{     Serial.println(getDistanceFromSensor(trigPin,echoPin)); 
  
        
} 
 


long int getDistanceFromSensor(int trig, int echo)
{     long duration; 
       int distance; 
    digitalWrite(trig, LOW);    
 delayMicroseconds(2);    
 digitalWrite(trig, HIGH);    
 delayMicroseconds(10);     
 digitalWrite(trig, LOW);   
 duration = pulseIn(echo, HIGH);    
 distance =(duration / 2) / 2000.0;   
 
 switch(distance) 
    {
       case 4:         
          digitalWrite(A,HIGH);    
          digitalWrite(B,LOW);     
          digitalWrite(C,LOW);      
          digitalWrite(D,HIGH);         
          digitalWrite(E,HIGH);         
          digitalWrite(F,LOW);         
          digitalWrite(G,LOW);        
             break;   
       case 3: 
          digitalWrite(A,LOW);    
        digitalWrite(B,LOW);        
        digitalWrite(C,LOW);        
        digitalWrite(D,LOW);        
        digitalWrite(E,HIGH);          
        digitalWrite(F,HIGH);          
        digitalWrite(G,LOW);        
         break;        
       case 2:           
  digitalWrite(A,LOW);  
  digitalWrite(B,LOW);       
  digitalWrite(C,HIGH);     
  digitalWrite(D,LOW);     
  digitalWrite(E,LOW);            
         digitalWrite(F,HIGH);  
  digitalWrite(G,LOW);
       break;
 case 1:       
  digitalWrite(A,HIGH);   
  digitalWrite(B,LOW);   
  digitalWrite(C,LOW);    
  digitalWrite(D,HIGH);   
  digitalWrite(E,HIGH);     
  digitalWrite(F,HIGH);      
  digitalWrite(G,HIGH);  
  break;     
  case 0:       
  digitalWrite(A,LOW);    
  digitalWrite(B,LOW);    
  digitalWrite(C,LOW);  
  digitalWrite(D,LOW);   
  digitalWrite(E,LOW);  
  digitalWrite(F,LOW);
  digitalWrite(G,HIGH);  
  break; 
}
      
 brightness=distance*25;
    analogWrite(led,brightness);
 
 return distance;
} 
 

 

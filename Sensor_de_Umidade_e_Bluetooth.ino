#include "DHT.h"                                            

#define dht_pin A0                              
#define DHTTYPE DHT22                           
DHT dht(dht_pin, DHTTYPE);                      
 
void setup()                                     
{                                              
  Serial.begin(9600);                           
  dht.begin();                                  
}                                               
 
void loop()                                     
{                                               
  float umidade = dht.readHumidity();           
  float temperatura = dht.readTemperature();    
  Serial.print("Temperatura: ");                
  Serial.print(temperatura);                    
  Serial.print(" C ");                          
  Serial.print("Umidade: ");                    
  Serial.print(umidade);                        
  Serial.println(" %");                         
  delay(5000);                                  
}    
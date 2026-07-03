/*
  LCD Display with I2C Interface and DHT-22 Temp/Humid Sensor
wavewizards.org
*/

// Include Wire Library for I2C
#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include "DHT.h";

// Define LCD pinout
const int  en = 2, rw = 1, rs = 0, d4 = 4, d5 = 5, d6 = 6, d7 = 7, bl = 3;

//Define the LCD I2C Address
const int i2c_addr = 0x27; //Change this value to your LCD I2C Address

// Define Sensor Type - use DHT11 or DHT22
#define DHTPIN 7       // DHT-22 Output Pin connection
#define DHTTYPE DHT11

// Define LCD display connections
LiquidCrystal_I2C lcd(i2c_addr, en, rw, rs, d4, d5, d6, d7, bl, POSITIVE);

// Define Variables
float hum;    // Stores humidity value in percent
float temp;   // Stores temperature value in Celcius

// Setup DHT sensor for normal 16mhz Arduino
DHT dht(DHTPIN, DHTTYPE);

void setup() 

{
  lcd.begin(16,2);
  dht.begin();
}

void loop()
{
  delay(2000);  // Give a delay so the sensor can stabalize
  
  hum = dht.readHumidity();  // Get Humidity value
    temp= dht.readTemperature();  // Get Temperature value
    
    // Clear the display
    lcd.clear();
    
    // Locate cursor on top line and print values
  lcd.setCursor(0,0);
  lcd.print("Temp:  ");
  lcd.print(temp);
  lcd.print(" C");
  
  // Locate cursor on bottom line and print values
  lcd.setCursor(0,1);
  lcd.print("Humid: ");
  lcd.print(hum);
  lcd.print(" %");

}

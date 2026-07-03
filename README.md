# DHT11-Temperature-and-Humidity-Display
Arduino UNO R3 - Use a DHT11 Temperature and Humidity Sensor to Display on 1602 LCD<br><br>
Hardware:<br>
1 x Arduino UNO R3<br>
1 x DHT11 Temperature / Humidity Sensor (The DHT22 also works and is pin for pin compatible)<br>
1 x LCD 16×02 with I2C Adapter<br><br>


Please excuse the crudity of the image, I didn’t have time to build it to scale or to paint it.
<br><br>
<img width="1366" height="489" alt="layout" src="https://github.com/user-attachments/assets/ef6cb4e5-e141-4507-8be3-f54988847e74" />
<br><br>
Connect the LCD to the Arduino

Orange = SCL<br>
Blue = SDA<br>
Red = +5VDC<br>
Black = GND<br>
<br>
The rear of the LCD can be seen below.<br>
Make sure you don’t confuse the power and ground lines!<br>
The little blue potentiometer controls the contrast. It should be set just about right from the Factory.<br>
<img width="1782" height="898" alt="i2c_connect" src="https://github.com/user-attachments/assets/d2730c81-4e05-4eef-bdbc-a78a1c35f072" />
<br><br>
The SCL (Clock) and SDA (Data) lines can be seen on the UNO R3 on the left in the image below.<bR>
(Orange and Yellow Wires)<br>
<br>
The white wire comes from the Data pin on the DHT11 Sensor<br>
<img width="1060" height="519" alt="r3_connections_small" src="https://github.com/user-attachments/assets/5d096e17-ff9a-4f2b-acbc-cf06754f3d90" />
<br><br>
Now we can connect the DHT11 to the Arduino<br>
<img width="970" height="545" alt="dht11_small" src="https://github.com/user-attachments/assets/68df926b-1d8c-485f-888a-e3eda91a3c78" />
<br><br>
Red – Connect to 5v on Arduino<br>
White – Connect to Pin 7 on Arduino<br>
Black – Connect to GND on Arduino<br>
<br>
Notice that the THIRD pin in NOT connected.<br>
Now it is time to upload the code to the arduino so it all works<br>
<br>
<img width="2327" height="536" alt="lcd_small" src="https://github.com/user-attachments/assets/7e14089f-2e37-44b7-b2fb-57ec4478ea58" />
<br>
You will need to install the Adafruit Unified Sensor Library and the NewLiquidCrystal Library<br>
You can find the DHT11 and Adafruit Libraries in the Arduino Library Manager<br>
You can find the NewLiquidCrystal Library at: https://www.wavewizards.org/sdm_downloads/newliquidcrystal/



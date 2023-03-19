int LED = D7;
int tempSensor = A1;

void setup()
{
    pinMode(LED, OUTPUT);
}

void loop()
{
    digitalWrite(LED, HIGH);    // Turn the LED on
    
    String temp = String(analogRead(tempSensor)); // Get the temp using sensor
    Particle.publish("temp", temp, PRIVATE); // Publish to Thingspeak
    delay(30000);    // Delay 30 seconds
    
    digitalWrite(LED, LOW); // Turn LED off
    delay(30000);   // Delay 30 seconds
    
}

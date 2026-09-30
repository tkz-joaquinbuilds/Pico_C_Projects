#include <Arduino.h>

#define led_pin 13 
#define button_pin 12


void setup() 
{
    pinMode(led_pin, OUTPUT);
    pinMode(button_pin, INPUT);
}

void loop()
{
    if (digitalRead(button_pin) == HIGH) 
    {
        digitalWrite(led_pin, HIGH);
    } 
    else 
    {
        digitalWrite(led_pin, LOW);
    }
}
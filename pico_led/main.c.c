#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#define LED_PIN 25


void PICO_LED_INIT(void) //funcion que no devuelve nada, pero inicializa los gpio con su direccion
{ //gpio set seria mira este pin 25 quiero que lo inicies como salida
gpio_init(LED_PIN); //aca mi led pin seria el gpio 25
gpio_set_dir(LED_PIN, GPIO_OUT); //aca le dice setea esa direccion como una salida
}// el void set me genera un poco de confucion porque es una funcion que no devuelve nada pero
void SET_LED_PIN (bool led_on)//el bool led on, seria como una instruccion? o una variable donde se guarda
//esa instruccion?
{
gpio_put(LED_PIN, led_on );// facil pon a mi gpou led_pin, como una salida de voltaje
}
int main()
{
  PICO_LED_INIT();//inicia la variable
  while(true) // SET LED ES VERDAD, FRENA (500 SEGUNDOS)
  {//SET LED ES MENTIRA, FRENA (500 SEGUNDOS)
   SET_LED_PIN (true);
   sleep_ms (500);
   SET_LED_PIN (false);
   sleep_ms (500);
  }
//RESULTADO PRINTEO HELLO WORD NQVER


}
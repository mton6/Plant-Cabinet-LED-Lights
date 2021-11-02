#include <FastLED.h>
#define LED_PIN 2
#define NUM_LEDS 60

CRGB leds[NUM_LEDS];


void setup() {

  
  //Callibrate LEDS and clear previous code to run new code
  FastLED.addLeds<WS2812, LED_PIN, GRB>(leds, NUM_LEDS);
  FastLED.setMaxPowerInVoltsAndMilliamps(5, 500);
  FastLED.clear();
  FastLED.show();

}

/* Psydo Code for water sensor
Global Variable moisture_lvl = 0
int wet = 1000
int dry = 100

//Read Moisture level
moisture_lvl = ???

while true:

if moisture_lvl >= wet:
  for(int i=0; i<NUM_LEDS; i= i++){
  leds[i] = CRGB(0,0,255); //Change all LED to Blue
  FastLED.show();


if moisture_lvl > dry and moisture_lvl < wet:
  for(int i=0; i<NUM_LEDS; i= i++){
  leds[i] = CRGB(0,255,0); //Change all LED to Green
  FastLED.show();

if moisture_lvl <= dry:
  for(int i=0; i<NUM_LEDS; i= i++){
  leds[i] = CRGB(255,0,0); //Change all LED to Red
  FastLED.show();

*/

void loop() {
 //Time loop #1
  for(int i=0; i<NUM_LEDS; i= i+3){
  leds[i] = CRGB(102,0,204);
  leds[i+1] = CRGB(0, 0, 255);
  leds[i+2] = CRGB (255,0,0);
 FastLED.show();
 }
delay(60000);
  for(int i=0; i<NUM_LEDS; i++){
  leds[i] = CRGB(255,255,255);
  FastLED.show();
 }
delay(60000);
}

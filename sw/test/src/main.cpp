
#include <FastLED.h>


#define DATA_PIN    29
#define LED_TYPE    SK6812
#define NUM_LEDS    33
CRGB leds[NUM_LEDS];

#define BRIGHTNESS          128
#define FRAMES_PER_SECOND  120

void setup() {
  FastLED.addLeds<LED_TYPE,DATA_PIN>(leds, NUM_LEDS).setCorrection(TypicalLEDStrip);
  FastLED.setBrightness(BRIGHTNESS);
}
   

uint8_t gHue = 0;
           
void loop()
{
  fill_rainbow( leds, NUM_LEDS, gHue, 7);

  FastLED.show();  
  FastLED.delay(1000/FRAMES_PER_SECOND); 
  EVERY_N_MILLISECONDS( 20 ) { gHue++; }
}

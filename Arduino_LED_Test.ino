#include <FastLED.h>
#define PIN 4
#define NUM_LEDS 27           //Longest chain of LEDs, or length to be tested

CRGB leds[NUM_LEDS];

int i = 0;

void setup() {
      FastLED.addLeds<NEOPIXEL, PIN>(leds, NUM_LEDS);
      FastLED.setBrightness( 250);
}

void loop() { 
      if( i == NUM_LEDS + 1 ) { 
            i = 0;                                    //pulls dot back to beginning
      } else { 
            for( int i = 0; i < NUM_LEDS + 1; i++ ) { //sends a dot along the array of LEDs by int Addr
                  //set LED i to white; show and wait
                  leds[i].setRGB( 250 , 250 , 250 );  
                  FastLED.show();                     
                  delay( 500 );
                  //
                  leds[i].fadeToBlackBy( 128 );       //flickers the dot
                  FastLED.show();
                  delay( 100 ); 
                  //
                  leds[i].setRGB ( 0, 0, 0 );         //blacks out current dot position
                  FastLED.show();
                  delay( 250 );
            }
      } 
}



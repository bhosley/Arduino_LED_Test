#include <FastLED.h>
#define PIN 4
#define NUM_LEDS 27     //Longest chain of LEDs, or length to be tested

CRGB leds[NUM_LEDS];

int i = 0;

void setup() {
      FastLED.addLeds<NEOPIXEL, PIN>(leds, NUM_LEDS);
      FastLED.setBrightness( 250);
}

void loop() { 
      // Check for index out of bounds
      if( i == NUM_LEDS + 1 ) { 
            i = 0;
      } else { 
            for( int i = 0; i < NUM_LEDS + 1; i++ ) {
                  
                  //set LED i to white; send command and wait
                  leds[i].setRGB( 250 , 250 , 250 );  
                  FastLED.show();                     
                  delay( 500 );

                  // Slowly fade LED i to black; send command and wait
                  leds[i].fadeToBlackBy( 128 );       
                  FastLED.show();
                  delay( 100 ); 

                  // Turn off LED i; send command and wait
                  leds[i].setRGB ( 0, 0, 0 );
                  FastLED.show();
                  delay( 250 );
            }
      } 
}



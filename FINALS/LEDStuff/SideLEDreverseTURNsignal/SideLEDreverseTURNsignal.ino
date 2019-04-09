#include <FastLED.h>

// How many leds in your strip?
#define NUM_LEDS 16

// For led chips like Neopixels, which have a data line, ground, and power, you just
// need to define DATA_PIN.  For led chipsets that are SPI based (four wires - data, clock,
// ground, and power), like the LPD8806 define both DATA_PIN and CLOCK_PIN
#define DATA_PIN 3
#define CLOCK_PIN 13

// Define the array of leds
CRGB leds[NUM_LEDS];

void setup() { 
      // Uncomment/edit one of the following lines for your leds arrangement.
      // FastLED.addLeds<TM1803, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1804, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<TM1809, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2811, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<WS2812B, DATA_PIN, RGB>(leds, NUM_LEDS);
      //FastLED.addLeds<NEOPIXEL, DATA_PIN>(leds, NUM_LEDS);
      // FastLED.addLeds<APA104, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<UCS1903B, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205, DATA_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<GW6205_400, DATA_PIN, RGB>(leds, NUM_LEDS);
      
       FastLED.addLeds<WS2801, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, RGB>(leds, NUM_LEDS);

       FastLED.addLeds<WS2801, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<SM16716, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<LPD8806, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<P9813, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<APA102, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
      // FastLED.addLeds<DOTSTAR, DATA_PIN, CLOCK_PIN, RGB>(leds, NUM_LEDS);
}

void loop() { 
  // Turn the LED on, then pause
  leds[16] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[16] = CRGB::Black;
  FastLED.show();
  
  leds[15] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[15] = CRGB::Black;
  FastLED.show();
  
  leds[14] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[14] = CRGB::Black;
  FastLED.show();

  leds[13] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[13] = CRGB::Black;
  FastLED.show();
  
  leds[12] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[12] = CRGB::Black;
  FastLED.show();
 
  leds[11] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[11] = CRGB::Black;
  FastLED.show();
  
  leds[10] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[10] = CRGB::Black;
  FastLED.show();
  
  leds[9] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[9] = CRGB::Black;
  FastLED.show();
  
  leds[8] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[8] = CRGB::Black;
  FastLED.show();
  
  leds[7] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[7] = CRGB::Black;
  FastLED.show();
  
  leds[6] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[6] = CRGB::Black;
  FastLED.show();
  
  leds[5] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[5] = CRGB::Black;
  FastLED.show();
  
  leds[4] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[4] = CRGB::Black;
  FastLED.show();
  
  leds[3] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[3] = CRGB::Black;
  FastLED.show();
  
  leds[2] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[2] = CRGB::Black;
  FastLED.show();
  
  leds[1] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[1] = CRGB::Black;
  FastLED.show();
  
  leds[0] = CRGB::White;
  FastLED.show();
  delay(100);
  leds[0] = CRGB::Black;
  FastLED.show();

  
   
  

    
  
 
 
 
  
  
  
  
  
  
  
  
  
 
  
}

#include <FastLED.h>

#define LED_PIN     7
#define NUM_LEDS    522

int lights[NUM_LEDS + 1];

int colorSelect = 0;

CRGB leds[NUM_LEDS];

void setup() {

  Serial.begin(9600);
  FastLED.addLeds<WS2811, LED_PIN, GRB>(leds, NUM_LEDS);

  
}

void loop() {
  
  Sequence1();
  Sequence3();
  Sequence4();
  Sequence5();
  Sequence6();
  Sequence8();

}

void Sequence1() {

  int wait = 2500;
  int pulse = 10;
  int repeat = 2;

  SetColor(255, 0, 0);

  for (int i = 0; i < repeat; i++) {
    ColorClimbUp(pulse, 255, 30, 0);
    delay(wait);
    ColorClimbUp(pulse, 255, 110, 0);
    delay(wait);
    ColorClimbUp(pulse, 255, 0, 0);
    delay(wait);
  }

}

void Sequence2() {

  int pulse = 2500;

  SetColor(255, 0, 0);
  delay(pulse);
  SetColor(0, 255, 0);
  delay(pulse);
  SetColor(255, 255, 255);
  delay(pulse);
  SetColor(255, 0, 0);
  delay(pulse);
  SetColor(0, 255, 0);
  delay(pulse);
  SetColor(255, 255, 255);
  delay(pulse);
  SetColor(255, 0, 0);
  delay(pulse);

}

void Sequence3() {

  int pulse = 10;
  int wait = 2500;
  int repeat = 2;

  SetColor(255,0,0);
  
  for(int i = 0; i < repeat; i++) {

    //Sparkle to green
    SparkleColorChange(pulse, 255, 30, 0);
    delay(wait);

    //Sparkle to white
    SparkleColorChange(pulse, 255, 110, 0);
    delay(wait);

    //Sparkle to red
    SparkleColorChange(pulse, 255, 0, 0);
    delay(wait);
  }


}

void Sequence4() {

  int wait = 1000;
  int repeat = 5;

  for(int i = 0; i <= repeat; i++) {
    SetThreeColors(255, 0, 0, 255, 30, 0, 255, 110, 0);
    delay(wait);
    SetThreeColors(255, 110, 0, 255, 0, 0, 255, 30, 0);
    delay(wait);
    SetThreeColors(255, 30, 0, 255, 110, 0, 255, 0, 0);
    delay(wait);
  }

}

void Sequence5() {

  int repeat = 3;

  for(int i = 0; i < repeat; i++) {

    HomecomingFade();
  }
}

void Sequence6() {

  int wait = 500;
  int repeat = 5;

  for(int i = 0; i <= repeat; i++) {

    MixedLights1(255,0,0, 255,30,0, 255,110,0);
    delay(wait);
    MixedLights1(255,110,0, 255,0,0, 255,30,0);
    delay(wait);
    MixedLights1(255,30,0, 255,110,0, 255,0,0);
    delay(wait);

  }

}

//red = 255,0,0
//yellow = 255, 150, 0
//green = 0,255,0
//orange = 255,50,0
//blue = 0,0,255

//FIXME: Colors are off at the end
void Sequence7() {

  int wait = 1000;
  int repeat = 20;

  for(int i = 0; i <= repeat; i++) {

    MixedLights2(255,0,0, 255,250,0, 0,255,0, 255,50,0, 0,0,255);
    delay(wait);
    MixedLights2(0,0,255, 255,0,0, 255,250,0, 0,255,0, 255,50,0);
    delay(wait);
    MixedLights2(255,50,0, 0,0,255, 255,0,0, 255,250,0, 0,255,0);
    delay(wait);
    MixedLights2(0,255,0, 255,50,0, 0,0,255, 255,0,0, 255,250,0);
    delay(wait);
    MixedLights2(255,250,0, 0,255,0, 255,50,0, 0,0,255, 255,0,0);
    delay(wait);

  }

}

void Sequence8() {

  int repeat = 5;

  for(int i = 0; i <= repeat; i++) {
    HomecomingBrightnessFade();
  }

}

void HomecomingBrightnessFade() {

  int wait = 100;
  int repeat = 3;

  for(int i = 0; i <= repeat; i++) {

    MixedLights2(50,0,0, 100,0,0, 150,0,0, 200,0,0, 250,0,0);
    delay(wait);
    MixedLights2(250,0,0, 50,0,0, 100,0,0, 150,0,0, 200,0,0);
    delay(wait);
    MixedLights2(200,0,0, 250,0,0, 50,0,0, 100,0,0, 150,0,0);
    delay(wait);
    MixedLights2(150,0,0, 200,0,0, 250,0,0, 50,0,0, 100,0,0);
    delay(wait);
    MixedLights2(100,0,0, 150,0,0, 200,0,0, 250,0,0, 50,0,0);
    delay(wait);

  }

  for(int i = 0; i <= repeat; i++) {

    MixedLights2(50,10,0, 100,15,0, 150,20,0, 200,25,0, 250,30,0);
    delay(wait);
    MixedLights2(250,30,0, 50,10,0, 100,15,0, 150,20,0, 200,25,0);
    delay(wait);
    MixedLights2(200,25,0, 250,30,0, 50,10,0, 100,15,0, 150,20,0);
    delay(wait);
    MixedLights2(150,20,0, 200,25,0, 250,30,0, 50,10,0, 100,15,0);
    delay(wait);
    MixedLights2(100,15,0, 150,20,0, 200,25,0, 250,30,0, 50,10,0);
    delay(wait);

  }

  for(int i = 0; i <= repeat; i++) {

    MixedLights2(50,22,0, 100,44,0, 150,66,0, 200,88,0, 250,110,0);
    delay(wait);
    MixedLights2(250,110,0, 50,22,0, 100,44,0, 150,66,0, 200,88,0);
    delay(wait);
    MixedLights2(200,88,0, 250,110,0, 50,22,0, 100,44,0, 150,66,0);
    delay(wait);
    MixedLights2(150,66,0, 200,88,0, 250,110,0, 50,22,0, 100,44,0);
    delay(wait);
    MixedLights2(100,44,0, 150,66,0, 200,88,0, 250,110,0, 50,22,0);
    delay(wait);

  }
}

void MixedLights2(int red1, int green1, int blue1, int red2, int green2, int blue2, int red3, int green3, int blue3, int red4, int green4, int blue4, int red5, int green5, int blue5) {

  for (int place = 0; place <= NUM_LEDS; place = place+5) {

    leds[place] = CRGB(green1, red1, blue1);
    leds[place+1] = CRGB(green2, red2, blue2);
    leds[place+2] = CRGB(green3, red3, blue3);
    leds[place+3] = CRGB(green4, red4, blue4);
    leds[place+4] = CRGB(green5, red5, blue5);

  }
  FastLED.show();
}

void MixedLights1(int red1, int green1, int blue1, int red2, int green2, int blue2, int red3, int green3, int blue3) {

  for (int place = 0; place <= NUM_LEDS; place = place+3) {

    leds[place] = CRGB(green1, red1, blue1);
    leds[place+1] = CRGB(green2, red2, blue2);
    leds[place+2] = CRGB(green3, red3, blue3);

  }
  FastLED.show();
}

void HomecomingFade() {

  int red = 255;
  int green = 0;
  int blue = 0;

  int pulse = 10;
  int wait = 1000;

  SetColor(255, 0, 0);
  delay(wait);

  for (int i = 0; i < 30; i++) {

    green++;
    SetColor(red, green, blue);
    delay(pulse);

  }

  SetColor(255, 30, 0);
  delay(wait);

  
  red = 255;
  green = 30;
  blue = 0;

  for (int i = 0; i < 80; i++) {

    green++;
    SetColor(red, green, blue);
    delay(pulse);

  }

  SetColor(255, 110, 0);
  delay(wait);

  red = 255;
  green = 110;
  blue = 0;

  for (int i = 0; i < 110; i++) {

    green--;
    SetColor(red, green, blue);
    delay(pulse);

  }

  SetColor(255, 0, 0);
  delay(wait);
  
}


void SetThreeColors(int topRed, int topGreen, int topBlue, int midRed, int midGreen, int midBlue, int bottomRed, int bottomGreen, int bottomBlue) {

  int sectionDivider = NUM_LEDS / 3;

  //bottom
  for(int place = 0; place <= sectionDivider; place++) {

    leds[place] = CRGB(bottomGreen, bottomRed, bottomBlue);
    
  }
  FastLED.show();

  //middle
  for(int place = sectionDivider; place <= sectionDivider * 2; place++) {

    leds[place] = CRGB(midGreen, midRed, midBlue);
    
  }
  FastLED.show();

  //top
  for(int place = sectionDivider * 2; place <= (sectionDivider * 3); place++) {

    leds[place] = CRGB(topGreen, topRed, topBlue);
    
  }
  FastLED.show();
}


void SetColor(int red, int green, int blue) {

  //fill
  for(int place = 0; place <= NUM_LEDS; place++) {

    leds[place] = CRGB(green, red, blue);
    
  }
  FastLED.show();
}

void ColorSwitch(int initialRed, int initialGreen, int initialBlue, int newRed, int newGreen, int newBlue) {

  //fill
  for(int place = 0; place <= NUM_LEDS; place++) {

    leds[place] = CRGB(initialGreen, initialRed, initialBlue);
    
  }
  FastLED.show();

  //newColor
  for(int place = 0; place <= NUM_LEDS; place++) {

    leds[place] = CRGB(newGreen, newRed, newBlue);
    
  }
  FastLED.show();

}

void ColorClimbUp(int pulse, int red, int green, int blue) {


  for(int place = 0; place <= NUM_LEDS; place++) {

    leds[place] = CRGB(green, red, blue);
    FastLED.show();
    delay(pulse);
  }

}

void ColorClimbDown(int pulse, int red, int green, int blue) {

  for(int place = NUM_LEDS; place >= 0; place--) {

    leds[place] = CRGB(green, red, blue);
    FastLED.show();
    delay(pulse);
  }
}

void SparkleColorChange(int pulse, int red, int green, int blue) {

  //sparkle
  for (int i = 0; i <= NUM_LEDS + 1; i++) {
    lights[i] = i;

  }

  size_t n = sizeof(lights) / sizeof(lights[0]);

  for (size_t i = 0; i < n - 1; i++) {
    size_t j = random(0, n - i);
    int t = lights[i];
    lights[i] = lights[j];
    lights[j] = t;
  }

  
  for(int i = 0; i <= NUM_LEDS-1; i++) {

    int place = lights[i];
    Serial.println(place);
    leds[0] = CRGB(0,0,0);
    leds[place] = CRGB(green, red, blue);
    delay(pulse);
    FastLED.show();

  }
  
}

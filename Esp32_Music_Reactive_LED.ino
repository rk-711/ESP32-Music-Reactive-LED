#include <Adafruit_NeoPixel.h>

#define LED_PIN 5       // WS2812B data pin connected to ESP32 GPIO 5
#define NUM_LEDS 30     // Number of LEDs in your strip
#define MIC_PIN 34      // MAX9814 output connected to ESP32 ADC pin

Adafruit_NeoPixel strip(NUM_LEDS, LED_PIN, NEO_GRB + NEO_KHZ800);

void setup() {
  Serial.begin(115200);
  strip.begin();
  strip.show(); // Initialize all LEDs to 'off'
}

void loop() {
  int micValue = analogRead(MIC_PIN);       // Read mic value
  int brightness = map(micValue, 0, 4095, 0, 255); // Map to brightness
  brightness = constrain(brightness, 0, 255);

  // Set all LEDs to a color based on volume
  uint32_t color = strip.Color(brightness, 0, 255 - brightness);
  for (int i = 0; i < NUM_LEDS; i++) {
    strip.setPixelColor(i, color);
  }
  strip.show();

  delay(10); // Small delay for stability
}

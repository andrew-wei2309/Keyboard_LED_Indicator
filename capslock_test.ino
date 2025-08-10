// Leonardo: Light LED on pin 7 when Caps Lock is ON
// Requires HID-Project library (NicoHood)

#include <HID-Project.h>
#include <HID-Settings.h>

const int ledPin = 7;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  BootKeyboard.begin(); // Enumerates as a boot-compliant keyboard
}

void loop() {
  // BootKeyboard.getLeds() bit map:
  // bit 0 = Num Lock, bit 1 = Caps Lock, bit 2 = Scroll Lock
  uint8_t ledMask = BootKeyboard.getLeds();
  bool capsOn = (ledMask & 0x02) != 0;

  digitalWrite(ledPin, capsOn ? HIGH : LOW);

  delay(50);
}

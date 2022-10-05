
#define DEBUG   // habilitar debugging
#include "debugUtils.h"

// pines relays
const uint8_t rel1 = 15;  // D8
const uint8_t rel2 = 13;  // D7
const uint8_t rel3 = 12;  // D6
const uint8_t rel4 = 14;  // D5

// arreglo de relés
const uint8_t relayCount = 4;
const uint8_t relays[relayCount] = {rel1, rel2, rel3, rel4};
const byte softDelay = 140;

void setup() {
  // configuración
  for (uint8_t i = 0; i < relayCount; i++)
    pinMode(relays[i], OUTPUT);

  Serial.begin(115200);

}

void loop()
{
  delay(2000);
  
  // activar relés
  controlRelays(true);
  DEBUG_PRINT("Relays activados");

  delay(2000);

  // desactivar relés
  controlRelays(false);
  DEBUG_PRINT("Relays desactivados");
}

void controlRelays(bool enable)
{
  for (byte i = 0; i < relayCount; i++)
  {
    digitalWrite(relays[i], enable ? HIGH : LOW); // Si es low level trigger invertir
    delay(softDelay);
  }
}
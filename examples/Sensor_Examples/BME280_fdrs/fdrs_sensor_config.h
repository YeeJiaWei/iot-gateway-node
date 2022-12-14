#include <fdrs_globals.h>

#define READING_ID    1   //Unique ID for this sensor
#define GTWY_MAC      0x01 //Address of the nearest gateway

#define USE_ESPNOW
// #define USE_LORA
#define DEEP_SLEEP
#define FDRS_DEBUG
// #define POWER_CTRL    14

//SPI Configuration -- Needed only on chipsets with multiple SPI interfaces (ESP32)
#define SPI_SCK 5
#define SPI_MISO 19
#define SPI_MOSI 27

//LoRa Configuration
#define LORA_SS 18
#define LORA_RST 14
#define LORA_DIO0 26

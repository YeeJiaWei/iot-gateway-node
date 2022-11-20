#include <fdrs_globals.h>

#define FDRS_DEBUG     //Enable USB-Serial debugging
#define DEBUG_CONFIG // Displays full config info on startup

#define UNIT_MAC     0x00  // The address of this gateway

// Actions -- Define what happens when a packet arrives at each interface:
// Current function options are: 
// sendESPNOW(MAC), sendSerial(), sendMQTT(),
// bufferLoRa(interface), bufferESPNOW(interface), bufferSerial(), and bufferMQTT().
#define ESPNOWG_ACT    
#define SERIAL_ACT     sendMQTT();    
#define MQTT_ACT       sendSerial();   
#define LORAG_ACT      
// Neighbor Actions
#define ESPNOW1_ACT    
#define ESPNOW2_ACT                    
#define LORA1_ACT 
#define LORA2_ACT 

// Protocols -- Define which protocols the gateway will use.
// Warning: ESP-NOW and WiFi should not be used simultaneously.

//#define USE_ESPNOW  
//#define USE_LORA
#define USE_WIFI    // for MQTT gateway

// Neighbor addresses
// #define ESPNOW_NEIGHBOR_1 0x0E  // ESPNOW1 Address 
// #define ESPNOW_NEIGHBOR_2 0x0F  // ESPNOW2 Address
// #define LORA_NEIGHBOR_1   0x0E  // LoRa1 Address
// #define LORA_NEIGHBOR_2   0x0F  // LoRa2 Address

//Pins for UART data interface (ESP32 only)
// #define RXD2 14
// #define TXD2 15

//Logging settings  --  Logging will occur when MQTT is disconnected
//#define USE_SD_LOG        //Enable SD-card logging
//#define USE_FS_LOG        //Enable filesystem (flash) logging
// #define LOGBUF_DELAY 10000  // Log Buffer Delay - in milliseconds
// #define SD_SS 0             //SD card CS pin (Use different pins for LoRa and SD)
// #define SD_FILENAME "fdrs_log.csv"
// #define FS_FILENAME "fdrs_log.csv"

// SPI Configuration -- Needed only on Boards with multiple SPI interfaces like the ESP32
// #define SPI_SCK 5
// #define SPI_MISO 19
// #define SPI_MOSI 27

// LoRa Configuration -- Needed only if using LoRa
// #define LORA_SS 18
// #define LORA_RST 14
// #define LORA_DIO0 26

#define PEER_TIMEOUT 300000

// FastLED -- Not yet fully implemented
//#define USE_LED
// #define LED_PIN    32
// #define NUM_LEDS    4

// MQTT Topics
#define TOPIC_DATA "home-gateway/data"
#define TOPIC_STATUS "fdrs/status"
#define TOPIC_COMMAND "fdrs/command" 
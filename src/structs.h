enum {
    event_clear,
    event_espnowg,
    event_espnow1,
    event_espnow2,
    event_serial,
    event_mqtt,
    event_lorag,
    event_lora1,
    event_lora2
};

enum crcResult {
    CRC_NULL,
    CRC_OK,
    CRC_BAD,
} returnCRC = CRC_NULL;

enum { cmd_clear, cmd_ping, cmd_add, cmd_ack };

typedef struct FDRSPeer {
    uint8_t mac[6];
    uint32_t last_seen = 0;

} FDRSPeer;
typedef struct __attribute__((packed)) DataReading {
    // uint16_t id;
    char id;
    uint8_t t;
    float d;
} DataReading;

typedef struct __attribute__((packed)) SystemPacket {
    uint8_t cmd;
    uint32_t param;
} SystemPacket;

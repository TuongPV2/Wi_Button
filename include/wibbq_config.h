#ifndef __WIBBQ_CONFIG_H__
#define __WIBBQ_CONFIG_H__

///////////////////// GENERAL ZONE ///////////////////////////////////
// If you want, you can define WiFi settings globally in Eclipse Environment Variables
#ifndef WIFI_SSID
   #define WIFI_SSID "PleaseEnterSSID" // Put you SSID and Password here
   #define WIFI_PWD "PleaseEnterPass"
#endif

// Debug level
#define PRINT_LEVEL VERBOSE_INFO

// Version of WiBBQ ESP firmware
#define WIBBQ_VERSION_MAJOR 0
#define WIBBQ_VERSION_MINOR 1
#define WIBBQ_VERSION_STRING "WiBBQ v0.1"

// Maximum number of observers
#define WIBBQ_MAX_OBSERVERS 10


///////////////////// OTA ZONE ///////////////////////////////////////
#define WIBBQ_OTA_IP "192.168.1.198"
// #define WIBBQ_OTA_IP "192.168.43.221"
#define WIBBQ_OTA_PORT "80"
// #define WIBBQ_OTA_IP "52.196.161.74"
// #define WIBBQ_OTA_PORT "8000"
#define WIBBQ_OTA_SPIFF_ENABLE 0
#define WIBBQ_OTA_BUTTON_ENABLE 1 // Enable OTA button. Whenever you want to update new firmware, just short the OTA PIN to GND.
#define WIBBQ_OTA_BUTTON_PIN 0    // Use flash button as OTA button

///////////////////// STORAGE ZONE //////////////////////////////////
#define WIBBQ_STORAGE_DEFAULT_ADDR 0x5C000
#define WIBBQ_STORAGE_DEFAULT_SIZE 0x10000
#define WIBBQ_STORAGE_BACKUP_ADDR  0x6C000
#define WIBBQ_STORAGE_BACKUP_SIZE  0x10000
#define WIBBQ_STORAGE_CONFIG_ADDR  0xDC000
#define WIBBQ_STORAGE_CONFIG_SIZE  0x10000
#define WIBBQ_STORAGE_DATA_ADDR    0xEC000
#define WIBBQ_STORAGE_DATA_SIZE    0x10000

///////////////////// WIFI ZONE /////////////////////////////////////
#define WIBBQ_WIFI_STATUS_BLINK_MS 500
#define WIBBQ_WIFI_HEADTRAIL_ENABLE 1
#define WIBBQ_WIFI_HEAD_CHAR '\x01'
#define WIBBQ_WIFI_TAIL_CHAR '\x04'
#define WIBBQ_WIFI_CLIENT_CONNECT_TIMEOUT_S 300 // 5mins
#define WIBBQ_WIFI_IDLE_TIME 5
#define WIBBQ_WIFI_SLEEP_AFTER_S 5
#define WIBBQ_WIFI_MAX_ALARM 10
#define WIBBQ_WIFI_DEF_SSID "BBQ"
#define WIBBQ_WIFI_DEF_PASS "11111111"
#define WIBBQ_WIFI_DEF_SERVER "192.168.43.221"
#define WIBBQ_WIFI_DEF_PORT 8080



#endif /* __WIBBQ_CONFIG_H__ */

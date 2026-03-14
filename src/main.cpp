#include <Arduino.h>
// #include <WiFi.h>

#include "config.h"
// #include "csip_client.h"

// CSIPClient csip;

unsigned long lastHeartbeat = 0;

// void connectWiFi()
// {
//     WiFi.begin(WIFI_SSID, WIFI_PASSWORD);

//     Serial.print("Connecting");

//     while (WiFi.status() != WL_CONNECTED)
//     {
//         delay(500);
//         Serial.print(".");
//     }

//     Serial.println();
//     Serial.println("WiFi connected");
// }

void setup()
{
    Serial.begin(115200);

    Serial.printf("setup\n");
    //    connectWiFi();

    // csip.begin();
    // csip.registerCER();
}

void loop()
{
    if (millis() - lastHeartbeat > HEARTBEAT_INTERVAL) {
        Serial.printf("*** heartbeat\n");
        // csip.heartbeat();
        // csip.getDispatch();

        lastHeartbeat = millis();
    }
}

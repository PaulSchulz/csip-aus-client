#include "csip_client.h"
#include <HTTPClient.h>
#include <ArduinoJson.h>

static const char* server = "api.csip.example.com";

bool CSIPClient::begin()
{
    client.setInsecure();  // use certificate in production
    return true;
}

bool CSIPClient::registerCER()
{
    HTTPClient https;

    https.begin(client, "https://api.csip.example.com/cer/register");
    https.addHeader("Content-Type", "application/json");

    StaticJsonDocument<256> doc;

    doc["deviceId"] = "ESP32-001";
    doc["type"] = "load";

    String body;
    serializeJson(doc, body);

    int code = https.POST(body);

    https.end();

    return (code == 200);
}

bool CSIPClient::getDispatch()
{
    HTTPClient https;

    https.begin(client, "https://api.csip.example.com/dispatch");

    int code = https.GET();

    if(code != 200)
        return false;

    String payload = https.getString();

    StaticJsonDocument<512> doc;
    deserializeJson(doc, payload);

    int limit = doc["limitW"];

    applyPowerLimit(limit);

    https.end();

    return true;
}

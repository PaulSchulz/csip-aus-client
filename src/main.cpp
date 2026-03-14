CSIPClient csip;

void setup()
{
    WiFi.begin("ssid","password");

    while(WiFi.status() != WL_CONNECTED)
        delay(1000);

    csip.begin();
    csip.registerCER();
}

void loop()
{
    csip.heartbeat();
    csip.getDispatch();

    delay(30000);
}
#+en_d

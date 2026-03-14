// [[file:../doc/project-plan.org::*Basic CSIP Client Skeleton][Basic CSIP Client Skeleton:1]]
#pragma once
#include <WiFiClientSecure.h>

class CSIPClient {

public:

  bool begin();
  bool registerCER();
  bool heartbeat();
  bool getDispatch();

private:

  WiFiClientSecure client;

};
// Basic CSIP Client Skeleton:1 ends here

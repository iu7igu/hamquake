
#include "update.h"

#ifndef DONT_UPDATE

#ifdef IS_ESP
// https://esp8266.github.io/Arduino/versions/2.0.0/doc/ota_updates/ota_updates.html
bool update(char *host, char *path) {
  // Checksum should be into "x-MD5" HTTP header
  Debug("Requesting update from ");
  Debug(host);
  Debug(" path: ");
  Debugln(path);
  HTTPUpdateResult r = ESPhttpUpdate.update(host, 80, path);
  return r == HTTPUpdateResult::HTTP_UPDATE_OK;
}
#endif

#endif

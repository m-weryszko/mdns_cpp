#pragma once

#include <cstdint>
#include <string>

namespace mdns_cpp {

class ServiceRecord {
 public:
  const char *service;
  const char *hostname;
  uint32_t address_ipv4;
  uint8_t *address_ipv6;
  uint16_t port;
};

class ServiceDiscovery {
 public:
  std::string address;
  std::string type;
  std::string service;
  std::string hostname;
  std::string rawinfo;
};

}  // namespace mdns_cpp

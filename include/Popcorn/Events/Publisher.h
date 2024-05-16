#pragma once

#include "Subscriber.h"
#include <string>
#include <vector>

class Publisher {
public:
  virtual ~Publisher() = 0;
  void PublishEvent(const std::string &e);
  void Subscribe(const Subscriber *s);
  void Unsubscribe(const Subscriber *s);

private:
  std::vector<const Subscriber *> m_subscribers;
};

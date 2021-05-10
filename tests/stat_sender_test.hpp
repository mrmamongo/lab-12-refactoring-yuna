//
// Created by lamp on 5/9/21.
//
#pragma once

#include <gmock/gmock.h>
#include <stat_sender.hpp>

class mock_stat_sender : public stat_sender {
 public:
  MOCK_METHOD(void, async_send, ((const std::vector<item>&), std::string_view), (override));
};

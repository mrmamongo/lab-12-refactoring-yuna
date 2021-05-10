//
// Created by lamp on 5/9/21.
//
#pragma once

#include <gmock/gmock.h>
#include <stat_sender.hpp>

class mock_stat_sender : public stat_sender {
  //  virtual void async_send(const std::vector<item>&,
  //                          std::string_view);
 public:
  MOCK_METHOD2(async_send, void(const std::vector<item>&, std::string_view));
};

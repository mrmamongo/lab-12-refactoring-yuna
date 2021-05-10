// Copyright 2020 mrmamongo
//
// Created by lamp on 5/9/21.
//

#include <log.hpp>

void log_t::write(std::string_view message) const {
  *_output << message << '\n';
}

void log_t::write_debug(std::string_view message) const {
  if (!_level) *_output << message << '\n';
}
log_t* log_t::get_instance() {
  static log_t instance{};
  return &instance;
}

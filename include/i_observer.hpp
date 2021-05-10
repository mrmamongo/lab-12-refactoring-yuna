//
// Created by lamp on 5/9/21.
//

#ifndef SCORE_HANDLER_I_OBSERVER_HPP
#define SCORE_HANDLER_I_OBSERVER_HPP

#include <common.hpp>

class i_observer {
 public:
  i_observer() = default;
  virtual ~i_observer() = default;
  virtual void on_data_load(const std::vector<item>&, const std::vector<item>&) = 0;
  virtual void on_raw_data_load(const std::vector<std::string>&, const std::vector<std::string>&) = 0;
  virtual void on_skipped(const item&) = 0;
};
#endif  // SCORE_HANDLER_I_OBSERVER_HPP

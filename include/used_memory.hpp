//
// Created by lamp on 5/9/21.
//

#ifndef SCORE_HANDLER_USEDMEMORY_HPP
#define SCORE_HANDLER_USEDMEMORY_HPP

#include <common.hpp>
#include <log.hpp>
#include <i_observer.hpp>

class used_memory : public i_observer{
 public:
  used_memory() = default;
  virtual ~used_memory() = default;

  void on_data_load(const std::vector<item>&, const std::vector<item>&) override;
  void on_raw_data_load(const std::vector<std::string>&,
                        const std::vector<std::string>&) override;
  void on_skipped(const item&) override {}

 public:
  [[nodiscard]] size_t used() const { return _used; }
  void clear() { _used = 0; }

 private:
  size_t _used = 0;
};
#endif  // SCORE_HANDLER_USEDMEMORY_HPP

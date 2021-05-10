//
// Created by lamp on 5/9/21.
//

#ifndef SCORE_HANDLER_HISTOGRAM_HPP
#define SCORE_HANDLER_HISTOGRAM_HPP

#include <common.hpp>
#include <log.hpp>
#include <i_observer.hpp>

class histogram : public i_observer {
 public:
  histogram() = default;

  void on_data_load(const std::vector<item> &,
                    const std::vector<item> &) override;
  void on_skipped(const item &) override { _thrown++; }
  void on_raw_data_load(const std::vector<std::string> &,
                        const std::vector<std::string> &) override {}

  [[nodiscard]] float average() const { return _average; }
  [[nodiscard]] size_t thrown() const { return _thrown; }

 private:
  float _average = 0;
  size_t _thrown = 0;
};

#endif  // SCORE_HANDLER_HISTOGRAM_HPP

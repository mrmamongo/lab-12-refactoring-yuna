//
// Created by lamp on 5/9/21.
//
#include <histogram.hpp>

void histogram::on_data_load(const std::vector<item> &,
                             const std::vector<item> & new_items) {
  for (const auto& new_item : new_items) {
    _average += (float)new_item.score;
  }
  _average /= (float)new_items.size();

  log_t::get_instance()->write("Average: " + std::to_string(_average) +
                               " Thrown: " + std::to_string(_thrown));
  _thrown = 0;
}
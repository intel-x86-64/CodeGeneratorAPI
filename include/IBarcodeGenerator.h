#pragma once
#include <string>

class IBarcodeGenerator {
private:
public:
  virtual std::string generate(const std::string &text);
};
#pragma once

#include "DataMatrixGenerator.h"
#include "IBarcodeGenerator.h"
#include "QrGenerator.h"
#include <memory>
#include <string>
class BarcodeFactory {
public:
  static std::unique_ptr<IBarcodeGenerator> create(const std::string type);
};

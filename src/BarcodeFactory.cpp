#include "../include/BarcodeFactory.h"
#include <memory>
#include <string>

std::unique_ptr<IBarcodeGenerator>
BarcodeFactory::create(const std::string type) {
  if (type == "Qr") {
    return std::make_unique<QrGenerator>();
  } else if (type == "DataMatrix") {
    return std::make_unique<DataMatrixGenerator>();
  }

  return std::make_unique<QrGenerator>();
}
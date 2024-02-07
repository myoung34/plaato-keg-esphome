#include "Adafruit_PCT2075.h"

TwoWire I2CPCT = TwoWire(0);
Adafruit_PCT2075 PCT2075;

class KegSensor : public PollingComponent, public Sensor {
 public:
  KegSensor() : PollingComponent(15000) {}
  float get_setup_priority() const override { return esphome::setup_priority::BUS; }
  Sensor *kegTemp = new Sensor();

  void setup() override {
    I2CPCT.begin(19, 18, 100000);
    Serial.begin(115200);
    PCT2075 = Adafruit_PCT2075();
    PCT2075.begin(0x49, &I2CPCT);
  }
  void update() override {
     kegTemp->publish_state(PCT2075.getTemperature());
  }
};

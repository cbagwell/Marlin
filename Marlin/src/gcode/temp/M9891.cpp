#include "../../inc/MarlinConfig.h"

#include "../gcode.h"

void GcodeSuite::M9891() {
  const uint16_t dfreq = parser.ushortval('F');

  // Set frequency for FAN0 (part cooler on ender 3 v422)
  hal.set_pwm_frequency(pin_t(FAN0_PIN), dfreq);
}

/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */

#include <stdbool.h>
#include "common/cs_dbg.h"
#include "mgos_pwm.h"

bool mgos_pwm_set(int pin, int freq, float duty) {
  LOG(LL_ERROR, ("PWM is not implemented"));
  return false;
}

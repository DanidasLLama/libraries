/*
AUTHOR:       Tobias Hofmänner
DATE:         29.09.2023
USAGE:        TODO
DESCRIPTION:  TODO
TODO:       
RECOURCES:  TODO  
*/

#ifndef LSCOS_H
#define LSCOS_H

#include <Arduino.h>
#include "LscComponents.h"
#include "LscPersistence.h"
#include "LscHardwareAbstraction.h"
#include "LscError.h"
#include <SD.h>


namespace OS{
  bool getBootUpState();
  void init(String Version);
  void startWatchdog();
  void stopWatchdog();
  uint32_t getCycleCount();
  uint32_t getNextOsCall_ms();
  bool saveToRead();
  static volatile bool powerFailureImminent = false;

}




#endif
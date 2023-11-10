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
#include "LscHardwareAbstraction.h"
#include "LscError.h"
#include <SD.h>
#include <Flash.h>


namespace OS{
  bool getBootUpState();
  void init();
  void startWatchdog();
  void stopWatchdog();
  uint32_t getCycleCount();
  uint32_t getNextOsCall_ms();
  bool saveToRead();
  
}


#endif
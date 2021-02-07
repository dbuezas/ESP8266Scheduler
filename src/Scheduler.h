#ifndef SCHEDULER_H
#define SCHEDULER_H

#include "Task.h"

extern "C" void loop();
extern void task_tramponline();

class SchedulerClass {
 public:
  SchedulerClass();
  static void start(ITask *task);
  static void begin();
  static void delay(uint32_t);
  static void yield();

 private:
  friend void task_tramponline();
  static ITask *last;
  static ITask *current;
};
extern SchedulerClass Scheduler;
#endif

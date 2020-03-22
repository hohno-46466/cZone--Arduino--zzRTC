#ifndef __ZZRTC_H__
#define __ZZRTC_H__

// zzRTC.h

// ---------------------------------------------------------

// First version: Thu Mar 19 19:14:32 JST 2020 by @hohno_at_kuimc
// Last update: Sat Mar 21 20:12:38 JST 2020

// ---------------------------------------------------------

#include <Arduino.h>

#define BOGUS_BOGUS_ZZRTC

// ---------------------------------------------------------

// DEBUGLEVEL_ZZRTC を強制設定せず DEBUGLEVEL を参照する場合はコメントアウト
// #define DEBUGLEVEL_ZZRTC  (0)
#define DEBUGLEVEL_ZZRTC   (1)

#ifndef DEBUGLEVEL_ZZRTC
#define DEBUGLEVEL_ZZRTC   (0)
#ifdef DEBUG
// DEBUGLEVEL を参照しつつ DEBUGLEVEL_ZZRTC をどう設定するかは以下で決定
#if DEBUGLEVEL > 1
#define DEBUGLEVEL_ZZRTC   (DEBUGLEVEL)
#endif // DEBUGLEVEL > 2
//
#endif // DEBUG
#endif // DEBUGLEVEL_ZZRTC

// ---------------------------------------------------------
// ---------------------------------------------------------

class zzRTC {
 public:
  zzRTC();
  //
  void begin();
  //
  uint8_t isrunning(void);
  boolean startClock();
  boolean stopClock();
  //
  void setTime(void);
  void getTime(void);
  //
#ifdef BOGUS_BOGUS_ZZRTC
  boolean fillByHMS(uint8_t, uint8_t, uint8_t);
  boolean fillByY2kMD(uint16_t, uint8_t, uint8_t);
  boolean fillDayOfWeek(int8_t);
#endif // BOGUS_BOGUS_ZZRTC
  //
  uint8_t year;    // 0..100 (0->2000, 100->2100)
  uint8_t month;
  uint8_t day;
  uint8_t dayOfWeek;// day of week, 1 = Monday
  uint8_t hour;
  uint8_t minute;
  uint8_t second;
#ifdef BOGUS_BOGUS_ZZRTC
  uint8_t control;
  uint8_t ram0;
  uint8_t ram1;
  uint8_t ram2;
#endif // BOGUS_BOGUS_ZZRTC
  //
 private:
  uint8_t _zzYear;
  uint8_t _zzMonth;
  uint8_t _zzDay;
  uint8_t _zzDayOfWeek;
  uint8_t _zzHour;
  uint8_t _zzMinute;
  uint8_t _zzSecond;
};

// ---------------------------------------------------------

#endif // __ZZRTC_H__

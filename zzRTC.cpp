//
// zzRTC.cpp
//

// zzRTC for the replacement of DS1307

// ---------------------------------------------------------

// First version: Thu Mar 19 19:14:32 JST 2020 by @hohno_at_kuimc
// Last update: Sat Mar 21 20:12:38 JST 2020

// ---------------------------------------------------------

#include <Arduino.h>
#include "zzRTC.h"

// =========================================================

// zzRTC::zzRTC()
// 機能：コンストラクタ．

zzRTC::zzRTC() {

  // XXX20200320 // 未実装

}

// =========================================================

// void zzRTC::begin()
// 機能：zzRTC まわりの諸設定を行う

void zzRTC::begin() {

  // XXX20200320 // 未実装

}

// ---------------------------------------------------------

// uint8_t zzRTC::isrunning()
// 機能：zzRTC の動作を調べる

uint8_t zzRTC::isrunning() {

  // XXX20200320 // 未実装

  return(0);
}

// ---------------------------------------------------------

// boolean zzRTC::startClock()
// 機能：zzRTC の動作を開始する

boolean zzRTC::startClock() {

  // XXX20200320 // さしあたり，常に true を返すという実装で済ませることにする

  return(true);
}

// ---------------------------------------------------------


// boolean zzRTC::stopClock()
// 機能：zzRTC の動作を停止する

boolean zzRTC::stopClock() {

  // XXX20200320 // さしあたり，常に false を返すという実装で済ませることにする

  return(false);
}

// ---------------------------------------------------------

// void zzRTC::setTime()
// 機能：zzRTC に時刻を設定する

void zzRTC::setTime() {

  // XXX20200320 // 未実装

  _zzYear      = year;
  _zzMonth     = month;
  _zzDay       = day;
  _zzDayOfWeek = dayOfWeek;
  _zzHour      = hour;
  _zzMinute    = minute;
  _zzSecond    = second;
}

// ---------------------------------------------------------

// void zzRTC::getTime()
// 機能：zzRTC から時刻を取得する

void zzRTC::getTime() {

  // XXX20200320 // 未実装


  year      = _zzYear;
  month     = _zzMonth;
  day       = _zzDay;
  dayOfWeek = _zzDayOfWeek;
  hour      = _zzHour;
  minute    = _zzMinute;
  second    = _zzSecond;
}

// ---------------------------------------------------------

// ---------------------------------------------------------
#ifdef BOGUS_BOGUS_zzRTC
// ---------------------------------------------------------

// boolean zzRTC:fillByHMS:()
// 機能：zzRTC に時分秒を設定する

boolean zzRTC::fillByHMS(uint8_t HH, uint8_t MM, uint8_t SS) {

  // XXX20200320 // 未実装

    return(true);
}

// ---------------------------------------------------------

// boolean zzRTC::fillByY2kMD()
// 機能：zzRTC に年月日を設定する

boolean zzRTC::fillByY2kMD(uint16_t yy, uint8_t mm, uint8_t dd) {

  // XXX20200320 // 未実装

  return(true);
}

// ---------------------------------------------------------

// boolean zzRTC::fillDayOfWeek()
// 機能：zzRTC に曜日を設定する

boolean zzRTC::fillDayOfWeek(int8_t wd) {

  if ((wd < -1) || (wd > 7)) { return(false); }

  dayOfWeek = wd;

  _zzDayOfWeek = wd;

  return(true);
}

// ---------------------------------------------------------
#endif // BOGUS_BOGUS_zzRTC
// ---------------------------------------------------------

// ---------------------------------------------------------

/*
// void zzRTC::()
// 機能：

void zzRTC::() {
}
*/

// ---------------------------------------------------------

//

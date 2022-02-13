//
// zzRTC.cpp
//

// zzRTC for the replacement of DS1307

// ---------------------------------------------------------

// First version: Thu Mar 19 19:14:32 JST 2020 by @hohno_at_kuimc
// Last update: Sat Mar 21 20:12:38 JST 2020

// ---------------------------------------------------------

#include <Arduino.h>
#include "myRTC.h"
#include "zzRTC.h"

static int g_RTCtype = RTC_TYPE_DUMMY;
static boolean g_RTCstat = false;

// =========================================================

// zzRTC::zzRTC()
// 機能：コンストラクタ．

zzRTC::zzRTC() {

  // XXX20200320 // 未実装 // Not installed yet.

}

// =========================================================

// void zzRTC::begin()
// 機能：zzRTC まわりの諸設定を行う

void zzRTC::begin() {

  // RTC の初期化
  g_RTCtype = RTC_TYPE_DUMMY;
  Serial.println(F("Debug: myRTC::RTCinit()"));
  myRTC::RTCinit(g_RTCtype);

  // myRTC::RTCsetup0() - 時刻設定なし
  // myRTC::RTCsetup1() - 引数で時刻設定
  // myRTC::RTCsetup2() - __DATE__, __TIME__ から時刻を設定
  //
  // Note: myRTC::settimeofday() is executed in the any of RTCsetup*()
  //
  int ret;
  if ((ret = myRTC::RTCsetup2()) != 0) {
    // RTC の設定に失敗した場合
    Serial.print(F("Debug: myRTC::RTCsetup2() returned: "));
    Serial.println(ret);
    g_RTCstat = false;
  } else {
    g_RTCstat = true;
  }

}

// ---------------------------------------------------------

// uint8_t zzRTC::isrunning()
// 機能：zzRTC の動作を調べる

uint8_t zzRTC::isrunning() {

  return(g_RTCstat);
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

  // XXX20200320 // 未実装 // Not installed yet.

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

  struct timeval tv = { 0, 0 };
  uint32_t now_sec = 0;

  // 年月日時分秒を取得
  myRTC::gettimeofday(&tv, NULL);

  // tv.tv_sec から _zz* を設定　  // XXX20200320 // 未実装 // Not installed yet.

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
#ifdef BOGUS_BOGUS_ZZRTC
// ---------------------------------------------------------

// boolean zzRTC:fillByHMS:()
// 機能：zzRTC に時分秒を設定する

boolean zzRTC::fillByHMS(uint8_t HH, uint8_t MM, uint8_t SS) {

  // XXX20200320 // 未実装 // Not installed yet.

    return(true);
}

// ---------------------------------------------------------

// boolean zzRTC::fillByY2kMD()
// 機能：zzRTC に年月日を設定する

boolean zzRTC::fillByY2kMD(uint16_t yy, uint8_t mm, uint8_t dd) {

  // XXX20200320 // 未実装 // Not installed yet.

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
#endif // BOGUS_BOGUS_ZZRTC
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

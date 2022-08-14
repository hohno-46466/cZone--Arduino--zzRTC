# GitHub/cZone--Arduino--zzRTC

# zzRTC.md (README.md)

    ./cZone--Arduino--zzRTC
     ├──  README-old.md
     ├──  README.md
     ├──  README.md.old
     ├──  examples/
     │   └──  zzRTC_test/
     │       └──  zzRTC_test.ino
     ├──  zzRTC-memo.txt
     ├──  zzRTC.cpp
     ├──  zzRTC.h
     └──  zzRTC.md
     
     2 directories, 8 files (Sun Aug 14 23:17:54 JST 2022)


zzRTC.md (README.md)

First version: Sun Mar 22 17:44:09 JST 2020 by @hohno_at_kuiimc

(実装中 / Not completed yet)

zzRTC is a pseudo RTC library to replace with popular RTC library such as DS1307

zzRTC は、DS1307 のようなよく使われている RTC ライブラリに依存しているスケッチから 当該 RTC への依存を排除するために用意した。
（以下は DS1307 を前提としている）

スケッチ中で特定の RTC のインスタンスを作る以下のようなコードを zzRTC に置き換えるだけで、他の箇所を変更することなく任意の他の RTC やソフトウェア時計に置換できる

変更前：DS1307 rtc

変更後：zzRTC rtc

このため、zzRTC は「特定の RTC」とクラス構成を同じにする必要がある。このため、現状では（おそらくもっとも使用例が多い）DS1307 の構成に合わせてある。

zzRTC.h と zzRTC.cpp は、内部で myRTC クラスを利用している（継承しているわけではない）
一方、myRTC クラスは、当初からソフトウェア時計、DS1307、RX-8025NB などをサポートしており、他の RTC の追加も容易である。

すなわち、zzRTC は　DS1307クラスの身代わりとなって内部で myRTC クラスを呼び、myRTC クラスは zzRTC に対して様々な RTC を駆動して zzRTCを支えている。

Note: URL = https://github.com/hohno-46466/cZone--Arduino--zzRTC

Note: URL = git@github.com:hohno-46466/cZone--Arduino--zzRTC.git

-EOF-

# cZone--Arduino--zzRTC

README.md for zzRTC

( updating now ... )


zzRTC is a pseudo RTC library to replace with popular RTC library such as DS1307


zzRTC は、DS1307 のようなよく使われている RTC ライブラリに依存しているスケッチから 当該 RTC への依存を排除するために用意した。
（以下は DS1307 を前提としている）

スケッチ中で特定の RTC のインスタンスを作る以下のようなコードを zzRTC に置き換えるだけで、他の箇所を変更することなく任意の他の RTC やソフトウェア時計に置換できる

変更前：DS1307 rtc

変更後：zzRTC rtc


このため、zzRTC は特定の RTC とクラス構成を同じにする必要がある。このため、現状では（おそらくもっとも使用例が多い）DS1307 のクラス構成に合わせてある。

zzRTC.h と zzRTC.cpp は、現状では内部で myRTC クラスを利用しており、myRTC クラスはソフトウェア時計、DS1307、RX-8025NB などをサポートしており、追加も容易である。
すなわち、zzRTC は　DS1307クラスを肩代わりし、myRTC クラスは zzRTC に対して様々な RTC へのインタフェースを提供している。






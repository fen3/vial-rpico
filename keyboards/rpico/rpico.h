#pragma once

#include "quantum.h"
#define XXX KC_NO
// 上面括号里的，是对应keymap.c里的，
// {} 里的对应行列的按键，对于列里面空的用KC_NO来配置这里上面定义为XXX了。
#define LAYOUT_rpico( \
    k01, k06, k11, k16, k21, k26, k31, k36, k41, k46, k51, k56, k61, k66, k71, \
    k02, k07, k12, k17, k22, k27, k32, k37, k42, k47, k52, k57, k62, k67, k72, \
    k03, k08, k13, k18, k23, k28, k33, k38, k43, k48, k53, k58,      k68, k73, \
    k04, k09, k14, k19, k24, k29, k34, k39, k44, k49, k54,      k64, k69, k74, \
    k05, k10, k15,           k30,                k50, k55, k60, k65, k70, k75 \
) { \
    { k01, k06, k11, k16, k21, k26, k31, k36, k41, k46, k51, k56, k61, k66, k71 }, \
    { k02, k07, k12, k17, k22, k27, k32, k37, k42, k47, k52, k57, k62, k67, k72 }, \
    { k03, k08, k13, k18, k23, k28, k33, k38, k43, k48, k53, k58, XXX, k68, k73 }, \
    { k04, k09, k14, k19, k24, k29, k34, k39, k44, k49, k54, XXX, k64, k69, k74 }, \
    { k05, k10, k15, XXX, XXX, k30, XXX, XXX, XXX, k50, k55, k60, k65, k70, k75 } \
}

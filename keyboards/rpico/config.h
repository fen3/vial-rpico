#pragma once
#include "config_common.h"

#define DEBOUNCE 5 //去按键抖动
#define DIODE_DIRECTION ROW2COL //二极管方向的 大部分是 COL2ROW
#define MATRIX_ROWS 5 // 行数
#define MATRIX_COLS 15 //列数
// 行的引脚
#define MATRIX_ROW_PINS { GP16, GP17, GP18, GP19, GP20 }
// 列的引脚
#define MATRIX_COL_PINS { GP14, GP13, GP12, GP11, GP10, GP9, GP8, GP7, GP6, GP5, GP4, GP3, GP2, GP1, GP0}

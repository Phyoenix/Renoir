//
// Created by shtang on 2025/6/10.
//
#include "RenoirLog.h"

namespace Renoir {
    void Elog::log(const char *tag, const char *message) {
        printf("[%s] %s\n", tag, message);
    }
}
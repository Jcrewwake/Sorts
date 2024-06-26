/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or
 * implied, including but not limited to the warranties of merchantability,
 * fitness for a particular purpose and noninfringement. In no event shall the
 * authors or copyright holders be liable for any claim, damages or other
 * liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the
 * software.
 */

#include "BubbleSort.h"
#include <stdio.h>

void bubble_sort(SqList *list) {
    int flag = 1;  // 用于标识某次冒泡是否有交换
    for (int i = 1; i <= list->length && flag; i++) {
        flag = 0;
        for (int j = 1; j <= list->length - i; j++) {
            if (list->r[j].key > list->r[j + 1].key) {
                flag = 1;
                list->r[0] = list->r[j + 1];
                list->r[j + 1] = list->r[j];
                list->r[j] = list->r[0];
            }
        }
    }
}

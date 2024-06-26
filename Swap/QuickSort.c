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

#include "QuickSort.h"

void quick_sort(SqList *list, int low, int high) {
    if (low >= high) {
        return;
    }
    list->r[0] = list->r[low];
    int plow = low;
    int phigh = high;
    while (plow < phigh) {
        while (plow < phigh && list->r[phigh].key >= list->r[0].key) phigh--;
        list->r[plow] = list->r[phigh];
        while (plow < phigh && list->r[plow].key <= list->r[0].key) plow++;
        list->r[phigh] = list->r[plow];
    }
    list->r[plow] = list->r[0];
    quick_sort(list, low, phigh - 1);
    quick_sort(list, plow + 1, high);
}

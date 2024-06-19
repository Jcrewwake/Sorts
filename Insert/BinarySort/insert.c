/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#include "Insert/BinarySort/insert.h"

void binary_sort(SqList *list) {
    int i, j;
    for (i = 2; i <= list->length; i++) {
        list->r[0] = list->r[i];
        int low = 1, high = i - 1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (list->r[0].key < list->r[mid].key) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        for (j = i - 1; j >= high + 1; j--) {
            list->r[j + 1] = list->r[j];
        }
        list->r[j + 1] = list->r[0];
    }
}

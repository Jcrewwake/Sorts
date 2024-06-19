/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#include "Insert/InsertionSort/insert.h"

void insertion_sort(SqList *list) {
    int i, j;
    for (i = 2; i <= list->length; i++) {
        if (list->r[i].key < list->r[i - 1].key) {
            list->r[0] = list->r[i];
            for (j = i - 1; list->r[0].key < list->r[j].key; j--) {
                list->r[j + 1] = list->r[j];
            }
            list->r[j + 1] = list->r[0];
        }
    }
}

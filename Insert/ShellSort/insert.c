/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#include "Insert/ShellSort/insert.h"

void shell_insert(SqList *list, int dk) {
    for (int i = dk + 1; i <= list->length; ++i) {
        if (list->r[i].key < list->r[i - dk].key) {
            list->r[0] = list->r[i];
            int j;
            for ( j = i - dk;
                  j > 0 && (list->r[0].key < list->r[j].key);
                  j = j -dk) {
                list->r[j + dk] = list->r[j];
            }
            list->r[j + dk] = list->r[0];
        }
    }
}

void shell_sort(SqList *list, int dlta[], int t) {
    for (int k = 0; k < t; ++k) {
        shell_insert(list, dlta[k]);
    }
}

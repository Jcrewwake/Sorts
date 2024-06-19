/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#include <stdio.h>
#include "SqList/sqList.h"
#include "Insert/InsertionSort/insert.h"

int main() {
    SqList L;
    L.r[1].key = 1, L.r[1].otherinfo = 'c';
    L.r[2].key = 5, L.r[2].otherinfo = 'y';
    L.r[3].key = 3, L.r[3].otherinfo = 'u';
    L.r[4].key = 7, L.r[4].otherinfo = 'o';
    L.r[5].key = 9, L.r[5].otherinfo = 'p';
    L.r[6].key = 4, L.r[6].otherinfo = 'q';
    L.r[7].key = 2, L.r[7].otherinfo = 'x';
    L.r[8].key = 6, L.r[8].otherinfo = 'w';
    L.length = 8;
    insertion_sort(&L);
    for (int i = 1; i <= L.length; i++) {
        printf("L.r[%d].key = %d L.r[%d].otherinfo = %c\n", i, L.r[i].key, i, L.r[i].otherinfo);
    }
    return 0;
}

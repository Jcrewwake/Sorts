/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#include "SqList/sqList.h"

void init_sqlist(SqList* list) {
    list->length = 0;
}

void print_sqList(SqList *list) {
    for (int i = 1; i <= list->length; i++)
        printf("i = %d, key = %d, otherinfo = %c\n",
               i, list->r[i].key, list->r[i].otherinfo);
}

void get_sqlist(SqList* list, int locate, RedType* val) {
    if (locate < 1 || locate > list->length || list->length <= 0)
        return;
    val->key = list->r[locate].key;
    val->otherinfo = list->r[locate].otherinfo;
}

/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */
#ifndef SQLIST_SQLIST_H_
#define SQLIST_SQLIST_H_

#define MAXSIZE 20
typedef int KeyType;
typedef char InfoType;

typedef struct {
    KeyType key;
    InfoType otherinfo;
}RedType;

typedef struct {
    RedType r[MAXSIZE + 1];
    int length;
}SqList;

/*
 * Initialize SqList structure
 */
void init_sqlist(SqList* list);

/*
 * print SqList all element
 */
void print_sqList(SqList *list);

/*
 * get  sqlist index=locate val
 */
void get_sqlist(SqList* list, int locate, RedType* val);

#endif  // SQLIST_SQLIST_H_

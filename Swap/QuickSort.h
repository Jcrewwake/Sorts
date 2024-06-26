/*
 * Copyright (c) 2024 Long Yingwang
 *
 * This software is provided "as is", without warranty of any kind, express or implied,
 * including but not limited to the warranties of merchantability, fitness for a particular purpose
 * and noninfringement. In no event shall the authors or copyright holders be liable for any claim,
 * damages or other liability, whether in an action of contract, tort or otherwise, arising from,
 * out of or in connection with the software or the use or other dealings in the software.
 */

#ifndef SWAP_QUICKSORT_H_
#define SWAP_QUICKSORT_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "SqList/sqList.h"

void quick_sort(SqList *list, int low, int high);

#ifdef __cplusplus
}
#endif

#endif  // SWAP_QUICKSORT_H_

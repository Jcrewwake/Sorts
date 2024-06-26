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

#include <stdio.h>
#include <gtest/gtest.h>
#include "SqList/sqList.h"
#include "Select/SelectionSort.h"
//////////////////////////////////////

// class BinarySortTest : public testing::Test {
//  protected:
//     void SetUp() override {
//         t.r[1].key = 1, t.r[1].otherinfo = 'c';
//         t.r[2].key = 5, t.r[2].otherinfo = 'y';
//         t.r[3].key = 3, t.r[3].otherinfo = 'u';
//         t.r[4].key = 7, t.r[4].otherinfo = 'o';
//         t.r[5].key = 9, t.r[5].otherinfo = 'p';
//         t.r[6].key = 4, t.r[6].otherinfo = 'q';
//         t.r[7].key = 2, t.r[7].otherinfo = 'x';
//         t.r[8].key = 6, t.r[8].otherinfo = 'w';
//         t.length = 8;
//     }

//     SqList t;
// };

// TEST_F(BinarySortTest, Sort) {
//     binary_sort(&t);
//     EXPECT_EQ(t.r[1].key, 1);
//     EXPECT_EQ(t.r[1].otherinfo, 'c');
//     EXPECT_EQ(t.r[2].key, 2);
//     EXPECT_EQ(t.r[2].otherinfo, 'x');
//     EXPECT_EQ(t.r[3].key, 3);
//     EXPECT_EQ(t.r[3].otherinfo, 'u');
//     EXPECT_EQ(t.r[4].key, 4);
//     EXPECT_EQ(t.r[4].otherinfo, 'q');
//     EXPECT_EQ(t.r[5].key, 5);
//     EXPECT_EQ(t.r[5].otherinfo, 'y');
//     EXPECT_EQ(t.r[6].key, 6);
//     EXPECT_EQ(t.r[6].otherinfo, 'w');
//     EXPECT_EQ(t.r[7].key, 7);
//     EXPECT_EQ(t.r[7].otherinfo, 'o');
//     EXPECT_EQ(t.r[8].key, 9);
//     EXPECT_EQ(t.r[8].otherinfo, 'p');
// }

TEST(binary_sort_test, test) {
    SqList t;
    t.r[1].key = 1, t.r[1].otherinfo = 'c';
    t.r[2].key = 5, t.r[2].otherinfo = 'y';
    t.r[3].key = 3, t.r[3].otherinfo = 'u';
    t.r[4].key = 7, t.r[4].otherinfo = 'o';
    t.r[5].key = 9, t.r[5].otherinfo = 'p';
    t.r[6].key = 4, t.r[6].otherinfo = 'q';
    t.r[7].key = 2, t.r[7].otherinfo = 'x';
    t.r[8].key = 6, t.r[8].otherinfo = 'w';
    t.length = 8;
    selection_sort(&t);
    EXPECT_EQ(t.r[1].key, 1);
    EXPECT_EQ(t.r[1].otherinfo, 'c');
    EXPECT_EQ(t.r[2].key, 2);
    EXPECT_EQ(t.r[2].otherinfo, 'x');
    EXPECT_EQ(t.r[3].key, 3);
    EXPECT_EQ(t.r[3].otherinfo, 'u');
    EXPECT_EQ(t.r[4].key, 4);
    EXPECT_EQ(t.r[4].otherinfo, 'q');
    EXPECT_EQ(t.r[5].key, 5);
    EXPECT_EQ(t.r[5].otherinfo, 'y');
    EXPECT_EQ(t.r[6].key, 6);
    EXPECT_EQ(t.r[6].otherinfo, 'w');
    EXPECT_EQ(t.r[7].key, 7);
    EXPECT_EQ(t.r[7].otherinfo, 'o');
    EXPECT_EQ(t.r[8].key, 9);
    EXPECT_EQ(t.r[8].otherinfo, 'p');
}

// int main() {
//     SqList L;
//     L.r[1].key = 1, L.r[1].otherinfo = 'c';
//     L.r[2].key = 5, L.r[2].otherinfo = 'y';
//     L.r[3].key = 3, L.r[3].otherinfo = 'u';
//     L.r[4].key = 7, L.r[4].otherinfo = 'o';
//     L.r[5].key = 9, L.r[5].otherinfo = 'p';
//     L.r[6].key = 4, L.r[6].otherinfo = 'q';
//     L.r[7].key = 2, L.r[7].otherinfo = 'x';
//     L.r[8].key = 6, L.r[8].otherinfo = 'w';
//     L.length = 8;
//     binary_sort(&L);
//     for (int i = 1; i <= L.length; i++) {
//         printf("L.r[%d].key = %d L.r[%d].otherinfo = %c\n", i, L.r[i].key, i,
//         L.r[i].otherinfo);
//     }
//     return 0;
// }

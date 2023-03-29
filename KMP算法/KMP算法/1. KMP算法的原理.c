////#include<stdio.h>
///*KMP算法的原理：
//* 1. 在匹配的过程中，目标串的指针不需要不回溯，只回溯模式串的指针
//* 2.如果模式串和目标串前n个字符匹配成功，遇到匹配失败的字符时，模式串指针回溯的位置由模式串
//    内容决定(回溯到 匹配失败位置前的模式串内容的最长公共前后缀 的长度+1)，然后继续比较
//*/
///*KMP算法的实现
//* 1. 根据模式串的内容，生成一个遇到匹配失败的字符时，模式串的指针回溯的位置的数组(next数组)
//* 2. 在BF算法上稍做修改，当匹配失败时，模式串的位置指针回溯next数组指示的位置
// 
// nextval数组可以看做是next数组的优化版，也就是说是kmp算法的优化版
// 获取nextval数组，就是将模式串的第一个位置 开始
// 与next数组对应值在模式串中的位置的两个字符作比较
// 如果两个字符不相等，将next数组所对应的值赋给nextval数组
// 如果两个字符相等，nextval数组对应的值为nextval数组中 <next对应值> 位置的值
//*/
////int main()
////{
////	int len = 9;
////	char arr[len];
////	return 0;
////}
//
//#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <string.h>
//#include <malloc.h>
//
//// 根据模式串tstr，计算next数组，字符串的起始位置从0开始。
//void getnext(char* tstr, int* next)
////void getnext(char tstr[],int next[])
//{
//    if ((tstr == 0) || (next == 0)) return;  // 判断空指针。
//
//    int tlen = strlen(tstr);  // 模式串的长度。
//
//    // 如果模式串的长度小于3，无需计算next数组，直接返回。
//    if (tlen == 0) return;
//    if (tlen == 1) { next[0] = -1; return; }
//    if (tlen == 2) { next[0] = -1; next[1] = 0; return; }
//
//    next[0] = -1;  // 位置0直接填入-1。
//    next[1] = 0;   // 位置1直接填入0。
//
//    // 如果想调试本函数，放开// xxx就可以了。
//
//    int ii;
//
//    // 循环从2开始，位置0和1不必计算。
//    for (ii = 2; ii < tlen; ii++)
//    {
//        // 显示子串。
//        // char p0[] = { 0 };
//        char* p0 = (char* )malloc(sizeof(char) * tlen);
//        memset(p0, 0, sizeof(p0));
//        strncpy(p0, tstr, ii);
//        printf("p0=%s  ", p0);
//
//        int maxlen = 0;  // 最长公共前后缀的长度。
//
//        // 用一个循环，得到全部的前缀和后缀，并判断最长公共前后缀。
//        int jj = 1;
//        for (jj = 1; jj < ii; jj++)
//        {
//            // char p1[tlen],p2[tlen]; 
//            char* p1 = (char* )malloc(sizeof(char) * tlen);
//            char* p2 = (char* )malloc(sizeof(char) * tlen);
//
//            memset(p1, 0, sizeof(p1));
//            memset(p2, 0, sizeof(p2));
//
//            strncpy(p1, tstr, jj);       // 取前缀。
//            strncpy(p2, tstr + ii - jj, jj); // 取后缀。
//
//            printf("%s %s    ", p1, p2);
//
//            // 判断前后缀是否相同，相同就记下jj的值。
//            if (strcmp(p1, p2) == 0) maxlen = jj;
//        }
//
//        printf(" maxlen=%d\n", maxlen);
//        next[ii] = maxlen;
//    }
//
//    printf("next "); int kk; for (kk = 0; kk < strlen(tstr); kk++) printf("%d ", next[kk]); printf("\n");
//
//    return;
//}
//
//
//int main()
//{
//    // 获取模式串的next数组，字符串的位置从0开始。
//    char tmp[100];
//    memset(tmp, 0, sizeof(tmp));
//    strcpy(tmp, "ababc");
//    int next[100];
//    getnext(tmp, next);
//    printf("next    ");
//    int kk; for (kk = 0; kk < strlen(tmp); kk++) printf("%d ", next[kk]); printf("\n");
//    return 0;
//}
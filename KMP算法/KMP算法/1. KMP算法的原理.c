////#include<stdio.h>
///*KMP�㷨��ԭ��
//* 1. ��ƥ��Ĺ����У�Ŀ�괮��ָ�벻��Ҫ�����ݣ�ֻ����ģʽ����ָ��
//* 2.���ģʽ����Ŀ�괮ǰn���ַ�ƥ��ɹ�������ƥ��ʧ�ܵ��ַ�ʱ��ģʽ��ָ����ݵ�λ����ģʽ��
//    ���ݾ���(���ݵ� ƥ��ʧ��λ��ǰ��ģʽ�����ݵ������ǰ��׺ �ĳ���+1)��Ȼ������Ƚ�
//*/
///*KMP�㷨��ʵ��
//* 1. ����ģʽ�������ݣ�����һ������ƥ��ʧ�ܵ��ַ�ʱ��ģʽ����ָ����ݵ�λ�õ�����(next����)
//* 2. ��BF�㷨�������޸ģ���ƥ��ʧ��ʱ��ģʽ����λ��ָ�����next����ָʾ��λ��
// 
// nextval������Կ�����next������Ż��棬Ҳ����˵��kmp�㷨���Ż���
// ��ȡnextval���飬���ǽ�ģʽ���ĵ�һ��λ�� ��ʼ
// ��next�����Ӧֵ��ģʽ���е�λ�õ������ַ����Ƚ�
// ��������ַ�����ȣ���next��������Ӧ��ֵ����nextval����
// ��������ַ���ȣ�nextval�����Ӧ��ֵΪnextval������ <next��Ӧֵ> λ�õ�ֵ
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
//// ����ģʽ��tstr������next���飬�ַ�������ʼλ�ô�0��ʼ��
//void getnext(char* tstr, int* next)
////void getnext(char tstr[],int next[])
//{
//    if ((tstr == 0) || (next == 0)) return;  // �жϿ�ָ�롣
//
//    int tlen = strlen(tstr);  // ģʽ���ĳ��ȡ�
//
//    // ���ģʽ���ĳ���С��3���������next���飬ֱ�ӷ��ء�
//    if (tlen == 0) return;
//    if (tlen == 1) { next[0] = -1; return; }
//    if (tlen == 2) { next[0] = -1; next[1] = 0; return; }
//
//    next[0] = -1;  // λ��0ֱ������-1��
//    next[1] = 0;   // λ��1ֱ������0��
//
//    // �������Ա��������ſ�// xxx�Ϳ����ˡ�
//
//    int ii;
//
//    // ѭ����2��ʼ��λ��0��1���ؼ��㡣
//    for (ii = 2; ii < tlen; ii++)
//    {
//        // ��ʾ�Ӵ���
//        // char p0[] = { 0 };
//        char* p0 = (char* )malloc(sizeof(char) * tlen);
//        memset(p0, 0, sizeof(p0));
//        strncpy(p0, tstr, ii);
//        printf("p0=%s  ", p0);
//
//        int maxlen = 0;  // �����ǰ��׺�ĳ��ȡ�
//
//        // ��һ��ѭ�����õ�ȫ����ǰ׺�ͺ�׺�����ж������ǰ��׺��
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
//            strncpy(p1, tstr, jj);       // ȡǰ׺��
//            strncpy(p2, tstr + ii - jj, jj); // ȡ��׺��
//
//            printf("%s %s    ", p1, p2);
//
//            // �ж�ǰ��׺�Ƿ���ͬ����ͬ�ͼ���jj��ֵ��
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
//    // ��ȡģʽ����next���飬�ַ�����λ�ô�0��ʼ��
//    char tmp[100];
//    memset(tmp, 0, sizeof(tmp));
//    strcpy(tmp, "ababc");
//    int next[100];
//    getnext(tmp, next);
//    printf("next    ");
//    int kk; for (kk = 0; kk < strlen(tmp); kk++) printf("%d ", next[kk]); printf("\n");
//    return 0;
//}
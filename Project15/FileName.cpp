#define _CRT_SECURE_NO_WARNINGS
//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	// ���ڴ��������Ĵ���
//	long long  a = 0;
//	int count = 0;
//	scanf("%lld", &a);
//	while (a >0) {
//		if ((a % 10) % 2 != 0) {
//			count++;
//		}
//		a /= 10;
//	}
//	printf("%d\n", count);
//		return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>

//int main(int argc, char* argv[])
//{
//    long long a = 0;
//    int count = 0;
//    scanf("%lld", &a);
//    while (a > 0) {
//        if (a % 2 != 0) { // ֱ�Ӽ�鵱ǰ���λ�Ƿ�Ϊ����
//            count++;
//        }
//        a /= 10; // �ƶ�����һ������
//    }
//    printf("%d\n", count);
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//    long long a = 0;
//    int count = 0;
//    scanf("%lld", &a);
//    // �ȼ����������ֵ����һλ�Ƿ�Ϊ����
//    if (a % 10 % 2 != 0) {
//        count++;
//    }
//    // Ȼ��ʼѭ����ֱ�� a Ϊ 0
//    while (a > 0) {
//        a /= 10; // �Ƴ����һλ
//        if (a % 10 % 2 != 0) {
//            count++;
//        }
//    }
//    printf("%d\n", count);
//    return 0;
//}

//#include <stdio.h>
//
//int main() {
//    char str[10001]; // �����ַ������Ȳ�����10000
//    scanf("%s", str); // ��ȡ�ַ���
//    int count = 0; // ���ڼ�������λ������
//
//    // �����ַ����е�ÿ���ַ�
//    for (int i = 0; str[i] != '\0'; i++) {
//        // ��鵱ǰ�ַ��Ƿ�Ϊ����λ
//        if (str[i] == '1' || str[i] == '3' || str[i] == '5' || str[i] == '7' || str[i] == '9') {
//            count++; // ���������λ������������
//        }
//    }
//
//    printf("%d\n", count); // �������λ������
//    return 0;
//}

//#include <stdio.h>
//int main() {
//	int a = 0;
//	int count = 0;
//	scanf("%d", &a);
//	while (a >0) {
//		if (a > 4&&a%3!=0) {
//			count = a / 3 + 1;
//			break;
//		}
//		else if(a<3){
//			count = 2;
//			break;
//		}
//		else if (a % 3 == 0 && a >= 3) {
//			count = a / 3;
//			break;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main(int argc, char* argv[])
//{
//	// ���ڴ��������Ĵ���
//	int p, q;
//	scanf("%d%d", &p, &q);
//	int i = p & q;
//	printf("%d\n", i);
//	return 0;
//}

//#include <stdio.h>
//void tran(int i) {
//	char a = 'a';
//	if (i > 26) {
//		i = i % 26;
//	}
//	char b = a + i-1;
//	putchar(b);
//}
//int main() {
//	int c = 0;
//	scanf("%d", &c);
//	for (int d = 1; d <= c; d++) {
//		int e;
//		scanf("%d",&e);
//		tran(e);
//	}
//}

//#include <stdio.h>
//#include <stdlib.h>
//# define Max 101
//int main(int argc, char* argv[])
//{   
//    // ���ڴ��������Ĵ���
//    int i, n, a[Max];
//    scanf("%d", &n);
//    int sum = 0, tem = 0;//���չ���Ӧ�еľƵ�������tem��ʵ�����еľƵ�����sum
//    for (i = 1; i <= n; i++)
//    {
//        scanf("%d", &a[i]);
//        sum += a[i];
//        tem += i;
//    }
//
//
//    if (sum > tem)
//        printf("%d", sum - tem);
//    else
//        printf("-1");
//
//    return 0;
//}

#include <stdio.h>
int main() {
	int a = 0;
	scanf("%d", &a);
	if (a % 3 == 0 && a % 5 != 0) {
		printf("Fizz\n");
	}
	else if(a % 3 == 0 && a % 5 == 0){
		printf("FizzBuzz\n");
	}
	else if (a % 5 == 0 && a % 3 != 0) {
		printf("Buzz\n");
	}
	else {
		printf("%d\n",a);
	}
	return 0;
}
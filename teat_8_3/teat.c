#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr)  -  �������������ܴ�С����λ���ֽ�
//	//sizeof(arr)  -  �����������Ԫ�صĴ�С
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	while (i < sz)
//	{
//		printf("%c", arr[i]);
//		i++;
//	}
//
//	return 0;
//}


 
//int main()
//{
//
//	int year = 0;
//	int month = 0;
//	int day = 0;
//	scanf("%4d%2d%2d",&year,&month,&day);//%4dȡ��λ��%2dȡ��λ
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02dȡ��λ����ǰ�油��0
//	printf("day=%02d\n", day);
//
//
//	return 0;
//}

//int main()
//{
//	long long  a = 0;
//	char arr[] = { 0 };
//	scanf("%8d%s", &a,&arr);
//	printf("The each subject score of NO.%8d", a);
//	printf("is%s", arr);
//	return 0;
// }


//int main()
//{
//	int id = 0;
//	float c = 0.0f;
//	float math = 0.0f;
//	float eng = 0.0f;
//	scanf("%d;%f,%f,%f", &id, &c, &math, &eng);
//	printf("The each subject score of NO. %d is %.2f,%.2f,%.2f", id, c, math, eng);
//
//	return 0;
//}

//��ӡprintf�ķ���ֵ
//int main()
//{
//	int a = printf("helli world");
//	printf("\n%d",a);
//	return 0;
//}


//int main()
//{
//	printf("printf(\"hello word!\\n\");\n");
//	printf("cout<<\"helli word\">>endl;\n");
//	return 0;
//}

//��ӡ���ֵ
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//�����һ��Ԫ�������ֵ
//	int max = arr[0];
//	i = 1;
//	while (i < 4)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//			
//		}
//		i++;
//	}
//	printf("%d\n", max);
//	return 0;
//}



//������
//int main()
//{
//	float r = 0.0f;//0.0Ĭ����double���͵�
//	float v = 0.0f;
//	scanf("%f", &r);
//	
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//	return 0;
//}

//��bmi
//int main()
//{
//	int w = 0;
//	int h = 0;
//	scanf("%d %d", & w, & h);
//	float b = w/(h/100.0)/(h/100.0);
//
//	printf("%0.2f\n", b);
//
//	return 0;
//}
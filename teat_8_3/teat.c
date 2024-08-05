#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int main()
//{
//	int arr[] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//	int i = 0;
//	//sizeof(arr)  -  计算的是数组的总大小，单位是字节
//	//sizeof(arr)  -  计算的是数组元素的大小
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
//	scanf("%4d%2d%2d",&year,&month,&day);//%4d取四位，%2d取两位
//	printf("year=%d\n", year);
//	printf("month=%02d\n", month);//%02d取两位不够前面补上0
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

//打印printf的返回值
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

//打印最大值
//int main()
//{
//	int arr[4] = { 0 };
//	int i = 0;
//	while (i < 4)
//	{
//		scanf("%d", &arr[i]);
//		i++;
//	}
//	//假设第一个元素是最大值
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



//球的体积
//int main()
//{
//	float r = 0.0f;//0.0默认是double类型的
//	float v = 0.0f;
//	scanf("%f", &r);
//	
//	v = 4 / 3.0 * 3.1415926 * r * r * r;
//	printf("%.3f\n", v);
//	return 0;
//}

//求bmi
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
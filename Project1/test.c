#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//int my_string(char*string)
//{
//	int count = 0;
//	       
//	while (*string != '\0')
//	{
//		string++;
//		count++;
//	}
//
//	
//
//	return count;
//}
//void reverse_string(char* string)
//{
//	char cha = *string;
//	int len = my_string(string);
//	*string = *(string + len-1);
//	*(string + len - 1) = '\0';
//	if (my_string(string ) > 2)
//	{
//		reverse_string(string+1);
//
//	}
//	*(string + len - 1) = cha;
//}
//
//int main()
//{
//
//	char arr[] = "abcde";
//	
//	reverse_string(arr);
//	printf("%s", arr);
//	
//	return 0;
//}



//int DigitSum(int x)
//{
//	if (x / 10 != 0)
//	{
//		DigitSum(x / 10);
//		return DigitSum(x / 10)+x % 10;
//	}
//	else
//		return x;
//}
//int main()
//{
//	int ret = 0;
//	int a = 0;
//	scanf("%d", &a);
//	DigitSum(a);
//	ret =DigitSum(a);
//	printf("%d", ret);
//	return 0;
//}
//int get(int x, int y)
//{
//	if (y > 1)
//	{
//		y--;
//		return get(x, y)*x;
//	}
//	else
//		return x;
//
//}
//int main()
//{
//	int g = 0;
//	int k = 0;
//	int n = 0;
//	scanf("%d %d", &n, &k);
//	g=get(n, k);
//	printf("%d", g);
//
//	return 0;
//}



int print(int x)
{
	if (x > 2)
	{
		
		return print(x-1)+ print(x - 2);

	}
	else
		return 1;


}

int main()
{
	int ret = 0;
	int n = 0;
	scanf("%d",&n);
	ret=print(n);
	printf("%d", ret);
	return 0;
}
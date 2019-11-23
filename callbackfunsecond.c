//#include <stdio.h>
//
//void popuplate_array(int* array, size_t size, int (*getRandom)(void))
//{
//	for (size_t i = 0; i < size; i++)
//	{
//
//		array[i] = getRandom();
//
//	}
//}
//
//int getNextRandom(void)
//{
//	return rand();
//}
//
//int main()
//{
//	int array[10];
//	popuplate_array(array, 10, getNextRandom);
//
//	for (int i = 0; i < 10; i++)
//	{
//
//		printf("第%d个元素的值为：%d\n", i, array[i]);
//
//	}
//}
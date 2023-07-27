#include <stdio.h>
#include <string.h>
/*int main()
{
	int a=0;
	int b=0;
	int c=0;
	
	scanf("%d+%d",&a,&b);
	c=a+b;
	printf("和是：%d",c);
	return 0;
 } */
 /*enum Sex{
 	MALE,FEMALE,SECRET
 };
 int main()
 {
 	enum Sex s = MALE;
 	printf("%d\n",s);
 	return 0;
 }*/
 /*int main()
 {
 	char arr1[]="abc";
 	char arr2[]={'a','b','c','\0'};

 	printf("%s\n",arr1);
 	printf("%s",arr2);
 	return 0;
 }*/
 /*int main()
 {
 	char arr1[] = "abc";
 	char arr2[] = {'a','b','c'};
 	printf("%d\n",strlen(arr1));
 	printf("%d",strlen(arr2));
 	return 0;
 }*/
/* int main()
 {
 	int a,b,c;
 	scanf("%d+%d",&a,&b);
 	c = a + b;
 	printf("%d",c);
 	return 0;
*/

/*int main()
{
	int a=0;
	printf("你要好好学习吗?");
	scanf("%d",&a);
	if(a==1)
		printf("hao");
	else
		printf("f");
	return 0;
		
	int line;
	
	printf("执行敲代码直到300行");
	
	while(line<20000)
	{
		printf("working\n%d",line);
		line++;
	}
	if(line>=20000)
		printf("complete");
	return 0;

# define MAX(x,y) ((x)+(y))
int main()
{
	int a = 3;
	int b = 4;
	int c = MAX(a,b);
	printf("%d",c);
	return 0;
 } 

#define MAX(x,y) (x>y? x:y)
int main()
{
	int a,b,c;
	scanf("%d与%d",&a,&b);
	c = MAX(a,b);
	printf("%d",c);
	return 0;
}
int main()
{
	int a = 3;
	int* p = &a;
	*p = 40;
	printf("%d",a);
	return 0;
}*/
void test()
{
	static int a = 9;
	a++;
	printf("a=%d\n",a);
}
int main()
{
	int i = 0;
	while(i<9)
	{
		test();
		i++;
	}
	return 0;
}



#include <stdio.h>

struct ProductInfo
{
	int num; // 4byte
	char name[100]; // 100byte
	int cost; // 4byte
};

int  main()
{
	ProductInfo myProduct={479789, "제주 한라봉", 19900};

	printf("상품 번호 : %d\n", myProduct.num); 
	printf("상품 이름 : %s\n", myProduct.name); 
	printf("가격 : %d원\n", myProduct.cost); 

	printf("sizeof(myProduct) = %d\n", sizeof(myProduct)); // 합 108

	printf("상품 번호 : %d\n", &myProduct.num); // 주소를 보면 0이라고 했을때
	printf("상품 이름 : %d\n", myProduct.name); // +4
	printf("가격 : %d\n", &myProduct.cost); // +100 

	printf("%d\n", &myProduct); // 0 으로 표시된다. 따로 떨어져있는게 아닌 이어진 주소를 사용하고 있음.
}
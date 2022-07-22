#include <stdio.h>

struct ProductInfo
{
	int num;
	char name[100];
	int cost;
};

int main()
{
	ProductInfo myProduct{ 4797283, "제주 한라봉", 20000 };

	ProductInfo* ptr_product = &myProduct; // 구조체 포인터

	printf("상품 번호 : %d\n", (*ptr_product).num); // *ptr_product.num은 (*ptr_product.num)으로 인식함
	printf("상품 이름 : %s\n", ptr_product->name);  // (*a).b == a->b
	printf("가 격: %d\n", myProduct.cost);

}
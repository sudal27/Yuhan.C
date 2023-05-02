#include <stdio.h>

int main()
{

	int hit = 0;
	printf("주인공의 공격력을 입력하세요 :  ");
	scanf("%d",&hit);
	printf("주인공은 공격력이 %d입니다.\n",hit);
	printf("주인공이 적을 공격하여 %d의 데미지를 입혔습니다.\n",hit);

	if(hit<30)
	{
	printf("적의 잔여 HP : %d\n", 30 - hit );
	printf("적이 주인공을 공격하여 주인공이 뒤졌습니다.\n");
	printf("응 뒤졌쥬?");
	}
	else
	{
		printf("적의 잔여 HP : 0\n");
		printf("적을 물리쳤습니다!\n");
		printf("하삐엔딩");
	}
	return 0;
}

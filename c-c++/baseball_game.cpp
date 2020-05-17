#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	//변수 선언 부분 
	int num[3];
	int check[3];
//	char main_msg[] = "세 수를 입력하세요 (공백으로 구분) : ";
	char *main_msg = "세 수를 입력하세요 (공백으로 구분) : ";
	char *main_msg2 = "세 수를 입력하세요 (공백으로 구분) : ";
	
	char strike_msg[] = "스트라이크";
	char ball_msg[] = "볼";
	char out_msg[] = "아웃";
	int strike_check = 0;
	int ball_check = 0;
	int out_check = 0;
	int time_check = 1;
	
	srand(time(NULL));
//	check[0] = rand() % 10;
//	printf("%d\n", check[0]);
//	
	//난수 선언 
	for(int j = 0; j<3; j++)
	{
		check[j] = rand() % 10;
		printf("%d", check[j]); //사용시 주석처리 
	}
	printf("\n");

	//본문 
	while(true){
//		for(int q = 0; q<3; q++)
//			printf("%d", check[q]);
//		printf("\n");
//		 
		//메인 메시지 출력, 숫자 받음 
		printf("%s", main_msg);	
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		printf("\n");
//		for(int i = 0; i < 3; i++)
//		{
//			printf("%d", num[i]);
//		}
//		printf("\n");
//	
//		볼, 스트라이크. 아웃 체크 
		for(int m = 0; m<3; m++)
		{
			if(num[m] == check[m])
			{
				printf("%s\n", strike_msg);
				strike_check += 1;
			}
			else if(num[0] == check[1])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else if(num[0] == check[2])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else if(num[1] == check[0])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else if(num[1] == check[2])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else if(num[2] == check[0])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else if(num[2] == check[1])
			{
				printf("%s\n", ball_msg);
				ball_check += 1;
			}
			else
			{
				printf("%s\n", out_msg);
				out_check += 1;
			}
		}
		//결과값 
		printf("스트라이크 %d개, 볼 %d개, 아웃 %d개\n", strike_check, ball_check, out_check);
		// 게임 결과 
		if(strike_check == 3)
		{
			//게임 성공 
			printf("게임 성공\n");
			printf("시도횟수 : %d", time_check);
			break;
		}
		else
		{ 
			//게임 실패 : 변수 초기화 
			strike_check = 0;
			ball_check = 0;
			out_check = 0;
			for(int r = 0; r<3; r++)
				num[r] = 0;
			time_check ++;
			continue;
			
		}
	
	}
		
		
		
		
	return 0;
}

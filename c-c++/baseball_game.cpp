#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main( ) {
	//���� ���� �κ� 
	int num[3];
	int check[3];
//	char main_msg[] = "�� ���� �Է��ϼ��� (�������� ����) : ";
	char *main_msg = "�� ���� �Է��ϼ��� (�������� ����) : ";
	char *main_msg2 = "�� ���� �Է��ϼ��� (�������� ����) : ";
	
	char strike_msg[] = "��Ʈ����ũ";
	char ball_msg[] = "��";
	char out_msg[] = "�ƿ�";
	int strike_check = 0;
	int ball_check = 0;
	int out_check = 0;
	int time_check = 1;
	
	srand(time(NULL));
//	check[0] = rand() % 10;
//	printf("%d\n", check[0]);
//	
	//���� ���� 
	for(int j = 0; j<3; j++)
	{
		check[j] = rand() % 10;
		printf("%d", check[j]); //���� �ּ�ó�� 
	}
	printf("\n");

	//���� 
	while(true){
//		for(int q = 0; q<3; q++)
//			printf("%d", check[q]);
//		printf("\n");
//		 
		//���� �޽��� ���, ���� ���� 
		printf("%s", main_msg);	
		scanf("%d %d %d", &num[0], &num[1], &num[2]);
		printf("\n");
//		for(int i = 0; i < 3; i++)
//		{
//			printf("%d", num[i]);
//		}
//		printf("\n");
//	
//		��, ��Ʈ����ũ. �ƿ� üũ 
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
		//����� 
		printf("��Ʈ����ũ %d��, �� %d��, �ƿ� %d��\n", strike_check, ball_check, out_check);
		// ���� ��� 
		if(strike_check == 3)
		{
			//���� ���� 
			printf("���� ����\n");
			printf("�õ�Ƚ�� : %d", time_check);
			break;
		}
		else
		{ 
			//���� ���� : ���� �ʱ�ȭ 
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

#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//���� ���� �κ� 
	int age;
	char name[99] = "a";
	int password;
	
	//�������� �Է� �κ� 
	printf("���� ������ �Է��ϼ���\n");
	printf("�̸� : ");
	scanf("%s", &name);
	if(name != "a")
	{
		printf("���� : ");
		scanf("%d", &age);
		printf("��й�ȣ : ");
		scanf("%d", &password);
	} 
	else
		printf("���� ����");
		
		
	
	//��� �κ� 
	printf("\n\n����ī�� ������ �Ϸ�Ǿ����ϴ�. �����մϴ�.\n--------------------------\n����ī�� ������\n----------------------\n");
	printf("�̸� : %s\n���� : %d\n����Ű : %d", name, age, password);
	 
	 
	return 0;
}

#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	//변수 선언 부분 
	int age;
	char name[99] = "a";
	int password;
	
	//개인정보 입력 부분 
	printf("다음 사항을 입력하세요\n");
	printf("이름 : ");
	scanf("%s", &name);
	if(name != "a")
	{
		printf("나이 : ");
		scanf("%d", &age);
		printf("비밀번호 : ");
		scanf("%d", &password);
	} 
	else
		printf("나이 오류");
		
		
	
	//출력 부분 
	printf("\n\n보안카드 접수가 완료되었습니다. 감사합니다.\n--------------------------\n보안카드 접수증\n----------------------\n");
	printf("이름 : %s\n나이 : %d\n보안키 : %d", name, age, password);
	 
	 
	return 0;
}

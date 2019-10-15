#include <stdio.h>
#include <string.h>
//string tokenizer를 사용 할꺼다
int main(){
	char buffer[100] = "strcmp hello hello";
	char *token;
	char *str[3];
	int idx = 0;

	token = strtok(buffer, " ");
	printf("1: %s\n", token); //strcmp라는 놈이 출력
	while(token != NULL){
		str[idx] = token;
		printf("str[%d] =%s\n", idx, str[idx]);
		idx++;		
		token = strtok(NULL, " ");
		
	}
	if(idx < 3)
		strcpy(buffer, "문자열 비교를 위해서는 두문자열이 필요합니다.");
	else if(!strcmp(str[1],str[2])) //같은 문자열이면 
		sprintf(buffer, "%s와 %s는 같은 문자열입니다.",  str[1], str[2]);
	else 
		sprintf(buffer, "%s와 %s는 다른 문자열입니다.",  str[1], str[2]);
	printf("%s\n", buffer);
	return 0;
}

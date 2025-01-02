#include <stdio.h>
#include <string.h>

int main() {
	char hoTen[] = "cao tat thanh";
	int size = strlen(hoTen);
	
	for(int i = 0;i < size;i++){
		if(hoTen[0] >= 'a' && hoTen[0] <= 'z'){
			hoTen[0] -= 32;
		}
		if(hoTen[i] == ' ' && hoTen[i+1] >= 'a' && hoTen[i+1] <= 'z'){
			hoTen[i+1] -= 32;
		}
	}
	
	for(int j = 0;j < size;j++){
		printf("%c", hoTen[j]);
	}
	return 0;
}

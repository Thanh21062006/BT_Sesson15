#include <stdio.h>
#include <string.h>

int main() {
	char hoTen[] = "cao tat thanh";
	int size = strlen(hoTen), count;
	
	for(int i = 0;i < size;i++){
		if(hoTen[i] != -1 && hoTen[i] != ' '){
			count = 1;
			for(int j = i + 1;j < size;j++){
				if(hoTen[i] == hoTen[j]){
					hoTen[j] = -1;
					count++;
				}
			}
			printf("%c : %d lan\n", hoTen[i], count);
		}
	}
	return 0;
}

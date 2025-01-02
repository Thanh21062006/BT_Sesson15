#include <stdio.h>
#include <string.h>

int main() {
	char hoTen[] = "hello word", kiTu;
	printf("Moi ban chon mot ki tu de xoa: ");
	scanf("%c", &kiTu);
	
	int size = strlen(hoTen);
	for(int i = 0;i < size;i++){
		if(hoTen[i] == kiTu){
			for(int j = i;j < size;j++){
				hoTen[j] = hoTen[j+1];
			}
			i--;
		}
	}
	
	printf("%s", hoTen);
	return 0;
}

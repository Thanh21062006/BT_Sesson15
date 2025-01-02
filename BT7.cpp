#include <stdio.h>
#include <string.h>

int main() {
	char gmail[] = "Hello my gmail is test123@gmail.com";
	int size = strlen(gmail), ktDacBiet = 0, ktSo = 0, ktChu = 0;
	
	//Su dung bang ma ASCII.
	for(int i = 0;i < size;i++){
		if(gmail[i] >= 32 && gmail[i] <= 47 || gmail[i] >= 58 && gmail[i] <= 64){
			ktDacBiet++;	
		}
		else if(gmail[i] >= 91 && gmail[i] <= 96 || gmail[i] >= 123 && gmail[i] <= 126){
			ktDacBiet++;
		}
		else if(gmail[i] >= '0' && gmail[i] <= '9'){
			ktSo++;
		}
		else if(gmail[i] >= 65 && gmail[i] <= 90 || gmail[i] >= 97 && gmail[i] <= 122){
			ktChu++;
		}
	}
	printf("So ky tu la chu cai: %d\n", ktChu);
	printf("So ky tu la chu so: %d\n", ktSo);
	printf("So ky tu dac biet: %d\n", ktDacBiet);
	
	return 0;
}

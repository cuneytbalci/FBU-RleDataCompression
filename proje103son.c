#include <stdio.h>
#include <stdlib.h>

int main() {
	char arr[1000];
	FILE* dosya;
	int n = sizeof(arr);
	int count, sikistircoz;
	printf("Sikistirma yapmak icin 1, cozme yapmak icin 2 sayisini giriniz: ");
	scanf_s("%d", &sikistircoz);

	if (sikistircoz == 1) {
		fopen_s(&dosya, "giris2.txt", "r");
		int i = 0;
		char char1;
		while (fscanf_s(dosya, "%c", &char1) != EOF) {
			arr[i] = char1;
			i++;
		}
		fclose(dosya);

		fopen_s(&dosya, "giris2.txt", "w");
		for (int k = 0; k < i; k++) {
			count = 1;
			while (k + 1 < i && arr[k] == arr[k + 1]) {
				k++;
				count++;
			}
			if (arr[k] != " " || arr[k] != "\n") {
				fprintf(dosya, "%d%c ", count, arr[k]);
				if ()
			}
		}
		fclose(dosya);
	}
	else if (sikistircoz == 2) {
		int arr1[1000];
		char arr2[1000];
		char char2;
		int num2, a = 0;
		fopen_s(&dosya, "giris2.txt", "r");
		while (fscanf_s(dosya, "%d%c ", &num2, &char2) != EOF) {
			arr1[a] = num2;
			arr2[a] = char2;
			a++;
		}
		fclose(dosya);
		fopen_s(&dosya, "giris2.txt", "w");
		for (int j = 0; j <= a; j++) {
			while (arr1[j] != 0 && j != a) {
				fprintf(dosya, "%c", arr2[j]);
				arr1[j] = arr1[j] - 1;
			}
		}
		fclose(dosya);
	}
	else
		printf("1 ve 2'den farkli deger girdiniz.");
}
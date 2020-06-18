#include<stdio.h>
#include<conio.h>
#include <stdlib.h>
struct SV {
	int age;
	char name[20];
	char addr[20];
};
struct SV s[3] ;
void doc(FILE *f)
{ 	int i = 0;
	for(i;i<3;i++)
	{
	char tx[10];
	fgets(s[i].name, 20, f);
	fscanf(f, "%d", &s[i].age);
	fgets(tx, 10, f);
	fgets(s[i].addr, 20, f);	
	}
	
}
void xuat() {
	int j = 0;
	for(j;j<3;j++)
	printf("\nTen: %sTuoi: %d\nDia chi: %s", s[j].name, s[j].age, s[j].addr);
}
int main() {
	
	FILE *f = fopen("input.TXT", "r");
	int i = 0;
	while (!feof(f)) {
		doc(f);
	}
	xuat();
	return 0 ;
}

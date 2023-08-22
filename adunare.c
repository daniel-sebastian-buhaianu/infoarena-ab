#include <stdio.h>

int main()
{
	int a, b;
	FILE *fin, *fout;

	fin = fopen("adunare.in", "r");

	if (!fin) return 1;

	fscanf(fin, "%d", &a);
	fscanf(fin, "%d", &b);
	
	fclose(fin);

	fout = fopen("adunare.out", "w");
	
	fprintf(fout, "%d", a + b);

	fclose(fout);
	
	return 0;
}

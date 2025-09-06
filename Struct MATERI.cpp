#include <stdio.h>
#include <string.h>

struct nilai{
	int uts, tm, uas;
};

struct mahasiswa{
	char nim[11];
	char nama[100];
	// int uts, tm, uas;
	struct nilai nl;
	
	double gpa;
};

struct mahasiswa mhs1 = {"2702217182", "Jordan", 100, 95, 90, 3.69};

void ArrayOfStruct(struct mahasiswa mhs[]){
	strcpy(mhs[2].nama, "Jeni");
	mhs[2].nl.uts = 60;
	mhs[2].nl.uas = 85;
	mhs[2].nl.tm = 67;
}

void iniStruct(struct mahasiswa *mhs1){
	mhs1->nl.uas = 87;
}

int main()
{
	// inisiasi variable dalam struct
	strcpy(mhs1.nama, "Jordan Chandra");
	mhs1.nl.tm = 100;
	
//	printf("Masukkan NIM anda : ");
//	scanf("%[^\n]", mhs1.nim);
//	printf("Masukkan IPK anda : ");
//	scanf("%lf", &mhs1.gpa);
//	printf("NIM anda adalah %s dan IPK anda adalah %.2lf\n", mhs1.nim, mhs1.gpa);
//	printf("Nilai UTS anda adalah %d\n", mhs1.nl.uts);
	
	iniStruct(&mhs1);
	printf("Nilai uas %d\n", mhs1.nl.uas);
	
	//	array of struct
	struct mahasiswa mhs[100] = {{"2702217182", "Jordan", 100, 95, 90, 3.69}, {"2702227611", "Rafael", 98, 100, 95, 3.67}};
	
	ArrayOfStruct(mhs);
	for(int i = 0; i < 3; i++){
		printf("Hi %s nilai uts anda adalah %d\n", mhs[i].nama, mhs[i].nl.uts);
	}
	
	return 0;
}

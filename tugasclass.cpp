#include <iostream>
#include <string>
using namespace std;

class SEPEDAMOTOR{
	public:
		void suara(string bunyi);
		string warna, type;
		
};

int main(){
	SEPEDAMOTOR MATIC, SPORTY, CUB;
	
	MATIC.warna ="brown";
	MATIC.type  ="Scoopy";
	SPORTY.warna ="orange";
	SPORTY.type  ="CBR 150R";
	CUB.warna = "hitam merah";
	CUB.type ="supra";

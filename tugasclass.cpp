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
	
	cout << (MATIC.warna);
	cout << (MATIC.type);
	MATIC.suara("ngenggggggg");
	
	cout << (SPORTY.warna);
	cout << (SPORTY.type);
	SPORTY.suara("bommbombom");
	
	cout << (CUB.warna);
	cout << (CUB.type);
	CUB.suara("degdegdeg");
}
void SEPEDAMOTOR::suara(string bunyi){
	cout <<"suaranya"<<bunyi<<"!"<<endl;
}

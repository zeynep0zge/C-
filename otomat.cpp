#include <iostream>
using namespace std;
    

int main() {
	int su=11;
	int kola=22;
	int kullaniciVerdi,istenilenUrun;
    
    int suAdet=10;
    int kolaAdet=10;
    int suFiyat=1;
    int kolaFiyat=5;
    
    
    
    
    cout<<"istenilen urun su ise 11 kola ise 22 yaziniz: "<<endl;
    
    cin>>istenilenUrun;
    
    cout<<"parayi giriniz: "<<endl;
    
    cin>>kullaniciVerdi;
    
    int paraUstuSu=kullaniciVerdi-suFiyat;
    int paraUstuKola=kullaniciVerdi-kolaFiyat;
    int kalanSuAdet=suAdet-1;
    int kalanKolaAdet=kolaAdet-1;
    
    if (istenilenUrun==su){
    	
    	
    	
	
	
	
	if (kullaniciVerdi>=suFiyat){
		
		
			
    			cout<<"kalan adet: "<<kalanSuAdet<<endl;
				cout<<"buyrun suyunuz."<<endl;
				cout<<"para ustu: "<<paraUstuSu<<endl;
		
	}
	
	
		
		else if (kullaniciVerdi<suFiyat){
		
		cout<<"yetersiz bakiye"<<endl;
		cout<<"kalan su adet:"<<suAdet;
		
	}
	
}
	
	if (istenilenUrun== kola){

		
		
	
	if (kullaniciVerdi>=kolaFiyat){
		
			cout<<"kalan adet: "<<kalanKolaAdet<<endl;
			cout<<"buyrun kolaniz:"<<endl;
			cout<<"para ustu: "<<paraUstuKola<<endl;
		
	}
	
	
	else if (kullaniciVerdi<kolaFiyat){
		
		cout<<"yetersiz bakiye"<<endl;
		cout<<"kalan kola adet: "<<kolaAdet;
	}
}

    return 0;
}
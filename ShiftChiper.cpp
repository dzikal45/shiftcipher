#include<iostream>
#include<string.h>  
using namespace std;

void Enkripsi(){
    string plainteks, CipherTeks;
    int i, k;
    char x;

    cout<<"Masukan Pesan?";
    cin.ignore();
    getline(cin,plainteks);
    cout<<"Masukan Jumlah K? ";
    cin>>k;

    CipherTeks="";
    
    for(i=0;i<plainteks.length();i++){
        x= plainteks[i];

        if(isalpha(x)){
            x= toupper(x);
            x=x-65;
            x=(x+k)%26;
            x=x+65;

        }
        CipherTeks=CipherTeks+x;
        

    }
    cout<<"CipherTeks: "<<CipherTeks<<endl;
}

void Dekripsi(){
    string plainteks, CipherTeks;
    int i,k;
    char x;
     cout << "Ketikan CipherTeks : ";
    cin.ignore(); getline (cin, CipherTeks);
    cout << "Masukan jumlah pergeseran : "; cin >> k;
    plainteks = "";
    
    for (i=0; i<CipherTeks.length(); i++)
    {
        x = CipherTeks[i];
        if (isalpha(x)) 
        {
            x= toupper(x); 
            x = x - 65; 
            if (x - k < 0) // 
                x = 26 + (x - k);
            else
                x = (x - k) % 26;
            x = x + 65; 
            x = tolower(x); 
        }
        plainteks = plainteks + x; 
    }
    cout << "plainteks : " << plainteks <<endl; 
}

int main (){ 
    int pilih;
    bool stop;
    stop = false;
    
    while (!stop) 
    {
        cout << "Menu : " <<endl;
        cout << "1. Enkripisi " <<endl;
        cout << "2. Dekripsi " <<endl;
        cout << "3. Exit " <<endl;
        cout << "pilih menu : "; cin >> pilih;
        switch(pilih){
            case 1 : 
			Enkripsi();
			break;
            case 2 : 
			Dekripsi();
			break;
            case 3 : 
			stop = true;
			break;
        }
    }
}//end

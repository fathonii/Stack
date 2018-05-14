#include <iostream>
using namespace std;
#define maks 20

struct stack{
	int top, data[maks];
}tumpuk;

void inisial(){
	tumpuk.top=-1;
}

bool isEmpty(){
	return tumpuk.top==-1;
}
bool isFull(){
	return tumpuk.top==maks-1;
}

void push(){
	if(isFull()){
		cout<<"\nTumpukan sudah penuh\n";
	}
	else{
		tumpuk.top++;
		cout<<"\nMasukkan data = ";cin>>tumpuk.data[tumpuk.top];
		cout<<"Data"<<tumpuk.data[tumpuk.top]<<" sudah masuk ke stack\n";
	}
}

void pop(){
	if(isEmpty()){
		cout<<"\nData kosong\n";
	}
	else{
		cout<<"\nData"<<tumpuk.data[tumpuk.top]<<" sudah terambil\n";
		tumpuk.top--;
	}
}

void lihatstack(){
	if(isEmpty()){
		cout<<"Stack kosong";
	}
	else{
		cout<<"\nStack : ";
		for(int i=tumpuk.top;i>=0;i--)
		cout<<tumpuk.data[i]<<" ";
	}
}

int main(){
	int pilih;
	inisial();
	do{
		lihatstack();
		cout << "\n1. Input (Push)\n"<<"2. Hapus (Pop)\n"<<"3. Keluar\n"<<"Masukkan Pilihan: ";
		cin >>pilih;
		switch (pilih)
		{
		case 1:
			push();
			break;
		case 2:
			pop();
			break;
		default:
      cout << "Pilihan tidak tersedia" << endl;
			break;
		}
	} while (pilih!=3);
}

#Ahmad Fathoni - 1717051053








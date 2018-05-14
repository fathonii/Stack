#include <iostream>
#include <stdlib.h>
using namespace std;
#define maks 20

struct stack{
	int top, data[maks];
}tumpuk;

void inisial(){
	tumpuk.top=-1;
}

bool isEmpty(){
	if(tumpuk.top==-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
bool isFull(){
	if(tumpuk.top==maks-1)
	{
		return 1;
	}
	else
	{
		return 0;
	}
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
		if (pilih==1){
			push();
		}else if(pilih==2){
			pop();
		}else if(pilih==3){
			exit(0);
		}else {
			cout << "Pilihan tidak tersedia\n" << endl;	
		}
	} while (pilih!=3);
}

#Ahmad Fathoni - 1717051053
#Alharis Dharmariski - 1717051049
#Muhammad Farhan Saputra - 1717051009








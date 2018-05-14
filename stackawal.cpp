#include <iostream>
using namespace std;
struct stack{
	char top=-1;
	char data[10];
	void push(int a){
		data[top++]=a;
}

int atas(){
	return data[top];
}

int kosong(){
	if(top==-1){
	return 1;}
	else{
	return 0;}	
}

int pop(){
	if(top==-1){
		cout<<"Stack kosong";
		return top;
	}
	else{
		top--;
	}
}

int push(char a){
	if(top==10-1){
		cout<<"Stack penuh";
		return top;
	}
	data[++top]=a;
}

void cetak(){
	for(int i=0;i<top;i++){
		cout<<data[i];
	}
}
};

int Operator(char a){
	if(a=='^')
	return 3;
	else if(a=='*'||a=='/')
	return 2;
	else if(a=='+'||a=='-')
	return 1;
	else return -1;
}

int main(){
	int hasil,a;
	string b,c;
	char opr;
	stack d;
	cout<<"Masukkan eksepresi Infix : ";cin>>b;cout<<endl;
	a=b.length();
	for(int i=0;i<a;i++){
	if (b[i] >= '0' && b[i] <= '9'){
		c+=b[i];
	}
	else if (b[i] ==  '('){
		d.push(b[i]);
	}
	else if (b[i] == ')'){
		while (d.kosong() != 1 && d.atas() != '('){
			char x=d.atas();
			d.pop();
			c+=x;
		}
		if (d.atas() == '('){
			d.pop();
		}
	}
	if (b[i] == '+' || b[i] == '-' || b[i] == '*' || b[i] == '/'){
		if (d.kosong() == 1 || d.atas() == '('){
			d.push(b[i]);
		}
		
	else{
		while (d.kosong() != 1 && d.atas() != '(' && Operator(b[i]) <= Operator(d.atas())){
			char x=d.atas();
			d.pop();
			c+=x;
		}
		d.push(b[i]);
		}	
	}
}
while(d.kosong() != 1){
		char x=d.atas();
		d.pop();
		c+=x;
			}
cout<<"Bentuk Postfix \t: "<<c<<endl<<endl;
for(int i=0;i<=a;i++){
if (c[i] >= '0' && c[i] <= '9'){
	d.push(c[i]);
}

if( c[i]=='+' || c[i]=='-' || c[i]=='*' || c[i]=='/' ){
	int q=d.atas()-'0';
	d.pop();
	int y=d.atas()-'0';
	d.pop();
	if(c[i]=='+'){
		hasil=y+q;
		char tot=hasil+'0';
		d.push(tot);
		}
		else if(c[i]=='-'){
		hasil=y-q;
		char tot=hasil+'0';
		d.push(tot);
			
	}
	else if(c[i]=='*'){
		hasil=y*q;
		char tot=hasil+'0';
		d.push(tot);
	}
	else if(c[i]=='/'){
		hasil=y/q;
		char tot=hasil+'0';
		d.push(tot);
	}
		
}

}

char total=d.atas();
int Final=total-'0';
cout<<"Hasil : "<<Final<<endl;
}

#Ahmad Fathoni - 1717051053
#Alharis Dharmariski - 1717051049
#Muhammad Farhan Saputra - 1717051009

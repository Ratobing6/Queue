#include <iostream>
#include <stdlib.h>
using namespace std;

struct nodeQueue{
	int nmp;
	char nm[100], pss[100];
	struct nodeQueue *next;
} 
*baru,*head=NULL,*tail=NULL,*hapus,*temp;
		
	int enqueue(){
		baru=(nodeQueue*)malloc(sizeof(struct nodeQueue));
		cout<<"Data pemain bola"<<endl;
		cout<<"================="<<endl;
			cin.ignore();
			cout<<"No Punggung : ";
			cin>>baru->nmp;
			cin.ignore();
			cout<<"Nama : ";
			cin.getline(baru->nm,100);
			cout<<"Posisi : ";
			cin.getline(baru->pss,100);
			cin.ignore();
	baru->next=NULL;
		if(head==NULL){
			head=baru;
		}else{
			tail->next=baru;
		}
		tail=baru;
		tail->next=NULL;
		cout<<endl<<endl;
		}
	int dequeue(){
		if (head==NULL)
			cout<<"Antrian Kosong"<<endl;
		else if(head==tail){
			hapus=head;
			head=head->next;
		}else{
			hapus=head;
			while(hapus->next!=tail)
			hapus=hapus->next;
			tail=hapus;
			hapus=tail->next;
			tail->next=NULL;
		}
			cout<<endl<<endl;
	}
	
	
	int show(){
	if (head==NULL)
		cout<<"Antrian Kosong"<<endl;
		else{
			temp=head;
		while(temp!=NULL){
	cout<<temp->nmp<<" -> "<<temp->nm<<" -> "<<temp->pss<<endl;
		temp=temp->next;
		}
	}
}

	int main(){
	int pilih;
	while(1){
		cout <<"==============================================================="<<endl;
		cout << "                QUEUE MENGGUNAKAN LINKED LIST" <<endl;
		cout <<" "<<endl;
		cout << "1. Enqueue" <<endl;
		cout << "2. Dequeue" <<endl;
		cout << "3. Tampil" <<endl;
		cout << "4. Exit" <<endl;
		cout << "Pilih (1-4) : ";
		cin>>pilih;
		
	switch(pilih){
		case 1 :
			enqueue();
			break;
		case 2 :
			dequeue();
			break;
		case 3 :
			show();
			break;
		case 4 :
			return 0;
			break;
		default:
            cout << "ERROR, Masukkan Pilihan Dengan Benar";
            cout<<endl<<endl;
            break;
		}
 	}	
}

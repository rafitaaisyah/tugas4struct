#include <iostream>
#include <conio.h>
using namespace std;


void dMenu(){
system("cls");
cout<<"Aplikasi Tampilan Menu"<<"\n";       
cout<<"1. Menu pertama"<<"\n";            
cout<<"2. Menu kedua"<<"\n";            
cout<<"3. Menu ketiga"<<"\n";           
cout<<"4. Menu keempat"<<"\n";            
cout<<"5. Exit"<<"\n";           
cout<<"Masukan angka :";        

}

int main() {
char pl;
do
{
    dMenu();
    pl=getch();
  switch (pl)
  {
   case '1':
    /* code */
    break;
   case '2':
    /* code */
    break;  
   case '3':
    /* code */
    break;  
   case '4':
    /* code */
    break;  
  case '5':
    /* code */
    break;
  
  default:
    system("cls");
    cout<<"Pilihan Tidak Tersedia";
    getch();
    break;
  }


} while (pl!='5');
  return 0;
}
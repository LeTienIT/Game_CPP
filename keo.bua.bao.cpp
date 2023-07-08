#include<iostream> 
#include<cstdlib>
#include<ctime>
#include<string.h> 
#include<windows.h>
#include<conio.h> 
#include<iomanip> 
using namespace std ;

int luatchz(char g[4], char h[4])
{
	cout<<"hi! chao mung ban den voi game: KEO-BUA-BAO:)"<<'\n';
	cout<<"                                   ... ..."; 
	getch();
	system("cls"); 
	cout<<"truoc khi vao game, ban co can toi noi chut ve luat choi<yes/no>: ";
	do
	{
		if(strcmpi(g ,"yes") == 0)
		{
			break;
		}
		
		cin.getline(h,4);
		if(strcmpi(h,"yes")==0)
		{
			do
			{
				if(strcmpi(g ,"yes") == 0)
				{
					break;
				}
				cout<<"-luat choi rat don gian, moi 1 lan chx, ban se co 5 vong, moi vong ban se chon hoac"<<'\n';
				cout<<" keo, hoac Bua, hoac Bao (moi vong co the chon tuy y ko bat buoc giong nhau) "<<'\n'; 
				getch();
				cout<<"-trong khi do he thong(boss) cung se chon mot cach ngau nhien 1 trong 3(keo-bua-bao)"<<'\n';
				cout<<"-roi 2 lua chon: cua ban(you) va he thong(boss) se hien thi ra man hinh cung ket qua"<<'\n';
				cout<<"                         ... enter tiep tuc ...";
				getch();
				system("cls");
				cout<<"-ket qua se duoc tinh theo mot quy luat dinh san do la:"<<'\n'; 
				cout<<"    -keo thang bao"<<'\n'<<"    -bao thang bua"<<'\n'<<"    -bua thang keo"<<'\n';
				cout<<"..."<<'\n'; 
				getch();
				system("cls");
				cout<<"okay! bay h ta se den 1 vai chu y nha: "<<'\n';
				cout<<"..."<<'\n';
				getch();
				system("cls");
				cout<<"1:sau moi vong, neu ket qua cua ban la win thi ban se dc cong 1 diem, "<<'\n';
				cout<<"  con neu ban close thi boss se dc  cong 1 diem."<<'\n';
				cout<<"..."<<'\n';
				getch(); 
				cout<<"2:cac vong drawn van se dc tinh la 1 vong choi, nhung ket qua se ko dc tinh."<<'\n';
				cout<<"..."<<'\n';
				getch(); 
				cout<<"3:sau 5 vong choi ket qua chx cua ban va boss se dc tong ket lai,"<<'\n';
				cout<<"  ket qua do la so lan thang cua ban va boss trong 5 lan choi."<<'\n';
				cout<<"..."<<'\n';
				getch();
				cout<<"4:trong khi choi he thong cung se co 1 vai cau hoi, va ban chi viec chon yes or no,"<<'\n';
				cout<<"  or 1 so nao do se dc chuong trinh chu thich o canh cau hoi."<<'\n';
				cout<<"..."<<'\n';
				getch(); 
				cout<<"5:trong 1 vong neu ban  nhap sai thi he thong se cho ban choi lai vong do,"<<'\n';
				cout<<"  va se nhac ban doc ky lai quy tac tro choi."<<'\n'; 
				cout<<"..."<<'\n';
				getch();
				system("cls");
				cout<<"ban vua doc toan bo cac quy tac cua tro choi, no de dung ko. "<<'\n';
				cout<<"vay chung ta bat dau chx chu(yes/no): ";
				do
				{
					cin.getline(g,4);
					if(strcmpi(g ,"yes") == 0)
					{
						break;
						system("cls");
					 
					}
					
					if(strcmpi(g,"no") == 0)
					{
						cout<<"NO sao? o vay ban van chua hieu ro quy tac, de toi noi lai cho ban"<<'\n';
						getch();
						break;
						system("cls"); 
					}
					else if(strcmpi(g ,"yes") != 0 || strcmpi(g ,"no") != 0) 
					{						
						cout<<"he thong ko nhan dc cau tra loi phu hop, vui long xem lai:";				
					}
				}
				while(true);
			}
			while(true);	
		 	break;
		}	
		if(strcmpi(h,"no")==0)
		{
			cout<<"okay! mong rang ban da biet ro quy luat:) "<<'\n';
			getch();
			break;
			system("cls");
		}
		if(strcmpi(h,"yes")!=0 || strcmpi(h,"no")!=0)
		{
			cout<<"he thong ko nhan dc cau tra loi vui long nhap lai: ";
		}
	}
	while(true);
}

int thugon(char f[4])
{  
	cout<<"ban muon chon chuc nang xoa man hinh ko?(yes/no/1)(an 1 de biet them chi tiet)"<<'\n';
	do 
	{
		cin.getline(f,4); 
		if(strcmpi(f,"yes") == 0 || strcmpi(f,"no") == 0)
		{
			break; 
		} 
		else if(strcmpi(f,"1") == 0) 
		{
			cout<<"xoa man hinh tuc la sau moi lan ban choi,";
			cout<<" ket qua cua ban van se duoc luu nhung se ko hien thi lai Kq man choi do!"<<'\n'; 
	 		cout<<"vay ban co muon bat no ko?(yes/no/1)"<<'\n'; 
		} 
		else 
		{
			cout<<"ban nhap sai: he thong ko co du lieu ban nhap"<<'\n'; 
		}
	}
	while(true); 
}


int main()
{
	do
	{
		int nhap=0,your=0,boss=0,lap=1;
	
		char g[4], h[4] ;
		
		luatchz(g,h);
	
		char f[4]; 
		
		thugon(f);
	
		system("cls"); 
		cout<<"LET GO"<<'\n';
		cout<<"..."; 
		getch(); 
		system("cls"); 
	
		do
		{
			srand(time(NULL));
	  	  	int a = rand() % 3 + 0;
	    	char b[4];
	    	cout<<"(keo,bua,bao)"<<'\n';
	    	cout<<"you choose: ";
	    	cin.getline(b,4);
	   	 	nhap++; 
		    if(strcmpi(b , "bua") == 0)
	    	{
		    	if(a == 0)
		    	{
			  	  cout<<"boss choose : keo"<<'\n';
			  	  cout<<"KQ:  you win"<<'\n';
					your++; 
					cout<<"-------------";
					cout<<endl;
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
		   		}
		
				if(a == 1)
				{	
					cout<<"boss choose : bua"<<'\n';
					cout<<"KQ:  drawn"<<'\n';
					cout<<"-------------";
					cout<<endl;
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				}
				if(a == 2)
				{
					cout<<"boss choose : bao"<<'\n';
					cout<<"KQ:  you close"<<'\n';
					boss++;
					cout<<"-------------";
					cout<<endl; 
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				} 
			}
			else if(strcmpi(b , "keo") == 0)
			{
				if(a == 0)
				{
					cout<<"boss choose : keo"<<'\n';
					cout<<"KQ:  drawn"<<'\n';
					cout<<"-------------";
					cout<<endl; 
					if(strcmpi(f,"yes") == 0 )
					{
					
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				}
		
				if(a == 1)
				{
					cout<<"boss choose : bua"<<'\n';
					cout<<"KQ:  you close"<<'\n'; 
					boss++;
					cout<<"-------------";
					cout<<endl; 
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				}
				if(a == 2)
				{
					cout<<"boss choose : bao"<<'\n';
					cout<<"KQ:  you win"<<'\n';
					your++;
					cout<<"-------------";
					cout<<endl;
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				} 
			}
			else if(strcmpi(b , "bao") == 0)
			{
				if(a == 0)
				{
					cout<<"boss choose : keo"<<'\n';
					cout<<"KQ:  you close"<<'\n';
					boss++;
					cout<<"-------------";
					cout<<endl; 
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				}
		
				if(a == 1)
				{
					cout<<"boss choose : bua"<<'\n';
					cout<<"KQ:  you win"<<'\n';
					your++;
					cout<<"-------------";
					cout<<endl;
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					} 
				}
				if(a == 2)
				{
					cout<<"boss choose : bao"<<'\n';
					cout<<"KQ:  drawn"<<'\n';
					cout<<"-------------";
					cout<<endl; 
				
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"..."<<'\n';
						getch();
						system("cls");
					}  
				} 
			}
    		else 
			{
				if(strcmpi(b , "bua") != 0 || strcmpi(b , "keo") != 0 || strcmpi(b , "bao") != 0) 
				{
					cout<<"chac ban chua biet luat choi."<<'\n';
			   	 cout<<"ban nen doc ro cach choi roi quay lai."<<'\n';
			   	 cout<<"-------------";
			   	 nhap--; 
					cout<<endl;
					if(strcmpi(f,"yes") == 0 )
					{
						cout<<"			...enter tiep tuc ...";
						getch();
						system("cls");
					} 
				}
			}	
		}
		while(nhap < 5);
	
	
		char c[4],d[100]; 
		cout<<"ket qua cua ban: "<<'\n';
		cout<<"your"<<"     "<<"boss"<<'\n';
		cout<< your <<"     "<< boss <<'\n';
		if(your < boss)
		{
			cout<<"ban ga vcl, j ma thua boss "<< boss - your <<" mang"<<'\n'; 
		}
		do
		{
			cout<<"ban co j muon noi ko?(yes/no) "<<'\n';cin.getline(c,4);
			if(strcmpi(c,"yes") == 0 || strcmpi(c,"no") == 0)
			{
				break; 
			}
			else
			{
				cout<<"he thong ko nhan dc cau tra loi mong muon xin nhap lai: "<<'\n'; 
			} 
		}
		while(true); 
 	
 		char l[4];
 	
		if(strcmpi(c,"yes") == 0)
		{
			cout<<"okay,moi ban: "<<'\n';
			cout<<"you: ";cin.getline(d,100); 
			if(your < boss)
			{
				cout<<"BOSS: BAN GA VCL RA "<<'\n';
				cout<<"-----------------"<<'\n';
				cout<<"ban muon choi lai ko ";
				cout<<"neu ban nhap khac <no> thi he thong se mac dinh la yes."<<'\n';
				cout<<"vay ban chon<...//no>: ";cin.getline(l,4); 
			}
			else
			{
				cout<<"CHI CO GA MOI BIET GAY haaaaa "<<'\n';
				cout<<"-----------------"<<'\n';
				cout<<"ban muon choi lai ko ";
				cout<<"neu ban nhap khac <no> thi he thong se mac dinh la yes."<<'\n';
				cout<<"vay ban chon<...//no>: ";cin.getline(l,4); 
			} 
		}
		else if(strcmpi(c,"no") == 0)
		{
			cout<<"vay chung ta tam biet: "<<'\n'; 
			if(your < boss)
			{
				cout<<"du sao thi ban cung den vcl"<<'\n';
				cout<<"-----------------"<<'\n';
				cout<<"ban muon choi lai ko ";
				cout<<"neu ban nhap khac <no> thi he thong se mac dinh la yes."<<'\n';
				cout<<"vay ban chon<...//no>: ";cin.getline(l,4);
			}
			else
			{
				cout<<"du sao thi ban van Ga"<<'\n';
				cout<<"-----------------"<<'\n';
				cout<<"ban muon choi lai ko ";
				cout<<"neu ban nhap khac <no> thi he thong se mac dinh la yes."<<'\n';
				cout<<"vay ban chon<.../no>: ";cin.getline(l,4); 
			} 
		}
		if(strcmpi(l,"no") == 0)
		{
			cout<<"goodbye";
			break;
		}
		else
		{
			cout<<"okay. chung ta bat dau lai.:)";
			lap++;
			getch();
			system("cls");
		}
	}
	while(true);
	return 0; 
}


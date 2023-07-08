#include<iostream>
#include<cmath>
#include<cstdlib>
#include<ctime>
using namespace std;
int main ()
{
  srand(time(0));
  
  const int size=60;
  
  cout << "Nhap mot chu cai de bat dau \n ";
  char x; cin>> x;
  
  int vtri = size / 2;
  while (true) 
  {
    cout << "|START|" ;
    for (int i = 0 ; i < size ; i++) 
	{
      if (i == vtri) 
      {
      	cout << x;
	  }
        
      else
	  {
	  	cout <<" ";
	   } 
	}
    cout << "|FINISH|" << endl;
    
    int move= 0 + rand() % 3 - 1;
    vtri = vtri + move;
	 
    if (vtri < 1)
	{
		cout << "BAN KHONG THE HOAN THANH" <<endl; 
		break;
	}
	
    if (vtri > size-1)
	{
		cout << "Yay! BAN DA KET THUC CUOC DUA" << endl;
		break;
	}
	
    for(int sleep=0; sleep < 1000000 ; ++ sleep);
  }   
  
  
  return 0; 
}

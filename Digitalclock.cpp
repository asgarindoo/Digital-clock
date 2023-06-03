#include <iostream> //to using cin/cout
#include <stdlib.h> //to using system clear
#include <windows.h> //to make fungction gotoxy(to using coord)
#include <unistd.h> //to using function sleep
#include <conio.h> //to using getch

using namespace std;

//Array multidimensi (2 dimensi)
char digit1[5][3] = {	' ',' ',186,
						' ',' ',186,
						' ',' ',186,
						' ',' ',186,
						' ',' ',186	};


char digit9[5][3] = {	186,' ',186,
						186,' ',186,
						186,186,186,
						' ',' ',186,
						' ',' ',186	};

// fungsi koordinat
void gotoxy(int x, int y){
    COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

//fungsi delay
void delay(void){
	int delay;
	delay = 1;
	while(delay<100000000){
		delay++;
	}
}

//fungsi to print digit array
void printDigit(int no, int x, int y ){	 
	for(int i=0; i<5; i++){
		for(int j=0; j<3; j++){
			switch(no){
				case 1:
					gotoxy(x+j, y+i); cout<<digit1[i][j]; break;
				case 2:
					gotoxy(x+j, y+i); cout<<digit9[i][j]; break;
			} 
		}
	}
}

int main(){
	
//Making Loading Screen
	int i;		

		//Border Loading screen top/bottom
		for(i=1;i<=116;i++){
			gotoxy(i,1);
			cout << "||";
			gotoxy(i,5);
			cout << "||";
			gotoxy(i,23);
			cout << "||";
		//Border Loading screen left/right
		}
		for(i=1;i<=23;i++){
			gotoxy(1,i);
			cout << "||";
			gotoxy(116,i);
			cout << "||";
		}
		//Border Loading screen mid
		for(i=6;i<=22;i++){
			gotoxy(50,i);
			cout << "||";
		}
		
		gotoxy(28,3);
		cout << "S E L A M A T  D A T A N G  D I  P R O G A M  J A M  D I G I T A L";
		gotoxy(19,8);
		cout << "K E L O M P O K";
			printDigit(1,21,11);	
			printDigit(2,26,11);	
		gotoxy(70,8);
        cout << "A N G G O T A  K E L O M P O K" << endl;
		gotoxy(53,11);
        cout << "Asgarindo Dwiki Ibrahim Adji" << endl;
        gotoxy(53,12);
        cout << "22051204044" << endl;
        gotoxy(53,14);
        cout << "Wiwin Nur Rahmah" << endl;
        gotoxy(53,15);
        cout << "22051204026" << endl;
        gotoxy(53,17);
        cout << "Novia Putri Rahmadani" << endl;
        gotoxy(53,18);
        cout << "22051204039" << endl;
		
		
	for(i=1;i<=100;i++){
		gotoxy(i,27);
		cout << "=";
		gotoxy(i,28);
		cout << "=";
		gotoxy(1,26);
		cout << "L O A D I N G  " << i << "%";
		delay();
		if(i==100){
			gotoxy(101,27);
			cout << "================";
			gotoxy(101,28);
			cout << "================";
		}
	}
	system("cls");


	//Making Menu
		int x;
		int hour = 0,sec = 0,min = 0;
 		int h,s,m;
    
		system("cls");  
		
		//Border Menu top/bottom
		for(i=1;i<=116;i++){
			gotoxy(i,1);
			cout << "||";
			gotoxy(i,5);
			cout << "||";
			gotoxy(i,23);
			cout << "||";
		//Border Menu left/right
		}
		for(i=1;i<=23;i++){
			gotoxy(1,i);
			cout << "||";
			gotoxy(116,i);
			cout << "||";
		}
		//Border Menu mid
		for(i=6;i<=22;i++){
			gotoxy(50,i);
			cout << "||";
		}
	
		gotoxy(34,3);
		cout << "M E N U  D A R I  P R O G R A M  J A M  D I G I T A L" << endl;
			gotoxy(5,8);
			cout << "1.Clock" << endl;
			gotoxy(5,10);
			cout << "2.StopWatch" << endl;
			gotoxy(5,12);
			cout << "3.Timer" << endl;
		gotoxy(5,18);	
		cout << "Choise the number = ";
		cin >> x;
		 
		if(x==1){	
		
					gotoxy(71,8);
					cout<<"D I G I T A L   C L O C K"<<endl;	
					gotoxy(55,10);
    			    cout << "Setel Waktu Sekarang Disini" << endl;
   				    gotoxy(55,12);
					cout << "Hours/Minute/Second = ";
     				cin >> hour >> min >> sec;
        
        			gotoxy(55,14);
       				cout << "Setel Pengingat Disini" << endl;
     			    gotoxy(55,16);
					cout << "Hours/Minute/Second = ";
       				cin >> h >> m >> s;

						if(hour<24 && min<60 && sec<60){
		
							for(hour;hour<24;hour++){
								for(min;min<60;min++){
									for(sec;sec<60;sec++){
									// To clear the screen in Visual C++
									system ("cls");	
										// Border Main top/bottom
										for(i=40;i<=80;i++){
											gotoxy(i,10);
											cout << "||";
											gotoxy(i,20);
											cout << "||";
											}
										// Border Main left
										for (i=10;i<=20;i++){
										gotoxy(38,i);
										cout << "||";
											}
										// Border Main right		
										for (i=10;i<=20;i++){
										gotoxy(80,i);
										cout << "||";
										}
										
									gotoxy(38,8);	
									cout<<"||||||||| D I G I T A L  C L O C K |||||||||";
									gotoxy(38,22);
									cout<<"||||||||||||||||||||||||||||||||||||||||||||";
									gotoxy(49,12);
									cout<<"C U R R E N T  T I M E";
									gotoxy(55,15);
									cout << hour << ":" << min << ":" << sec;	
					
							// To check day or night
							if(hour<=12){
								cout << " AM";
							}
							else{
								cout << " PM";
							}
					
					// To set alarm (pengingat)
					if(hour==h && min==m && sec==s){
						for(i=1;i<=10;i++){	
						system("cls");
							// Border Alarm top/bottom
							for(i=40;i<=80;i++){
								gotoxy(i,10);
								cout << "||";
								gotoxy(i,20);
								cout << "||";	
							}	
							// Border Alarm left
							for (i=10;i<=20;i++){
								gotoxy(38,i);
								cout << "||";
							}
							// Border Alarm right
							for (i=10;i<=20;i++){
								gotoxy(80,i);
								cout << "||";
							}
							
						gotoxy(51,15);
						cout << "Is Time To Wake Up";
					
					}
				}
					 
					// This to stop loop for 1 second
					sleep(1);
				}
				sec = 0;
			}
			min = 0;
		}
		hour = 0;
	}
	else{
		// If input is wrong it will output this
		gotoxy(1,25);
		cout << "Enter Correct Time Format";
 	}		 			
  }

		else if(x==2){
 					
 					int j = 0,m = 0,d = 0;
 					int jam,menit,detik;
 					int i;
 					char retry;

					do{
						gotoxy(74,8);
						cout<<"S T O P   W A T C H"<<endl;
						gotoxy(55,10);
						cout<<"Set Time for Stop Watch "<<endl<<endl;
						gotoxy(55,12);
						cout<<"Enter Hour: ";
						cin>> jam;
						gotoxy(55,14);
						cout<<"Enter Minute: ";
						cin>> menit;
						gotoxy(55,16);
						cout<<"Enter Seconds: ";
						cin>> detik;
		
							while(1){
								system("cls");
								// Border Main top/bottom
								for(i=40;i<=80;i++){
									gotoxy(i,10);
									cout << "||";
									gotoxy(i,20);
									cout << "||";
								}
								// Border Main left
								for (i=10;i<=20;i++){
									gotoxy(38,i);
									cout << "||";
								}
								// Border Main right		
								for (i=10;i<=20;i++){
								gotoxy(80,i);
								cout << "||";
								}		
						
						gotoxy(38,8);	
						cout<<"|||| S T O P W A T C H  P R O G R E S S ||||";
						gotoxy(38,22);
						cout<<"||||||||||||||||||||||||||||||||||||||||||||";
						gotoxy(57,15);
						cout << j << ":" << m << ":" << d << endl;
						sleep(1);
		
				if( j == jam && m == menit && d == detik){
					gotoxy(53,12); 
					cout<<"Timer Stopped" << endl;
					break;
				}

				d++;
			if( d>=60 ){
				d=0;
				m++;
			}
			if( m>=60 ){
				m=0;
				j++;
			}
			if( j>=24 ){
				d = 0;
				m = 0;
				j = 0;
			}
		}
		gotoxy(46,18);
		cout<<"Continue The Stop Watch (y/n): ";
		retry = getch();
		system("cls");
		//Border Menu Top/Bottom
		for(i=1;i<=116;i++){
			gotoxy(i,1);
			cout << "||";
			gotoxy(i,5);
			cout << "||";
			gotoxy(i,23);
			cout << "||";
		//Border Menu left/right
		}
		for(i=1;i<=23;i++){
			gotoxy(1,i);
			cout << "||";
			gotoxy(116,i);
			cout << "||";
		}
		//Border Menu mid
		for(i=6;i<=22;i++){
			gotoxy(50,i);
			cout << "||";
		}
		gotoxy(42,3);
		cout << "P R O G A M  J A M  D I G I T A L";
		gotoxy(19,8);
		cout << "K E L O M P O K";
			printDigit(1,21,11);	
			printDigit(2,26,11);
			
	}while(retry=='y' || retry=='Y');
	system("cls");
	gotoxy(0,25);
	cout<< "Program Finished";
	
}
				
		else if(x==3){
					int i;
 					int hour2 = 0;  
 					int min2  = 0;
 					int sec2  = 0;
					char ulang;
					
					do{
							gotoxy(78,8);
							cout<<"T I M E R"<<endl;
							gotoxy(55,10);
							cout<<"Set Time for Timer "<<endl<<endl;
							gotoxy(55,12);
							cout<<"Enter Hour: ";
							cin>> hour2;
							gotoxy(55,14);
							cout<<"Enter Minute: ";
							cin>> min2;
							gotoxy(55,16);
							cout<<"Enter Seconds: ";
							cin>> sec2;
		 	
								while(1){
									system("cls");
									// Border Main top/bottom
									for(i=40;i<=80;i++){
										gotoxy(i,10);
										cout << "||";
										gotoxy(i,20);
										cout << "||";
									}
									// Border Main left
									for (i=10;i<=20;i++){
										gotoxy(38,i);
										cout << "||";
									}
									// Border Main right		
									for (i=10;i<=20;i++){
										gotoxy(80,i);
										cout << "||";
									}		
							
							gotoxy(38,8);	
							cout<<"||||||| C O U N T D O W N  T I M E R |||||||";
							gotoxy(38,22);
							cout<<"||||||||||||||||||||||||||||||||||||||||||||";
							gotoxy(57,15);
							cout << hour2 << ":" << min2 << ":" << sec2 << endl;
				
							Sleep(1000); 
						
					if( hour2 == 0 && min2 == 0 && sec2 == 0 ){
						gotoxy(53,12); 
						cout<<"Timer Stopped" << endl;
						break;
					}
				sec2--;
			if( sec2<0 ){
				sec2 = 59;
				min2--;
			}
			if( min2<0 ){
				min2 = 59;
				hour2--;
			}
			if( hour2<0 ){
				sec2 = 0;
				min2 = 0;
				hour2 = 0;
			}
		}
		gotoxy(42,18);
		cout<<"Do you want to use timer again (y/n): ";
		ulang = getch();
		system("cls");
		//Border Menu Top/Bottom
		for(i=1;i<=116;i++){
			gotoxy(i,1);
			cout << "||";
			gotoxy(i,5);
			cout << "||";
			gotoxy(i,23);
			cout << "||";
		//Border Menu left/right
		}
		for(i=1;i<=23;i++){
			gotoxy(1,i);
			cout << "||";
			gotoxy(116,i);
			cout << "||";
		}
		//Border Menu mid
		for(i=6;i<=22;i++){
			gotoxy(50,i);
			cout << "||";
		}
		gotoxy(42,3);
		cout << "P R O G A M  J A M  D I G I T A L";
		gotoxy(19,8);
		cout << "K E L O M P O K";
			printDigit(1,21,11);	
			printDigit(2,26,11);
			
	}while(ulang=='y' || ulang=='Y');
	system("cls");
	gotoxy(0,25);
	cout<< "Program Finished";

	}
	else{
		gotoxy(1,25);
		cout <<"Number doesn't exist, please enter the number 1 to 3" << endl;
	}
}

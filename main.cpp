#include <iostream>
#include "event.h"
using namespace std;
	//Varsayýlan 9 event var sistem içersinde eklenebýlýr
	event record[]={
	event("Tarkan", 1, 1400, 100, 150,0),
	event("Hadise", 1, 1600, 75, 125,0),
	event("Teoman", 1, 1800, 50, 200,0),
	event("Hobbit",2,1400,100,150,0),
	event("Moonfall",2,1600,75,125,0),
	event("Avatar",2,1800,50,200,0),
	event("Hamlet",3,1400,100,150,0),
	event("Faust",3,1600,75,125,0),
	event("Seagull",3,1800,50,200,0)
	}; 
//Aralýk dýþý seçim yapýlýr aralýk verme
void error(int end) {
	system("cls");
	cout << "                        PLEASE INPUT BETWEEN : " << "1 - " << end << endl;
}
//Aralýk belirsiz ken hatalý giriþ yapýlýrsa
void error() {
	system("cls");
	cout << "                        Please try again" << endl;
}
//istenen katagoriye göre event leri listeleme
void filter(int number_of_event =1, int catagory = 1,event record[99] = record) {
	for (int i = 0; i <= number_of_event; i++) {
		if (record[i].getCatagory() == catagory) {
			cout << "                     (" << i << ")" <<endl;
		    record[i].infos();
			cout << endl;

		}
	}
}
// Eðer event eklenirken hour kýsmýna float deðiþken girilirse sistem integera çeviriyor
template <typename T> int organise_hour(T hour) {
	if (hour < 100) {
		hour *= 100;
			return hour;
	}
	else {
		return hour;
	}

}
// Koltuk daha önce alýnmý customerlar arasýndan kontrol ediyor
int dolumu(customer arr[99], int customer_counter= 1, int select_event =1 , int select_seat=1) {
	for (int i = 0; i <= customer_counter - 1; i++) {
		if (arr[i].geteventNumber() == select_event) {
			if (arr[i].getseatNumber() == select_seat) {
				return 1;
			}
		}
	}
	return 0;
}
// Capacity e göre koltuk seçimi için sahne oluþturma fonksiyonu koltuk doluysa kýrmýzý yazdýrýyor
void sahne(int capacity,customer arr[99],int customer_counter,int select_event) {
	cout << "-----------------------------------------------STAGE------------------------------------------------" << endl;
	for (int i = 1; i <= capacity; i++) {
		if (dolumu(arr, customer_counter, select_event, i)==1) {
			if (i < 10) {
				cout << "\x1b[31m|  " << i << "|\x1b[0m";
			}
			else if (i < 100) {
				cout << "\x1b[31m| " << i << "|\x1b[0m";
				if (i % 20 == 0) {
					cout << endl;
				}
			}
			else {
				cout << "\x1b[31m|" << i << "|\x1b[0m";
				if (i % 20 == 0) {
					cout << endl;
				}
			}
		}
		else {
			if (i < 10) {
				cout << "|  " << i << "|";
			}
			else if(i<100){
				cout << "| " << i << "|";
				if (i % 20 == 0) {
					cout << endl;
				}
			}
			else {
				cout << "|" <<  i << "|";
				if(i%20 ==0){
					cout << endl;
				}
			}

		}
	}

}
int main(void) {
	int select_role;
	int mSelect1;
	string mId;
	int mPin;
	string add_string;
	int long long add_int;
	float add_float;
	int event_counter = 8;
	int finish;
	int select_event;
	int select_catagory;
	int select_seat;
	customer arr[99];
	int customer_counter = 0;
	int total;
	int mSelect2;
	int ctrl1=0,ctrl2=0,ctrl3=0,ctrl4=0,ctrl5=0,ctrl6=0,ctrl7=0,ctrl8=0,ctrl9=0,ctrl10=0,ctrl11=0,ctrl12=0,ctrl13=0;
	// Yönetici bilgileri
	manager Arif("Arif", 7412);
	//Ekran 1 giriþ ekraný
screen1:
	system("cls");
	while(ctrl1!=1) {
		cout << "************************************************************************************" << endl;
		cout << "                        WELCOME TO TICKET RESERVATION SYSTEM                        " << endl;
		cout << "************************************************************************************" << endl;
		cout << "                                  (1) RESERVATION PART" << endl << endl;
		cout << "                                  (2) MANAGEMENT PART" << endl << endl;
		cout << "                                  (3) CHECK RESERVED TICKET" << endl << endl;
		cout << "                                  (4) EXIT" << endl << endl;
		cout << "                                  Please select a role : ";
		cin >> select_role;
		if (select_role == 2) {
			system("cls");
			// yönetici giriþ
			while (ctrl2!=1) {
				cout << "------------------MANAGER IDENTITY CONTROL------------------" << endl;
				cout << "                  Please verify your identity" << endl << endl;
				cout << "                  INPUT (-1) FOR RETURN MAIN PAGE" << endl << endl;
				cout << "                        Manager's ID : ";
				cin >> mId;
				if (mId == "-1") {
					goto screen1;
				}
				cout << endl << "                        Manager's PIN : ";
				cin >> mPin;
				if (mPin == -1) {
					goto screen1;
				}
				//yönetici doðrulama
				if (mId == Arif.getId() && mPin == Arif.getPin()) {
					system("cls");
					//Yönetici ne yapmak istiyor
				mloginscreen:
					system("cls");
					while (ctrl3!=1) {
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << "                            |MANAGMENT|" << endl;
						cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
						cout << "                        (1) ADD NEW EVENT" << endl << endl;
						cout << "                        (2) EDIT EVENTS" << endl << endl;
						cout << "                        (3) CHECK SOLD TICKETS" << endl << endl;
						cout << "                        (4) GO BACK" << endl << endl;
						cout << "                        Enter your selection : ";
						cin >> mSelect1;
						if (mSelect1 == 1) {
							cout << "                        Are you sure to add new event to system ? (Y/N) :";
							cin >> add_string;
							if (add_string == "N" || add_string == "n") {
								error();
							}
							else if (add_string == "Y" || add_string == "y") {

							addeventscreen:
								system("cls");
								//event ekleme sayfasý
								event_counter += 1;
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                            |MANAGMENT|" << endl;
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                      Name of event : "; cin >> add_string;  record[event_counter].setName(add_string);
								cout << "                      (1) - Concert , (2) - Cinema , (3) - Theatre" << endl;
								cout << "                      Catagory of event (1,2,3): "; cin >> add_int; record[event_counter].setCatagory(add_int);
								cout << "                      Hour of event (HHMM): "; cin >> add_float; add_int=organise_hour(add_float); record[event_counter].setHour(add_int);
								cout << "                      Capacity of event : "; cin >> add_int; record[event_counter].setCapacity(add_int);
								cout << "                      Price for ticket : "; cin >> add_int; record[event_counter].setPrice(add_int);
								cout << endl;
								system("cls");
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                            |MANAGMENT|" << endl;
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                      Here is summary : " << endl;
								record[event_counter].infos();
								cout << "                      Event added succesfully..." << endl << endl;

								cout << "                      (1) Add more event" << endl << endl;
								cout << "                      (2) Back" << endl << endl;
								cout << "                      Enter selection : ";
								cin >> finish;
								if (finish == 1) {
									goto addeventscreen;
								}
								else if (finish == 2) {
									goto mloginscreen;
								}
								else {
									error(2);
								}
							}
							else { error(); }
						}
						else if (mSelect1 == 2) {
							// event duzenleme 
							system("cls");
							while (ctrl4!=1) {
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                                         |MANAGMENT|" << endl;
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "Enter catagory of event that you want to edit : ";
								cout << "(1) Concert" << endl << endl;
								cout << "                                                (2) Cinema" << endl << endl;
								cout << "                                                (3) Theatre" << endl << endl;
								cout << "                                                (4) Back" << endl << endl;
								cout << "                                                :";
								cin >> select_catagory;
								system("cls");
								if (select_catagory == 4) {
									goto mloginscreen;
								}
								else if (select_catagory != 1 && select_catagory != 2 && select_catagory != 3) {
									error(4);
								}
								else {
									while (ctrl5!=1) {
										cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
										cout << "                            |MANAGMENT|" << endl;
										cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
										filter(event_counter, select_catagory, record);
										cout << endl << "                     (-1) Go back" << endl;
										cout <<         "                     Enter event number : ";
										cin >> select_event;
										if (select_event == -1) {
											system("cls");
											break;
										}
										else if (record[select_event].getCatagory() != select_catagory) {
											error();
										}
										else if (record[select_event].getSold() == 1) {
											error();
											cout << "You cannot edit this event already sold a ticket" << endl << endl;
										}
										else {
											system("cls");
											while (ctrl6!=1) {
												// eventleri editleme
												cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
												cout << "                            |MANAGMENT|" << endl;
												cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
												cout << "                      (1) Name of event" << endl << endl;
												cout << "                      (2) Catagory of event" << endl << endl;
												cout << "                      (3) Hour of event" << endl << endl;
												cout << "                      (4) Capacity of event" << endl << endl;
												cout << "                      (5) Price of event" << endl << endl;
												cout << "                      (6) Go back" << endl << endl;
												cout << "                      Enter feature that you want to edit : ";
												cin >> mSelect2;
												system("cls");
												cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
												cout << "                            |MANAGMENT|" << endl;
												cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
												if (mSelect2 == 1) {
													cout << "                      Old name : " << record[select_event].getName() << endl;
													cout << "                      New name : "; cin >> add_string; record[select_event].setName(add_string);
												}
												else if (mSelect2 == 2) {
													cout << "                      Old catagory : " << record[select_event].getCatagory() << endl;
													cout << "                      New catagory : "; cin >> add_int; record[select_event].setCatagory(add_int);
												}
												else if(mSelect2 ==3){
													cout << "                      Old hour : " << record[select_event].getHour() << endl;
													cout << "                      New hour : "; cin >> add_int; record[select_event].setHour(add_int);
												}
												else if(mSelect2==4){
													cout << "                      Old capacity : " << record[select_event].getCapacity() << endl;
													cout << "                      New capacity : "; cin >> add_int; record[select_event].setCapacity(add_int);
												
												}
												else if(mSelect2==5){
													cout << "                      Old price : " << record[select_event].getPrice() << endl;
													cout << "                      New price : "; cin >> add_int; record[select_event].setPrice(add_int);
												}
												else if(mSelect2==6){
													system("cls");
													break;
												}
												else {
													error();
												}
												cout << "                      Successfully changed" << endl << endl;
												cout << "                      (1) Exit" << endl << endl;
												cout << "                      (2) Continue to edit same event" << endl << endl;
												cout << "                      (3) Return to main page" << endl;
												cout << "                      :";
												cin >> finish;
												if (finish == 1) {
													exit(0);
												}
												else if (finish == 2) {
													system("cls");
												}
												else if (finish == 3) {
													goto screen1;
												}
												else {
													error(3);
												}
											}
										}
									}
								}
							}
						}
						// Satýþlarý görme 
						else if (mSelect1 == 3) {
							system("cls");
							while (ctrl7!=1) {
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								cout << "                            |MANAGMENT|" << endl;
								cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~" << endl;
								total = 0;
								for (int j = 0; j <= customer_counter - 1; j++) {
									arr[j].infos(1);
									cout << endl;
									total += arr[j].getPaid();
								}
								cout << "                      Total income :" << total << "TL" << endl;
								cout << endl << endl << "                      (1) EXIT" << endl;
								cout << endl << "                      (2) BACK" << endl;
								cout << "                      :";
								cin >> finish;
								if (finish == 1) {
									exit(0);
								}
								else if (finish == 2) {
									system("cls");
									goto mloginscreen;
								}
								else {
									error(2);
								}
							}
						}
						else if (mSelect1 == 4) {
							system("cls");
							goto screen1;
						}
						else {
							error(4);
						}
					}
				}
				else {
					error();
				}
			}
		}
		else if (select_role == 1) {
			system("cls");
			//müsteri rezervasyon ekraný
			while (ctrl8!=1) {
				cout << "----------------------------------------------------------------" << endl;
				cout << "                      |CATAGORY SELECTION|" << endl;
				cout << "----------------------------------------------------------------" << endl;
				cout << "                      (1) CONCERT" << endl << endl;
				cout << "                      (2) CINEMA" << endl << endl;
				cout << "                      (3) THEATRE" << endl << endl;
				cout << "                      (4) BACK" << endl;
				cout << "                      :";
				cin >> select_catagory;
				if (select_catagory == 4) {
					goto screen1;
				}
				else if(select_catagory!=1 && select_catagory != 2 && select_catagory != 3){
					error(4);
				}
				else {
				system("cls");
				while (ctrl9!=1) {
					// eventleri yazdýrma seçilen katagori ye göre
					cout << "----------------------------------------------------------------" << endl;
					cout << "                      |EVENT SELECTION|" << endl;
					cout << "----------------------------------------------------------------" << endl;
					filter(event_counter, select_catagory);
					cout << "                     (-1)  BACK" << endl;
					cout << "                      :";
					cin >> select_event;
					if (select_event == -1) {
						system("cls");
						break;
						
					}
					else if (record[select_event].getCatagory() != select_catagory) {
						error();
					}
					else {
					system("cls");
					while (ctrl10!=1) {
						cout << "----------------------------------------------------------------" << endl;
						cout << "                      |SEAT SELECTION|" << endl;
						cout << "----------------------------------------------------------------" << endl;
						sahne(record[select_event].getCapacity(), arr, customer_counter, select_event);
						cout << endl << "(-1) GO Back       :" << endl;
						cout << endl << "Red seats are full   :" << endl;
						cout << endl << "Please select a seat : ";
						cin >> select_seat;
						if (select_seat == -1) {
							system("cls");
							break;
						}
						if (select_seat <1 || select_seat >record[select_event].getCapacity()) {
							system("cls");
							error();

						}
						else if (dolumu(arr, customer_counter, select_event, select_seat) == 1) {
							system("cls");
							cout << "                      this seat is full:" << select_seat << endl;
							error();
						}
						else {
							cout << "You selected seat :|" << select_seat << "| are you sure ? (Y)/(N) : ";
							cin >> add_string;
							if (add_string == "N" || add_string == "n") {
								error();
							}
							else if (add_string == "Y" || add_string == "y") {
								system("cls");
								while (ctrl11!=1) {
									cout << "----------------------------------------------------------------" << endl;
									cout << "                      |REGISTRATION|" << endl;
									cout << "----------------------------------------------------------------" << endl;
									cout << "                      Please input your name : ";
									cin >> add_string;
									arr[customer_counter].setName(add_string);
									cout << "                      Your phone number : ";
									cin >> add_int;
									arr[customer_counter].seteventName(record[select_event].getName());
									arr[customer_counter].seteventNumber(select_event);
									arr[customer_counter].setseatNumber(select_seat);
									arr[customer_counter].setPhone_number(add_int);
									arr[customer_counter].setPaid(record[select_event].getPrice());
									record[select_event].setSold(record[select_event].getSold()+1);
									system("cls");
									cout << "----------------------------------------------------------------" << endl;
									cout << "                      |REGISTRATION|" << endl;
									cout << "----------------------------------------------------------------" << endl;
									cout << "Your reservation has been completed succesfully here is your summary" << endl;
									arr[customer_counter].infos(1);
									customer_counter += 1;
									cout << "                      (1) Exit" << endl << endl;
									cout << "                      (2) Return to main page" << endl << endl;
									cin >> finish;
									if (finish == 1) {
										exit(0);
									}
									else if (finish == 2) {
										goto screen1;
									}
									else {
										error(2);
									}
								}
							}
							else {
								error();
							}
						}
					}
					}

				}
				}
			}
		}
		else if (select_role == 3) {
			system("cls");
			while (ctrl12!=1) {
				cout << "------------------CUSTOMER IDENTITY CONTROL------------------" << endl << endl;
				cout << "                  Please verify your identity" << endl << endl;
				cout << "                  INPUT (-1) FOR RETURN MAIN PAGE" << endl << endl;
				cout << "                  Name : ";
				cin >> add_string;
				if (add_string == "-1") {
					goto screen1;
				}
				cout << "                  Phone number : ";
				cin >> add_int;
				if (add_int == -1) {
					goto screen1;
				}
				cout << endl << endl;
				bool a = 0;
				for (int n = 0; n <= customer_counter; n++) {
					if(add_string == arr[n].getName() && add_int == arr[n].getPhone_number() ){
						arr[n].infos(1);
						a = 1;
						}
						
					}
				if(a==0){
					cout << "                      Customer informations are incorrect" << endl;
				}
				while (ctrl13!=1) {
					cout << "                      (1) EXIT" << endl << endl;
					cout << "                      (2) RETURN TO MAIN PAGE" << endl << endl;
					cout << "                      : ";
					cin >> finish;
					if (finish == 1) {
						exit(0);
					}
					else if (finish == 2) {
						goto screen1;
					}
					else {
						error(2);
					}
				}
				}

			}
		else if (select_role == 4) {
			ctrl1=1;
		}
		else {
			error(4);
		}
	}
}


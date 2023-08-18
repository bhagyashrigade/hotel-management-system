#include<iostream>
using namespace std;
int main()
{
	int quant;
	int choice;
	//quantity
	int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;
	//food items sold
	int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;
	//total price of items
	int total_rooms=0, total_pasta=0, total_burger=0, total_noodles=0, total_shake=0, total_chicken=0;
	cout<<"  ********************** || WELCOME TO HOTEL PARIVAR || *********************  \n\n";
	cout<<endl;
	
	cout<<" * Quantity of items we have *\n";
	cout<<"\n1. Rooms avaliable -> ";
	cin>>Qrooms;
	cout<<"\n2. Quantity of pasta -> ";
	cin>>Qpasta;
	cout<<"\n3. Quantity of burger -> ";
	cin>>Qburger;
	cout<<"\n4. Quantity of noodles -> ";
	cin>>Qnoodles;
	cout<<"\n5. Quantity of shake -> ";
	cin>>Qshake;
	cout<<"\n6. Quantity of chicken -> ";
	cin>>Qchicken;
	cout<<"\n-----------------------------------------------------------";
	cout<<endl;
	
	m:
	cout<<"\n\t\t\t||*** please select from the menu option***|| ";
	cout<<"\n\n1. Rooms";
	cout<<"\n\n2. Pasta";
	cout<<"\n\n3. Burger";
	cout<<"\n\n4. Noodles";
	cout<<"\n\n5. Shake";
	cout<<"\n\n6. Chicken";
	cout<<"\n\n7. information regarding sales and collection ";
	cout<<"\n\n8. Exit";
	cout<<endl;
	cout<<"___________________________________________";
	cout<<"\n\n please enter your choice! ";
	cout<<"\n_________________________________________";
	cin>>choice;
	
	
	switch(choice)
	
	{
		case 1:
			cout<<"\n\n enter the numer of rooms you want:";
			cin>>quant;
			if(Qrooms-Srooms >=quant)
			{
				Srooms=Srooms+quant;
				total_rooms= total_rooms+quant*1200;
				cout<<"\n\n\t\t"<<quant<<"rooms have been alloted to you";
				
			
			}
			else{
				cout<<"\n\t only"<<Qrooms-Srooms<<"rooms remaining in hotel";
				break;
			}
				case 2:
			         cout<<"\n\n enter pasta Quantity:";
			         cin>>quant;
			         if(Qpasta-Spasta>=quant)
			         {
			         	Spasta=Spasta+quant;
				        total_pasta=total_pasta+quant*250;
				        cout<<"\n"<<quant <<" pasta is the order!";
					 }	
			
			else{
				cout<<"\n\t only"<<Qpasta-Spasta<<"pasta remaining in hotel";
				break;
			}
			
			
				case 3:
			         cout<<"\n\n enter Burger Quantity :";
			         cin>>quant;
			         if(Qburger-Sburger>=quant)
			         {
			         		Sburger=Sburger+quant;
				            total_burger=total_burger+quant*120;
				            cout<<"\n\n\t"<<quant<<" burger is the order! ";
					 }
					 else{
				           cout<<"\n\t only"<<Qburger-Sburger<<"burger remaining in hotel";
				           break;
			
			
				
		}
			
				
				
				case 4:
			         cout<<"\n\n enter Noodles Quantity:";
			         cin>>quant;
			         if(Qnoodles-Snoodles>=quant)
			         {
			         	Snoodles=Snoodles+quant;
				        total_noodles=total_noodles+quant*250;
				        cout<<"\n\n\t"<<quant<<" noodles is the order! ";
					 }
					 else{
				          cout<<"\n\t only"<<Qnoodles-Snoodles<<"noodles remaining in hotel";
				          break;
			
				
			}
			
			
				
				case 5:
			         cout<<"\n enter Shakes Quantity:";
			         cin>>quant;
			         if(Qshake-Sshake>=quant)
			         {
			         	Sshake=Sshake+quant;
				        total_shake=total_shake+quant*250;
				        cout<<"\n\n\t"<<quant<<" shakes is the order! ";
					 }
					 else{
				          cout<<"\n\t only"<<Qrooms-Sshake<<"shakes remaining in hotel";
				          break;
			
				
				
			
		}
				
				
				case 6:
			         cout<<"\n enter Chicken Quantity:";
			         cin>>quant;
			         if(Qchicken-Schicken>=quant)
			         {
			         	Schicken=Schicken+quant;
				        total_chicken=total_chicken+quant*150;
				        cout<<"\n\n\t"<<quant<<" chicken is the order! ";
					 }
			
				
				
			
			else{
				cout<<"\n\t only"<<Qrooms-Schicken<<"chicken remaining in hotel";
				break;
				
				
				case 7:
					cout<<"\n\t\t  Details of sales and collection";
					cout<<"\n\n Number of rooms we had "<<Qrooms;
					cout<<"\n\n Number of rooms we gave for rent "<<Srooms;
					cout<<"\n\n Remaining rooms "<<Qrooms-Srooms;
					cout<<"\n\n Total rooms collection for the day "<<total_rooms;
					
					
					
				    cout<<"\n\n Number of pasta we had "<<Qpasta;
				    cout<<"\n\n Number of pasta we sold "<<Spasta;
				    cout<<"\n\n Remaining pasta "<<Qpasta-Spasta;
				    cout<<"\n\n Total pasta collection for the day "<<total_pasta;
				
					
				
			
				
				    cout<<"\n\n Number of burger we had "<<Qburger;
				    cout<<"\n\n Number of burger we sold "<<Sburger;
				    cout<<"\n\n Remaining burger "<<Qburger-Sburger;
				    cout<<"\n\n Total burger collection for the day "<<total_burger;
				
				
				
				    cout<<"\n\n Number of noodles we had "<<Qnoodles;
				    cout<<"\n\n Number of noodles we sold "<<Snoodles;
				    cout<<"\n\n Remaining noodles "<<Qnoodles-Snoodles;
				    cout<<"\n\n Total noodles collection for the day "<<total_noodles;
				
				
				    cout<<"\n\n Number of shakes we had "<<Qshake;
				    cout<<"\n\n Number of shakes we sold "<<Sshake;
				    cout<<"\n\n Remaining shakes "<<Qshake-Sshake;
				    cout<<"\n\n Total shakes collection for the day "<<total_shake;
				
				
				
				    cout<<"\n\n Number of chicken we had "<<Qchicken;
				    cout<<"\n\n Number of chicken we sold "<<Schicken;
				    cout<<"\n\n Remaining chicken "<<Qchicken-Schicken;
				    cout<<"\n\n Total chicken collection for the day "<<total_chicken;
				
				
				case 8:
					exit(0);
					default:
						cout<<"\n please select the number mentioned above!";
		}

   
	goto m;

}
}
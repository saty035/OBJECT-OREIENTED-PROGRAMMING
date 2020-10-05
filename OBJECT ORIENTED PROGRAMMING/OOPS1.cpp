//Billing System Using C++
//Object Oriented Programming
//Topic covered : Classes, Scope resolution, Functions, Access Modifiers
#include<iostream>
#include<conio.h>

using namespace std;



class items
{
	int itemcode[50];      // private  (these are intance member varible)
	float itemprice[50];   // private 
	int count;             // private 

	public:                //public
		void CNT()
		{
			count=0;
		}
		void getitem();           //these function can access private members
		void displaysum();
		void remove();
		void displayitems();
};

void items::getitem()            //Scope resolution
{
	cout<<"enter the item code : ";
	cin>>itemcode[count];

	cout<<"\nenter the cost : ";
	cin>>itemprice[count];
	count++;

}

void items::displaysum()              //Scope resolution
{
	float sum=0;
	for(int i=0;i<count;i++)
	{
		sum=sum+itemprice[i];
	}
	cout<<"\ntotal : "<<sum<<endl;

}

void items::remove()                  //Scope resolution
{
	int a;
	cout<<"enter item code : ";
	cin>>a;
	for(int i=0;i<count;i++)
	{
		if(itemcode[i]==a)
		{
			itemprice[i]=0;
		}
	}
}

void items:: displayitems()                   //Scope resolution
{
	cout<<"\nitemcode	itemprice\n\n";
	for(int i=0;i<count;i++)
	{
		cout<<"\n"<<itemcode[i];
		cout<<"		"<<itemprice[i];
	}
	cout<<"\n";
}

int main()
{
	items order;   // order is the object
	order.CNT();

	int choice;
	while(1)
	{
		cout<<"********select********";   //indexing
		cout<<"\n1. add an item.";
		cout<<"\n2. display total.";
		cout<<"\n3. delete an item";
		cout<<"\n4. display all items and price";
		cout<<"\n5. exit";
		cout<<"\n your choice : ";
		cin>>choice;
		switch (choice)     // switchcase
		 {
			case 1: order.getitem(); break;
			case 2: order.displaysum(); break;
			case 3: order.remove(); break;
			case 4: order.displayitems(); break;
			case 5: exit(1);
			default: cout<<"select correct option";

		}
	}
	getch();
}

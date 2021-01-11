#include<iostream>
#include <stdlib.h>
#include <string>
#include<Windows.h>
using namespace std;
struct node
{
    string name, number,address, disease, gender, description,age;
    node* next;
};
node* head = NULL, * newnode, * temp;
int len = 0;
void add()
{
    newnode = new node;
    
	cout << "Enter Patient number ";
    cin >> newnode->number;
    cout << "Enter Patient Name ";
    cin >> newnode->name;
    cout << "Enter Patient Age ";
    cin >> newnode->age;
    cout << "Enter Patient Address ";
    cin >> newnode->address;
    cout << "Enter Disease ";
    cin >> newnode->disease;
    cout << "Enter Gender ";
    cin >> newnode->gender;
    cout << "Enter Description ";
    cin >> newnode->description;
	cout<<"-----Patient Data Added-----"<<endl;
    newnode->next = NULL;
    if (head == NULL)
    {
        head = newnode;
        temp = newnode;
    }
    else
    {
        temp->next = newnode;
        temp = newnode;
    }
}
void display()
{
    if (head == NULL)
    {
        cout << "Patient list is Empty " << endl;
    }
    else
    {
        node* trav = head;
        while (trav != NULL)
        
        {	cout << "Patient Number :" << trav->number << endl;
            cout << "Patient Name :" << trav->name << endl;
			cout << "Patient Age :" << trav->age << endl;
			cout << "Patient Address :"<<trav->address << endl;
   			cout << "Patient Disease :"<<trav->disease << endl;
    		cout << "Patient Gender :"<<trav->gender << endl;
    		cout << "Patient Description :"<<trav->description << endl;
   			cout << "Patient Number :" << trav->number << endl;
            cout<<""<<endl;
			
			
			
			
			
			trav = trav->next;
            len++;
        }
        cout << "Total Patient in the list = " << len << endl;
    }
}
void search_patient()
{
    node* search_node = head;
    string srch;
    int count = 1;
    cout << "Enter your Patient number you want to search ";
    cin >> srch;
    bool found = false;
    if (head == NULL)
    {
        cout << "\nList is Empty " << endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if (srch == search_node->name || srch == search_node->number)
            {	
				cout << "Patient number:" << search_node->number << endl;
                cout << "Patient name :" << search_node->name << endl;
                cout << "Patient Age :" << search_node->age << endl;
				cout << "Patient Address :"<<search_node->address << endl;
   				cout << "Patient Disease :"<<search_node->disease << endl;
    			cout << "Patient Gender :"<<search_node->gender << endl;
    			cout << "Patient Description :"<<search_node->description << endl;
               
				
				
				found = true;
                break;
            }
            search_node = search_node->next;
            count++;
        }
    }
    if (found == true)
    {

 

        cout << "\t\tIndex of the Patient= " << count << endl;
    }
    else
    {
        cout << "Desired Patient not found " << endl;
    }
}
void del () 
{
    node *search_node = head, *next_node , *temp = head;
    string srch;
    int count = 0;
    cout<<"Enter Patient number that you want to delete ";
    cin>>srch;
    bool found = false;
    if(head == NULL)
    {
        cout<<"\nList is Empty "<<endl;
    }
    else
    {
        while (search_node != NULL)
        {
            if(srch == search_node->name || srch == search_node->number)
            {
                if(count == 0) 
              {
              temp = head;
              head = head->next;
               delete temp;
              cout<<"\n\n\t\tPatient data has been deleted\n\n "<<endl;
    }


    else
    {
        for (int i = 1 ; i<count ; i++)
        {
                temp= temp->next;

        }
        next_node = temp->next;
       temp->next = next_node->next;
        delete next_node;
        cout<<"\n\n\t\tPatient data has been deleted\n\n"<<endl;
    }


        found =true;
        break;
        }

            search_node = search_node->next;
             count++;

        }
    }
    if(found == true)
    {

        cout<<"\t\tIndex of the Patient = "<<count+1<<endl;
    }
    else
    {
        cout<<"\n\t\tDesired Patient not fount "<<endl;
    }
}

void clear_all()
{
    if (head == NULL)
    {
        cout << "List is Empty " << endl;
    }
    else
    {
        temp = head;
        while (head != NULL)
        {
            head = head->next;
            delete temp;
        }
        cout << "ALL Patient list has been deleted " << endl;
    }
}
void menu()
{		cout<<""<<endl;
cout<<""<<endl;
    cout << "\t -> Enter 1 To Add Patient " << endl;
    cout << "\t -> Enter 2 To Display All Patient List " << endl;
    cout << "\t -> Enter 3 To Search Patient " << endl;
    cout << "\t -> Enter 4 To Delete Patient Record" << endl;
    cout << "\t -> Enter 5 To Clear All Record " << endl;
}

void hospital()


{
	
	cout<<"************************************************************************************************************************"<<endl;
	cout<<" "<<endl;
	cout<<"\t\t\t\t\t\tWELCOME TO HOSPITAL MANAGEMENT SYSTEM  "<<endl;
	cout<<" "<<endl;
cout<<"************************************************************************************************************************"<<endl;
}

void intro()
{	cout<<"************************************************************************************************************************"<<endl;
	cout<<"\t\t\t\t\t\t\tINTRODUCTION "<<endl;
	cout<<" "<<endl;
cout<<"************************************************************************************************************************"<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t\t\t\t     Name: Mahnoor Qamar "<<endl;
	cout<<""<<endl;
	cout<<"************************************************************************************************************************"<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t\t\t\t\tSAP ID: 14695 "<<endl;
	cout<<""<<endl;
	cout<<"************************************************************************************************************************"<<endl;
	cout<<""<<endl;
	cout<<"\t\t\t\t\t\tSubmitted to : Sir Fawad & Sir Rana "<<endl;
	cout<<""<<endl;
	cout<<"************************************************************************************************************************"<<endl;

	
	
}
void lod()
{
	int Count;
	cout<<"LOADING......";
	for(Count=0;Count<40;Count++)
	{
		
		
		cout<<char(219);
		if(Count<25)
		{
			
			system("Color FA");
			Sleep(15);
			
		}

		else if(Count<30)
		{
			
			system("Color FB");
			Sleep(120);
			
		}
		else if(Count<40)
		{
			
			system("Color FC");
			Sleep(15);
			
		}

	}
	
}

int main()
{
	lod();
    system("CLS");
    int op;
    system("color 0B");	
	hospital();
	lod();
    system("CLS");
	intro();
    lod();
    system("CLS");
	menu();
	while (true)
    {
        cin >> op;
        switch (op)
        {
        case 1:
        		lod();
    system("CLS");
          
            add();
            lod();
    system("CLS");
    menu();
            break;
        case 2:
            len = 0;
            lod();
    system("CLS");
			display();
            menu();
            break;
        case 3:
        	lod();
    system("CLS");
            search_patient();
            menu();
			break;
        case 4:
        	lod();
    system("CLS");
          
		    del();
            menu();
			break;
            
        case 5:
        	lod();
    system("CLS");
          	
            clear_all();
            menu();
			
			break;
        default:
            cout << "Invalid Option " << endl;
        }
    }
}

#include<iostream>
#include<conio.h>
#include<windows.h>
using namespace std;
class node{
	private:
	string data;
	int price;
	int i;
	
	node *head,*next,*pre,*tail,*ptr;
	public:
	node():head(0),next(0),pre(0),tail(0),ptr(0),i(0){
		
	}
	void create_node(string x,int pric){
		node *newnode=new node();
		if(head==0&&tail==0){
			i++;
		newnode->data=x;
		newnode->price=pric;
		newnode->next=NULL;
		newnode->pre=NULL;
		head=newnode;
		tail=newnode;
		ptr=newnode;
		cout<<"SUCCESSFULL "<< newnode->data;
		}
		
		else {
			i++;
			newnode->data=x;
			newnode->price=pric;
			tail->next=newnode;
			newnode->pre=tail;
			tail=newnode;
			newnode->next=NULL;
		
		}
	}
	void delet_at_bg(){
		node *temp;
		temp=NULL;
		temp=head;
		if(head==NULL&&tail==NULL){
			cout<<"list is empty"<<endl;
			
			
		}
		else if(head==tail){
			head=NULL;
	        tail=NULL;
	        cout<<"delete itam is ("<<temp->data<<" )";
		}else{
		temp=head;
        head=head->next;
        head->pre=NULL;
        system("cls");
        cout<<"delete itam is ("<<temp->data<<" )";
		delete(temp);
    
	
		}
	}
	void delete_end(){
		node *temp;
		if(head==0&&tail==0){
			cout<<"not list";
		}
		else if(head==0&&tail ==0){
			cout<<"list is empty\n";
		}
		else{temp=tail;
			tail=tail->pre;
			tail->next=NULL;
			system("cls");
			cout<<"delete product ("<<temp->data<<")";
			delete(temp);
		}
	}
	void delte_spa(string search){
    while(ptr!=NULL){
	if(ptr->data==search){
		break;
	}else
    ptr=ptr->next;	
	}
	if(ptr==0){
		cout<<"this product is not have";
	}
	else {
		node *temp;
		temp=ptr;
		
		ptr->next->pre=ptr->pre;
        ptr->pre->next=ptr->next;
        cout<<"delete product ("<<temp->data<<")";
        delete(temp);

	}	
		
	}
	void in_bg(string product,int pric){
		node *newnode=new node();
		if(head==0&&tail==0){
			newnode->data=product;
			newnode->price=pric;
			newnode->pre=NULL;
			newnode->next=NULL;
			head=tail=newnode;
			system("cls");
			i++;
			cout<<newnode->data <<" successfull enter in list"<<endl;
		}
		else {
			i++;
			newnode->data=product;
			newnode->price=pric;
			newnode->next=head;
			head=newnode;
			newnode->pre=NULL;
			ptr=newnode;// its help for display;
			system("cls");
			cout<<newnode->data <<" successfully enter in list"<<endl;			
		}
	}
	
	void in_end(string product,int pric){
		
		node *newnode=new node();
	if(head==0&&tail==0){
			newnode->data=product;
			newnode->price=pric;
			newnode->pre=NULL;
			newnode->next=NULL;
			head=tail=newnode;
			i++;
			system("cls");
			cout<<newnode->data <<" successfull enter in list";
		}
		else{
		    newnode->data=product;
		    newnode->price=pric;
		    i++;
		    newnode->pre=tail;
			tail->next=newnode;
			newnode->next=NULL;
			tail=newnode;
			
			system("cls");
			cout<<newnode->data <<" successfull enter in list";
		}
	}
	void spa_in(string product,int pric,string postion){
		node *newnode=new node();
		if(head==0&&tail==0){
			i++;
			newnode->data=product;
			newnode->price=pric;
			newnode->pre=NULL;
			newnode->next=NULL;
			head=tail=newnode;
			system("cls");
			cout<<newnode->data <<" successfull enter in list";
		}
		
		else{
			i++;
			ptr=head;
		   while(ptr!=NULL){
		   	if (ptr->data==postion){
		   		newnode->data=product;
		   		newnode->price=pric;
		   		
		   	    newnode->next=ptr->next;
				newnode->pre=ptr;
				ptr->next->pre=newnode;
				ptr->next=newnode;
				
			    system("cls");
		    	cout<<newnode->data <<" successfull enter in list";
				break;
			   }
			   ptr=ptr->next;}
			   
			
			
		   
		}
		if(ptr==NULL){
				cout<<"this itam is not in list "<<endl<<"this position is wrong";
			}
	}
	void display(){
	    if(head==0&&tail ==0){
			cout<<"list is empty\n";
		}else{
		ptr=head;
		while(ptr!=NULL){
			cout<<ptr->data<<" "<<ptr->price<<endl;;
			ptr=ptr->next;
		}ptr=head;
		}
	}
	void sort_data(){
		node *i;
		i=head;
		node *j;
		j=head;
		string temp1;
		int RS;
        while (i==NULL){
        	cout<<"list is empty \n";
        	break;
		}
		while(i!=NULL){
			j=i->next;
			while(j!=NULL){
				if(i->data>j->data){
				RS=i->price;
				i->price=j->price;
				j->price=RS;
			    temp1=i->data;
				i->data=j->data;
				j->data=temp1;}
				j=j->next;
			}
			i=i->next;
			
		}
		node *dis=head;
		system("cls");
		cout<<"sorted data"<<endl;
		while(dis!=NULL){
			cout<<dis->data<<" "<<endl;
			dis=dis->next;
		}
		
	}
	int total_product_in_list(){
		return i;
	}
};
class employ{
	public:
		int id;
		string name;
		int salary;
		employ *head,*next,*pre,*tail;
		employ(){
			next=head=pre=tail=NULL;
		}
		void insertion(string name,int id,int salery){
				employ *newnode=new employ();
			if(head==NULL){
				employ *newnode=new employ();
				newnode->name=name;
				newnode->id=id;
				newnode->salary=salery;
				newnode->next=NULL;
				newnode->pre=NULL;
				head=tail=newnode;
				data(newnode->name,newnode->salary);
			
			}
			else{
				newnode->name=name;
				newnode->id=id;
				newnode->salary=salery;
				newnode->pre=tail;
				tail->next=newnode;
				newnode->next=NULL;
				tail=newnode;
				data(newnode->name,newnode->salary);	
			}
		}
		void data(string name,int salery){
			
			cout<<"**************************************************"<<endl;
			cout<<"*  	  			EMPLOY HISTORY	             "<<endl;
			cout<<"**************************************************"<<endl;
			cout<<"*	YEAR	*"<<"	NAME	*"<<"	SALERY	*"<<endl;
			cout<<"*	2021	*	"<<name<<"	*	"<<salery<<"	*"<<endl;
		}
		void show(){
		employ *temp;
		temp=head;
			cout<<"**************************************************"<<endl;
			cout<<"*  	  			EMPLOY HISTORY	             "<<endl;
			cout<<"**************************************************"<<endl;		
			cout<<"*	YEAR	*"<<"	NAME	*"<<"	SALERY	*"<<endl;
		while(temp!=NULL){

			cout<<"*	2021	*	"<<temp->name<<"	*	"<<temp->salary<<"	*"<<endl;
		temp=temp->next;	
		}
		}
};


class introduction{
	public:
	void intro1(){
	
	cout<<"                  ***********************************"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  *     SUPER MARKET PROJECT        *"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  ***********************************"<<endl;
    cout<<endl<<endl<<endl;
    cout<<"ABDUL REHMAN\n HAMZA SHAHL\n ALMAS AKRAM\n ASAD IRSHAD \n";
    cout<<getch();
    system("cls");
    }
};

class pasword{
public:
pasword(){
cout<<"***********************************"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*           LOGIN                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"*                                 *"<<endl;
cout<<"***********************************"<<endl;

}
void fun1(){
	string pasword="ali123";
	string email1="king12";
	string email,pas;
do{

	cout<<"enter the email ";
	cin>>email;
	
	if (email==email1){
	
	cout<<"enter the pasword ";
	cin>>pas;
	if (pas==pasword){
	cout<<"pasword is correct";
	}
	else cout<<"wrong pasword"<<endl;
	}else cout<<"email is wrong"<<endl;}
	while(email!=email1||pas!=pasword);
}

};
void mangement(){	
system("cls");
	cout<<endl<<"            ***********************************"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  *        DATA MANAGMENT           *"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  *                                 *"<<endl;
    cout<<"                  ***********************************"<<endl;
}


int main(){	
employ obj1;
int select;
introduction intro;
intro.intro1();
pasword login;
login.fun1();
int i=1;
	node obj;
	node* ptr;
	ptr=&obj;
	int t=1;
	mangement();

	do{
	
	cout<<"1 EMPLOY DATA "<<endl;
	cout<<"2  DATA MANGAEMENT"<<endl;
	int n;
	cin>>n;
	switch(n){
	case 1:{

	
		cout<<"ENTER THE NAME OF EMPLOY";
		string name;
		cin>>name;
		cout<<"enter the id";
		int id;
		cin>>id;
		cout<<"ENTER THE SALARY";
		int sal;
		cin>>sal;
		obj1.insertion(name,id,sal);
		break;}
	    
		
		case 2:{
			
	
do{
cout<<"select your choice "<<endl;
cout<<"1 show list"<<endl;
cout<<"2 delete itam from list"<<endl;
cout<<"3 add item in list"<<endl;
cout<<"4 make list "<<endl;
cout<<"5 sort data ";
cout<<"6 total amount of products in list\n";
cin>>select;

    switch(select)
  {
  	
	case 1:
	{
	ptr->display();
		break;
	}
	case 2:
		{
		int selection;
		system("cls");
		cout<<"1: delete at bigning "<<endl;
		cout<<"2: delte at end"<<endl;
		cout<<"3: delte at spacific position "<<endl;
		cin>>selection;
		switch(selection)
		{
		case 1:{
		ptr->delet_at_bg();
		break;	}
		case 2:{
			ptr->delete_end();
			break;
		}
		case 3:{
			 string product;
			 cout<<"enter the name of product which you want to delte ";
			 cin>>product;
			 ptr->delte_spa(product);
			 break;
	    	}
		}
		break;
    	}
    	case 3:
    		{   
			int selection;
    		cout<<"1: enter the product at bigning"<<endl;
    		cout<<"2: enter the product at end of the list"<<endl;
    		cout<<"3:enter the product at spacific postion ";
    		cin>>selection;
    			switch(selection){
    				case 1:{
    					string product;
    					int price;
    					system("cls");
    					cout<<"enter the product which you enter at bigning ";
    					cin>>product;
    					cout<<"enter the price ";
    					cin>>price;
    				   ptr->in_bg(product,price);	
						break;
					}
					case 2:{
						string product;
    					int price;
    					system("cls");
    					cout<<"enter the product which you enter at ending ";
    					cin>>product;
    					cout<<"enter the price ";
    					cin>>price;
					ptr->in_end(product,price);	
						break;
					}
					case 3:{					
						string product;
    					int price;
    					system("cls");
    					cout<<"enter the product which you enter at spacific postion	";
    					cin>>product;
    					cout<<"enter the price ";
    					cin>>price;
    					cout<<"enter the postion (product) where you want to enter product	";
    				    string postion;
    					cin>>postion;
						ptr->spa_in(product,price,postion);
						break;
					}
				}break;
			}
	
	case 4:{
	 	string product;int price;
	 	cout<<"enter the product ";
	 	
		cin>>product;
		
    	cout<<"enter the price ";
    	cin>>price;
		ptr->create_node(product,price);
		break;
	}
	case 5:{
			
	ptr->sort_data();
	break;}
	case 6:{
		cout<<"TOTAL QUANTITY OF ITAM IN LIST"<<endl;
		cout<<ptr->total_product_in_list();
		break;
	}}
	cout<<endl<<"if you modify the list then enter any intiger number else press 0 ";
	cin>>i;
	system("cls");
	}while(i!=0);
break;}

}
cout<<"if you continew press any key else 0";
		cin>>t;}while(t!=0);
}

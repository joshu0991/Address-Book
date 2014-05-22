/*
 * Linked_Imp.cpp
 *
 *  Created on: May 17, 2014
 *      Author: josh
 */



#include "Linked_List.h"

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//add a node to the end of the list
void Linked_List_Func::add_node_end(std::string contact, std::string phone)
{
	node* current;
	current = root;//start at the beginning
		while(current->next != 0)
		{
			current = current->next; //check if next is null if it isn't move to next node
		}
 		current->next = new node; //make the new node
		current = current->next; //move to it
		if(root->next == 0) //Not entirely sure if this is needed
		{
			root->next = current; //change the root pointer from null to the new node the first time
		}
		current->next = 0; //set the new null
		current->contact = contact; //set data
		current->phone = phone;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//start the new list
void Linked_List_Func::add_first(std::string place, std::string phone)
{
	root = new node;
	root->contact = place;
	root->phone = phone;
	root->next = 0;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//traverse list print data in order it was made
void Linked_List_Func::traverse_List()
{

	node* current = root;

	while(current->next != 0)
	{
		std::cout << "Contact " + current->contact << std::endl;
		std::cout << "Phone " + current->phone << std::endl;
		current = current->next;
	}
	std::cout << "Contact " + current->contact << std::endl;//print the last node
	std::cout << "Phone " + current->phone << std::endl;

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Linked_List_Func::delete_node(std::string cont)
{
	node* temp;
	node* current = root;
	while (current->next != 0) {
		if (root->contact == cont) {
			current = current->next;
			root = current;
			break;
		} else if (current->contact == cont)
		{
			current = current->next;
			temp->next = current;
			break;
		}else if(current->contact == cont && current->next == 0)
		{
			temp->next = 0;
			break;
		}
		else{
			temp = current;
			current = current->next;
			continue;
		}
	}

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

void Linked_List_Func::set_root(node* root_var)
{
	root = root_var;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

node* Linked_List_Func::get_root()
{
	return root;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

Linked_List_Func::Linked_List_Func():root(0){};

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

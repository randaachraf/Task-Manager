#pragma once
template <class T>
class Node{
public:
	int ID;
	String Name;
	String Description;
	char duedate[];
	char Finished;
	Node<T> *next;
public:
	Node();
	Node(T ID, String Name, String Description, Char duedate[], char Finished);
};
template<class T>
class TaskManager
{
public:
		Node<T>* head;
		Node<T>* tail;
		int size;
		TaskManager();
		void Add();
		void Finished();
		void Edit();
		void Delete(int ID);
		void Search();
		void Display();
	    ~TaskManager();
};


//implementation of input restricted deque
#include<iostream>
#include"output restricted deque.h"
using namespace std;

template <typename T>
class inputResDeque
{
	Node<T>* front;
	Node<T>* rear;
	int Size;

public:
	inputResDeque()
	{
		front =NULL;
        rear=NULL;
		Size = 0;
	}

	void insertFront(T data)
	{
		Node<T> *newNode = new Node<T>(data);
		if (newNode == NULL)
			cout << "OverFlow\n";
		else
		{
			// If deque is empty
			if (front == NULL)
				rear = front = newNode;

			// Inserts node at the front end
			else
			{
				newNode->next = front;
				front->prev = newNode;
				front = newNode;
			}

			// Increments count of elements by 1
			Size++;
		}
	}	
			
	void deleteFront()
	{
		// If deque is empty then
		// 'Underflow' condition
		if (isEmpty())
			cout << "UnderFlow\n";

		// Deletes the node from the front end and makes
		// the adjustment in the links
		else
		{
			Node<T>* temp = front;
			front = front->next;

			// If only one element was present
			if (front == NULL)
				rear = NULL;
			else
				front->prev = NULL;
				
			delete temp;
			// Decrements count of elements by 1
			Size--;
		}
	}
	void deleteRear()
	{
		// If deque is empty then
		// 'Underflow' condition
		if (isEmpty())
			cout << "UnderFlow\n";

		// Deletes the node from the rear end and makes
		// the adjustment in the links
		else
		{
			Node<T>* temp = rear;
			rear = rear->prev;

			// If only one element was present
			if (rear == NULL)
				front = NULL;
			else
				rear->next = NULL;
			delete temp;

			// Decrements count of elements by 1
			Size--;
		}
	}
	T getFront()
	{
		// If deque is empty, then returns
		// garbage value
		if (isEmpty())
			return -1;
		return front->data;
	}

	// Function to return the element
	// at the rear end
	T getRear()
	{
		// If deque is empty, then returns
		// garbage value
		if (isEmpty())
			return -1;
		return rear->data;
	}

	// Function to delete all the elements
	// from Deque
	void erase(){
		rear = NULL;
		while (front != NULL)
		{
			Node<T>* temp = front;
			front = front->next;
			delete temp;
		}
		Size = 0;
	}

	int size(){
		return Size;
	}
	bool isEmpty(){
		return (front == NULL);
	}
};


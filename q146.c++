#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

class Node
{
  public:
	int key;
	int value;
	Node *prev;
	Node *next;
	Node(int k, int v)
	{
		key = k;
		value = v;
		prev = NULL;
		next = NULL;
	}
};

class LRUCache
{
	int capacity;
	Node *head;
	Node *tail;
	unordered_map<int, Node *> cache;

  public:
	LRUCache(int capacity)
	{
		this->capacity = capacity;
	}

	int get(int key)
	{
	}

	void put(int key, int value)
	{
		if (this->cache.size() < this->capacity){
			Node* temp = new Node(key, value);
			cache[key] = temp;
		}
		else{
			Node* temp = tail;
		}
	}
};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */
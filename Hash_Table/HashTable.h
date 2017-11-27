#pragma once

#include "Hashable.h"

using namespace std;

#ifndef HASH_TABLE
#define HASH_TABLE

template<class KeyType, typename DataType>
class HashTable {
	static_assert(is_base_of<Hashable, KeyType>::value, "KeyType must derive from Hashable");

public:
	HashTable();
	~HashTable();
	HashTable(unsigned int);

	void addValue(KeyType, DataType);

private:
	int size;

	struct Item {
		KeyType* key;
		DataType* data;

		Item* next;
		unsigned int length;
	};

	Item* table;
};

template<class KeyType, typename DataType>
HashTable<KeyType, DataType>::HashTable(unsigned int size) {
	if (size == 0)
		throw invalid_argument("Size must be higher than zero");

	this->size = size;
	this->table = new Item[this->size];

	for (unsigned int i = 0; i < size; i++)
		this->table[i] = nullptr;
}

template<class KeyType, typename DataType>
HashTable<KeyType, DataType>::HashTable() {}

template<class KeyType, typename DataType>
HashTable<KeyType, DataType>::~HashTable() {}

template<class KeyType, typename DataType>
void HashTable<KeyType, DataType>::addValue(KeyType key, DataType data) {
	unsigned int pos = key.hashCode();
}

#endif // HASH_TABLE

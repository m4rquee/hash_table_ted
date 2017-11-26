#pragma once

#include "Hashable.h"

using namespace std;

#ifndef HASH_TABLE
#define HASH_TABLE

template<class KeyType, typename DataType>
class HashTable {
	static_assert(is_base_of<Hashable, KeyType>::value, "KeyType must derive from Hashable");

public:
	HashTable(unsigned int);
	~HashTable();

private:
	int size;
};

template<class KeyType, typename DataType>
HashTable<KeyType, DataType>::HashTable(unsigned int size) {
	if (size == 0)
		throw invalid_argument("Size must be higher than zero");

	this->size = size;
}

template<class KeyType, typename DataType>
HashTable<KeyType, DataType>::~HashTable() {
}

#endif // HASH_TABLE

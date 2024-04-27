#pragma once

#include <iostream>
#include <cstring>

template<class K, class V>

class Map {
private:
    struct Item {
        K Key;
        V Value;
        int Index;
    };

    Item* MapArray;
    int MapSize, MapCount;

    void DoubleMapArray() {
        this->MapSize = this->MapSize * 2;
        Item* Temp = new Item[this->MapSize];
        for (int i = 0; i <= this->MapCount; i++)
            Temp[i] = this->MapArray[i];
        delete[] this->MapArray;
        this->MapArray = Temp;
    }
public:
    // Constructor
    Map() {
        this->MapCount = 0;
        this->MapSize = 1;
        this->MapArray = new Item[MapSize];
    }

    // Operator[]
    V& operator[](const K& Key) {
        // Check if Key exists
        for (int i = 0; i < this->MapCount; i++)
            if (this->MapArray[i].Key == Key)
                return this->MapArray[i].Value;

        // Else, create it
        if (this->MapCount + 1 >= this->MapSize)
            this->DoubleMapArray();
        this->MapArray[this->MapCount] = {Key, "", this->MapCount};
        this->MapCount++;
        return this->MapArray[this->MapCount - 1].Value;
    }

    // For-each
    const Item* begin() const {
        return &this->MapArray[0];
    }

    const Item* end() const {
        return &this->MapArray[this->MapCount];
    }

    // A method Set that can be used to associate a value to a key
    void Set(const K& Key, V& Value) {
        if (this->MapCount + 1 >= this->MapSize)
            this->DoubleMapArray();
        this->MapArray[this->MapCount] = {Key, Value, this->MapCount};
        this->MapCount++;
    }

    // A method Get using the following syntax bool Get(const K& Key, V& Value) that will copy the value associated to parameter key into the parameter value and returns true
    // If the parameter key does not exists in the map, Get method will return false
    bool Get(const K& Key, V& Value) {
        for (int i = 0; i < this->MapCount; i++)
            if (this->MapArray[i].Key == Key) {
                MapArray[i].Value = Value;
                return true;
            }
        return false;
    }

    // A method Count that returns the amount of elements in the map
    int Count() {
        return this->MapCount;
    }

    // A method Clear that clears the entire map
    void Clear() {
        delete[] this->MapArray;
    }

    // A method Delete that deletes a specific key (if exists)
    // Use the following syntax: bool Delete(const K& Key)
    bool Delete(const K& Key) {
        for (int i = 0; i < this->MapCount; i++)
            if (this->MapArray[i].Key == Key) {
                for (int j = i; j < this->MapCount - 1; j++) {
                    this->MapArray[j] = this->MapArray[j + 1];
                    this->MapArray[j].Index--;
                }
                this->MapCount--;
                return true;
            }
        return false;
    }

    // A method Includes with the following syntax: bool Includes(const Map<K, V>& map) that checks if a map is included in another
    // A map A is included in another map B, if all keys from map A exists in map B
    bool Includes(const Map<K, V>& map) {
        if (this->Count() != (map.MapCount))
            return false;
        for (auto [key, value, index] : map)
            if(this->Get(key, value) == false)
                return false;
        return true;
    }
};
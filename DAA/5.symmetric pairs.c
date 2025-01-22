#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int key;
    int value;
} HashMapEntry;

typedef struct {
    HashMapEntry* entries;
    int size;
    int capacity;
} HashMap;

// Initialize HashMap
HashMap* createHashMap(int capacity) {
    HashMap* map = (HashMap*)malloc(sizeof(HashMap));
    map->entries = (HashMapEntry*)malloc(sizeof(HashMapEntry) * capacity);
    map->size = 0;
    map->capacity = capacity;
    return map;
}

// Hash function to map a key to an index
int hash(int key, int capacity) {
    return key % capacity;
}

// Insert a key-value pair into the HashMap
void insert(HashMap* map, int key, int value) {
    int index = hash(key, map->capacity);
    while (map->entries[index].key != 0) {
        if (map->entries[index].key == key) {
            break;
        }
        index = (index + 1) % map->capacity;
    }
    map->entries[index].key = key;
    map->entries[index].value = value;
    map->size++;
}

// Search for a value by key in the HashMap
int search(HashMap* map, int key) {
    int index = hash(key, map->capacity);
    while (map->entries[index].key != 0) {
        if (map->entries[index].key == key) {
            return map->entries[index].value;
        }
        index = (index + 1) % map->capacity;
    }
    return -1; // If key is not found
}

// Find all symmetric pairs
void findSymmetricPairs(int arr[][2], int n) {
    // Create a HashMap
    HashMap* map = createHashMap(n);

    // Traverse the array to find symmetric pairs
    for (int i = 0; i < n; i++) {
        int first = arr[i][0];
        int second = arr[i][1];

        // Search for second in the HashMap
        int value = search(map, second);

        if (value != -1 && value == first) {
            // If a symmetric pair is found
            printf("(%d, %d)\n", second, first);
        } else {
            // Otherwise, insert the pair into the map
            insert(map, first, second);
        }
    }

    free(map->entries);
    free(map);
}

// Main function
int main() {
    int arr[5][2] = {{11, 20}, {30, 40}, {5, 10}, {40, 30}, {10, 5}};
    int n = 5;

    printf("Following pairs have symmetric pairs:\n");
    findSymmetricPairs(arr, n);
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    int x;
    int y;
}coord;

typedef struct {
    int size;
    coord* list_coords;
}array_of_coords;

int calculate_houses_visited(char* string, array_of_coords *array);
void add_element(array_of_coords *array, coord *new_coord);

int main() {
    array_of_coords *array = malloc(sizeof(array_of_coords));
    array->size = 1;
    array->list_coords = malloc(array->size * sizeof(coord));
    array->list_coords[0].x = 0;
    array->list_coords[0].y = 0;
    printf("(%d, %d)\n", array->list_coords[0].x, array->list_coords[0].y);
    
    char* string;
    scanf("%s", string);

    calculate_houses_visited(string, array);

    free(array->list_coords);
    free(array);
}

void add_element(array_of_coords *array, coord *new_coord) {
    array->size++;
    array->list_coords = realloc(array->size * sizeof(coord));
    array->list_coords[array->size - 1].x = new_coord->x;
    array->list_coords[array->size - 1].y = new_coord->y;
    free(new_coord);
}

int calculate_houses_visited(char* string, array_of_coords *array) {
    int houses = 0;

    // Get all the coordinates of houses visited
    for (int i = 0; i < strlen(string); i++) {
        if (string[i] == '<') {
            
        }
    }

    return houses;
}
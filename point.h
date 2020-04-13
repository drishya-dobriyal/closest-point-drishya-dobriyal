#define FOOD_CO_ORDINATES {{ 18, 76}, { 19, 66}, { 89, 57}, { 9, 71}, { 55, 38}}

typedef struct
{
  int x;
  int y;
} Point;

double get_distance( Point, Point);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
#define FOOD_CO_ORDINATES {{ 18, 76}, { 19, 66}, { 89, 57}, { 9, 71}, { 55, 38}}
#define FOOD_POINT food_points[i].x, food_points[i].y
#define CURRENT_LOCATION current_location.x, current_location.y 

typedef struct
{
  int x;
  int y;
} Point;

double get_distance( int , int , int, int);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
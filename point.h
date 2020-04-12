typedef struct
{
  int x;
  int y;
} Point;

double get_distance( int , int , int, int);
void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location);
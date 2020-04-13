#include <math.h>
#include "point.h"

double get_distance(Point point1,Point point2 ) {
  int x_difference = point1.x - point2.x;
  int y_difference = point1.y - point2.y;
  return sqrt(pow((x_difference), 2) + pow((y_difference), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location){
  double closest_distance, distance;

  closest_distance = get_distance(food_points[0], current_location );
  *closest_food_location = food_points[0];
  
  for(int i = 1; i < points_length; i++){
    distance = get_distance(food_points[i], current_location );
    if(distance < closest_distance) {
      closest_distance = distance;
      *closest_food_location = food_points[i];
    }
  }
  return;
}

#include <math.h>
#include "point.h"

double get_distance(int x1, int y1, int x2, int y2) {
  return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location){
  double closest_distance, distance;
  
  for(int i = 0; i < points_length; i++){
    distance = get_distance(FOOD_POINT,CURRENT_LOCATION);
    if(i == 0 || distance < closest_distance) {
      closest_distance = distance;
      closest_food_location->x =  food_points[i].x;
      closest_food_location->y =  food_points[i].y;
    }
  }
  return;
}

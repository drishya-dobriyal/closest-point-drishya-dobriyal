#include <math.h>
#include "point.h"

double get_distance(int x1, int y1, int x2, int y2) {
  return sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
}

void get_closest_food(Point food_points[], int points_length, Point current_location, Point *closest_food_location){
  closest_food_location->x =  food_points[0].x;
  closest_food_location->y =  food_points[0].y;
  double closest_distance;
  for(int i = 0; i < points_length; i++){
    double distance = get_distance( food_points[i].x, food_points[i].y,current_location.x, current_location.y );
    if(i == 0 ) {
      closest_distance = distance;
    }
    if( distance < closest_distance) {
      closest_distance = distance;
      closest_food_location->x =  food_points[i].x;
      closest_food_location->y =  food_points[i].y;
    }
  }
  return;
}

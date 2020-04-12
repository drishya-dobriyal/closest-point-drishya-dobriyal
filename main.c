#include <stdio.h>
#include "point.h"

int main(void)
{
  Point food_points[] = FOOD_CO_ORDINATES;
  Point current_location, closest_food_location;
  int points_length = sizeof(food_points) / sizeof(food_points[0]);
  
  printf("Enter Your co-ordinates :\n");
  scanf("%d %d",&current_location.x, &current_location.y );
  
  get_closest_food( food_points, points_length, current_location, &closest_food_location);
  printf("closest co-ordinates are [ %d %d ]\n",closest_food_location.x, closest_food_location.y );
  return 0;
}
#include "point.h"

int main(void)
{
  Point food_points[] = {{ 18, 76}, { 19, 66}, { 89, 57}, { 9, 71}, { 55, 38}};
  Point current_location, closest_food_location;
  int points_length = sizeof(food_points) / sizeof(food_points[0]);
  printf("Enter Your co-ordinates :\n");
  scanf("%d %d",current_location.x, current_location.y );
  return 0;
}
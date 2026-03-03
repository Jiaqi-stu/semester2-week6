#include <stdio.h>
#include <stdlib.h>


// Determine if the driver is speeding
int determine_speed(int driver_speed, int speed_limit){  
  if (driver_speed > speed_limit) {
    int excess_speed = driver_speed - speed_limit;
    return excess_speed;
  }
  return 0;
}

    // Calculate fine based on how much over the limit
int calculate_fine(int excess_speed, int fine){
    if (excess_speed <= 10) {
      fine = 50;
    } else if (excess_speed <= 20) {
      fine = 100;
    } else {
      fine = 200;
    }
    return fine;
}

int main() {
  int speed_limit, driver_speed, fine = 0;
  char input[20];
  
  // Get user input for speed limit
  printf("Enter the speed limit: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &speed_limit);
  }

  // Get user input for driver's speed
  printf("Enter the driver's speed: ");
  if (fgets(input, sizeof(input), stdin)) {
    sscanf(input, "%d", &driver_speed);
  }

  int excess_speed = determine_speed(driver_speed, speed_limit);

  fine = calculate_fine(excess_speed, fine);
  
  if (excess_speed > 0)  {
  printf("Fine: $%d\n", fine);
  } else {
    printf("No fine needed.\n");
  }
  
  return 0;
}

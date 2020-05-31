/* hotel.h -- constants and declarations for hotel */
#define QUIT 5
#define HOTEL1 80.00
#define HOTEL2 125.00
#define HOTEL3 155.00
#define HOTEL4 200.00
#define DISCOUNT 0.95
#define STARS "**********************************"

// shows list of choices
int menu(void);

// returns number of nights desired
int getnights(void);

// calculates price from rate and nights
// and displays the results
void showprice(double rate, int nights);
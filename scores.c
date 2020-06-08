#include "scores.h"

double hum_score(double humidity) {
#define X humidity
    if(X < 40.0)
        return 10.0 - (X/4.0);
    else
        return (X-40.0)/6.0;
#undef X
}


double temp_score(double temperature) {
#define X temperature
    if(X < 21.0)
        return 9.0 - (X-21.0)/46.0;
    else
        return (X-21.0)/71.0;
#undef X
}

double gasres_score(double resistance) {
#define X resistance
    return 80.0 - X/625.0;
#undef X
}

double get_IAQ(double humidity, double temperature, double resistance) {
    return  hum_score(humidity) +
            temp_score(temperature) +
            gasres_score(resistance);
}

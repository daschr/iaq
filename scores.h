#ifndef _inc_scores
#define _inc_scores 1

double hum_score(double humidity);
double temp_score(double temperature);
double gasres_score(double resistance);

double get_IAQ(double humidity, double temperature, double resistance);
#endif

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    float mealCost,tipPercent,taxPercent,tip,tax,totalCost,con=100;
    scanf("%f%f%f",&mealCost,&tipPercent,&taxPercent);
    tip=mealCost*(tipPercent/con);
    tax=mealCost*(taxPercent/con);
    totalCost=mealCost+tip+tax;
    printf("The total meal cost is %0.0f dollars.",totalCost);
    return 0;
}

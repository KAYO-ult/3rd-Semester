#include <stdio.h>

int main() {
    int feet1, feet2, resultFeet;
    float inch1, inch2, resultInch;
    
    printf("Enter first distance (feet and inches): ");
    scanf("%d%f", &feet1, &inch1);
    printf("Enter second distance (feet and inches): ");
    scanf("%d%f", &feet2, &inch2);
    
    float totalInches = (feet1 * 12 + inch1) + (feet2 * 12 + inch2);
    
    resultFeet = totalInches / 12;
    
    resultInch = totalInches - resultFeet * 12;
    printf("Result: %d feet and %.2f inches", resultFeet, resultInch);
    return 0;
}












// // Using structure

// #include <stdio.h>

// typedef struct {
//     int feet;
//     float inch;
// } Distance;

// Distance addDistances(Distance d1, Distance d2) {
//     Distance result;                                    //struct Distance result;
//     float totalInches = (d1.feet * 12 + d1.inch) + (d2.feet * 12 + d2.inch);
//     result.feet = (int)totalInches / 12;
//     result.inch = totalInches - result.feet * 12;
//     return result;
// }

// int main() {
//     Distance d1, d2, result;                            //struct Distance d1, d2, result;
//     printf("Enter first distance (feet and inches): ");
//     scanf("%d%f", &d1.feet, &d1.inch);
//     printf("Enter second distance (feet and inches): ");
//     scanf("%d%f", &d2.feet, &d2.inch);
//     result = addDistances(d1, d2);
//     printf("Result: %d feet and %.2f inches\n", result.feet, result.inch);
//     return 0;
// }
#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{ 
    float face = get_int("Face Value: ");
    float coupon = get_float("Coupon: ");
    float freq = get_int("Payments per year: ");
    float term = get_int("Number of years: ");
    float yield = get_float("Yield: ");
    float yield1 = 1 + (yield / freq);
    float nmbr_pmt = (freq * term);
    float pmt = ((coupon * face) / freq);
    float cf[60];
    float sum = 0;
    int i = 1;
    float yr;
    for (i = 1; i < (nmbr_pmt + 1); i++)
        {
            yr = (pow(yield1 , i));
            cf[i] = (pmt / yr);
            sum = sum + cf[i];
        }
    float npv = sum + (face / yr);
    printf("Present Value: %f\n", npv);
}













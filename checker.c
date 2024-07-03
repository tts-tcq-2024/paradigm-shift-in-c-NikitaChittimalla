#include <stdio.h>
#include <assert.h>
 
int is_temperature_ok(float temperaure) {
    return (temperature >= 0 && temperature <= 45);
}
 
int is_soc_ok(float soc) {
    return (soc >= 20 && soc <= 80);
}
 
int is_charge_rate_ok(float chargeRate) {
    return (chargeRate <= 0.8);
}
 
//Aim to check battery Health using is_battery_ok function

int is_battery_ok(float temperature, float soc, float chargeRate) {
    if (is_temperature_ok(temperature) && is_soc_ok(soc) && is_charge_rate_ok(chargeRate))
    {
        return 1;
    } 
	else {
        return 0;
    }
}
 
int main() {
    //test case 1
    if (is_battery_ok(40,30,0.2)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: NOT OK - Please check the parameters\n");
    }
    //test case 2
    if (is_battery_ok(95,10,0.9)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: NOT OK - Please check the parameters\n");
    }
    return 0;
}

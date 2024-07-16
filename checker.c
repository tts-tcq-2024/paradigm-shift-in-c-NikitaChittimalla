#include <stdio.h>
#include <assert.h>
 
int is_temperature_ok(float temperature) { //is_temperature_ok renamed to TemparatureinRange or Temperature
    return (temperature >= 0 && temperature <= 45);
}
 
int is_soc_ok(float soc) { //is_soc_ok renamed to socinrange
    return (soc >= 20 && soc <= 80);
}
 
int is_charge_rate_ok(float chargeRate) { //is_charge_rate_ok renamed to chargerateinrange 
    return (chargeRate <= 0.8);
}
 
//Aim to check battery Health using is_battery_ok function

int is_battery_ok(float temperature, float soc, float chargeRate) { //is_battery_ok renamed to BatteryHealth
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
    if (is_battery_ok(25,70,0.7)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: NOT OK - Please check the parameters\n");
    }
    //test case 2
    if (is_battery_ok(50,85,0)) {
        printf("Battery status: OK\n");
    } else {
        printf("Battery status: NOT OK - Please check the parameters\n");
    }
    return 0;
}

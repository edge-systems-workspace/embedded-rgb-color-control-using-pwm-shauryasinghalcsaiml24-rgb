#include <Arduino.h>

/**
 * @file main.cpp
 * @brief Embedded RGB LED Control (Digital + PWM)
 * @author shauryasinghal
 * @date 2026-02-17
 *
 * @details
 * Controls an RGB LED using digital ON/OFF and analog PWM brightness control.
 * Demonstrates simple digital blink and PWM color cycling on three pins.
 */

int RED_pin = 9;
int GREEN_pin = 10;
int BLUE_pin = 11;
/**
 * @brief Initialize serial communication and configure LED pins.
 *
 * @details
 * Starts the hardware Serial at 9600 baud and sets the RGB pins as OUTPUT.
 * Prints an initialization message to the serial console.
 *
 * @return void
 */
void setup() {
    Serial.begin(9600);

    pinMode(RED_pin, OUTPUT);
    pinMode(GREEN_pin, OUTPUT);
    pinMode(BLUE_pin, OUTPUT);

    Serial.println("RGB LED Initialized!");
}
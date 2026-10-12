// i'll be following the template provided @ ed cuz it looks clean





/*
Skeleton program to demonstrate a simple way to handle various
scenarios for the Elec1601 robot buggy project
Ross Hutton 2026
*/
#include <Servo.h>

Servo servoLeft;
Servo servoRight

// Define all pins

/* Define other global constants, especially calibration sensitive numbers 
  and any values that are used in more than one place
*/

int stopped=0;

void setup()
{
    Serial.begin(9600);
}

void loop()
{
    // put your main code here, to run repeatedly:
    int scenario = 0;

    if(!stopped)
    {
        switch(scenario)
        {
            case 0: //Unknown scenario
            case 1: //middle of corridor
            case 2: //ideal position right turn
            case 3: //ideal position left turn
            case 4: //dead end
            case 5: //left side of corridor parallel
            case 6: //right side of corridor parallel
            case 7: //left side of corridor pointing at wall
            case 8: //right side of corridor pointing at wall
            case 9:
            case 10:
        }
    }
}





// Insert code to measure left, middle, and right distances
int find_distance_left()
{
  tone(IR_LED_Left, 65000);
  delay(1);
  ir_valL = digitalRead(Sensor_Left);
  if (ir_valL == 0) { distanceL = 2; }
  else
  {
    tone(IR_LED_Left, 55000);
    delay(1);
    ir_valL = digitalRead(Sensor_Left);
    if (ir_valL == 0) { distanceL = 3; }
    else
    {
      tone(IR_LED_Left, 45000);
      delay(1);
      ir_valL = digitalRead(Sensor_Left);
      if (ir_valL == 0) { distanceL = 4; }
      else
      {
        tone(IR_LED_Left, 44000);
        delay(1);
        ir_valL = digitalRead(Sensor_Left);
        if (ir_valL == 0) { distanceL = 5; }
        else
        {
          tone(IR_LED_Left, 40000);
          delay(1);
          ir_valL = digitalRead(Sensor_Left);
          if (ir_valL == 0) { distanceL = 6; }
          else 
          { 
            tone(IR_LED_Left, 39000);
            delay(1);
            ir_valL = digitalRead(Sensor_Left);
            if (ir_valL == 0) { distanceL = 8; }
            else
            {
              tone(IR_LED_Left, 38000);
              delay(1);
              ir_valL = digitalRead(Sensor_Left);
              if (ir_valL == 0) { distanceL = 10; }
              else { distanceL = 11;}
            }
          } 
        }
      }
    }
  }

  noTone(IR_LED_Left);
  return distanceL;
}

int find_distance_right() //done
{
  tone(IR_LED_Right, 65000);
  delay(1);
  ir_valR = digitalRead(Sensor_Right);
  if (ir_valR == 0) { distanceR = 2; }
  else
  {
    tone(IR_LED_Right, 55000);
    delay(1);
    ir_valR = digitalRead(Sensor_Right);
    if (ir_valR == 0) { distanceR = 3; }
    else
    {
      tone(IR_LED_Right, 45000);
      delay(1);
      ir_valR = digitalRead(Sensor_Right);
      if (ir_valR == 0) { distanceR = 4; }
      else
      {
        tone(IR_LED_Right, 43000);
        delay(1);
        ir_valR = digitalRead(Sensor_Right);
        if (ir_valR == 0) { distanceR = 5; }
        else
        {
          tone(IR_LED_Right, 42000);
          delay(1);
          ir_valR = digitalRead(Sensor_Right);
          if (ir_valR == 0) { distanceR = 6; }
          else 
          {
            tone(IR_LED_Right, 40000);
          	delay(1);
          	ir_valR = digitalRead(Sensor_Right);
          	if (ir_valR == 0) { distanceR = 7; }
            else 
            {
              tone(IR_LED_Right, 39000);
              delay(1);
              ir_valR = digitalRead(Sensor_Right);
              if (ir_valR == 0) { distanceR = 8; }
              else 
              {
                tone(IR_LED_Right, 38000);
                delay(1);
                ir_valR = digitalRead(Sensor_Right);
                if (ir_valR == 0) { distanceR = 9; }
                else {distanceR = 10;}
                 
            
              }
            }
          }
        }
      }
    }
  }

  noTone(IR_LED_Right);
  return distanceR;
}
  

int find_distance_front() //done
{
  tone(IR_LED_Front, 65000);
  delay(1);
  ir_valF = digitalRead(Sensor_Front);
  if (ir_valF == 0) { distanceF = 2; }
  else
  {
    tone(IR_LED_Front, 55000);
    delay(1);
    ir_valF = digitalRead(Sensor_Front);
    if (ir_valF == 0) { distanceF = 3; }
    else
    {
      tone(IR_LED_Front, 45000);
      delay(1);
      ir_valF = digitalRead(Sensor_Front);
      if (ir_valF == 0) { distanceF = 4; }
      else
      {
        tone(IR_LED_Front, 43000);
        delay(1);
        ir_valF = digitalRead(Sensor_Front);
        if (ir_valF == 0) { distanceF = 5; }
        else
        {
          tone(IR_LED_Front, 42000);
          delay(1);
          ir_valF = digitalRead(Sensor_Front);
          if (ir_valF == 0) { distanceF = 6; }
          else 
          {
            tone(IR_LED_Front, 41000);
          	delay(1);
          	ir_valF = digitalRead(Sensor_Front);
          	if (ir_valF == 0) { distanceF = 7; }
          	else 
            {
              tone(IR_LED_Front, 40000);
          	  delay(1);
          	  ir_valF = digitalRead(Sensor_Front);
          	  if (ir_valF == 0) { distanceF = 8; }
              else {
                tone(IR_LED_Front, 39000);
                delay(1);
                ir_valF = digitalRead(Sensor_Front);
                if (ir_valF == 0) { distanceF = 10; }
                else 
                {
                  tone(IR_LED_Front, 38000);
                  delay(1);
                  ir_valF = digitalRead(Sensor_Front);
                  if (ir_valF == 0) { distanceF = 11; }
                  else {distanceF = 12;}
                }
              }
            }
          }
        }
      }
    }
  }

  noTone(IR_LED_Front);
  return distanceF;
}
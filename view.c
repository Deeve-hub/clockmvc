/* view.c -- view module for clock project
 *
 * Darren Provine, 17 July 2009
 *
 * Copyright (C) Darren Provine, 2009-2019, All Rights Reserved
 */

#include "clock.h"
#include <string.h>
/* VIEW */

/* We get a pointer to a "struct tm" object, put it in a string, and
 * then send it to the screen.
 */
void show(struct tm *dateinfo, int ampm)
{
    char       timestring[9];
    char       ampmstring[11];
    int 	hour;
    char       meridian[3];


    // TODO: handle "ampm" setting
    //       You may want to create a new variable "hour",
    //       and possibly an "ampmstring", to hold the results
    //       of handling the ampm setting.

    
   // printf("%02d", hour);   
                              
   if(ampm == 1){             
    
	hour = dateinfo->tm_hour;	   
	if(hour < 12)               	   
  		strcpy(meridian, "AM");	
	else                        	
  		strcpy(meridian, "PM");	
	
	
	if(hour >= 13 && hour > 0) 
       		hour = (hour - 12);    
                              
        
           
        
    	
	     	
   sprintf(ampmstring,       	                        
           "%02d:%02d:%02d %s",                             
           hour,                       
           dateinfo->tm_min,   
           dateinfo->tm_sec,meridian);  
   
   printf("\r%s ",ampmstring);
   fflush(stdout);

  }     
  else{ 
   
   sprintf(timestring,        
           "%02d:%02d:%02d",  
           dateinfo->tm_hour, 
           dateinfo->tm_min,
           dateinfo->tm_sec); 
    
     


    
    printf("\r%s ", timestring);
    fflush(stdout);
   } 
}



/* We get a pointer to a "struct tm" object, put it in a string, and
 * then send it to the screen.
 */
void ledshow(struct tm *dateinfo, int ampm)
{
    char       timestring[9];
    digit *where = get_display_location();
    int i;

    // TODO: handle "ampm" setting
    //       Write and test that part in show() before copying
    //       it here.


    /* Note that we have removed the colons from the format
     * string to make this part easier to write.
0     */
    sprintf(timestring,
            "%02d%02d%02d",
            dateinfo->tm_hour,
            dateinfo->tm_min,
            dateinfo->tm_sec);
// todo turn 3 - 0 work
    for (i = 0; i < 6; i++) {
       switch ( timestring[i] ) {
           case ' ': where[i] = 0x00; break;
           case '1': where[i] = 0x42; break; //0100 0010 -> bits 1 and 6 are on
           case '2': where[i] = 0x37; break; // 0011 0111 
           case '3': where[i] = 0x03; break;
           case '4': where[i] = 0x4B; break;
           case '5': where[i] = 0x05; break;
           case '6': where[i] = 0x06; break;
           case '7': where[i] = 0x46; break;
           case '8': where[i] = 0x08; break;
           case '9': where[i] = 0x09; break;
           case '0': where[i] = 0xff; break;
       }
    }

    // colons + am/pm
    where[6] = 0x54;

    display();
    fflush(stdout);
}


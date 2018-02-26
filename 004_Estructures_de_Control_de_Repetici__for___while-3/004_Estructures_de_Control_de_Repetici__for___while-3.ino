/**********************************************************************************
**                                                                               **
**                          Control Structures                                   **
**                                                                               **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************


int comptar = 25;
int i = 0;
//********** Setup ****************************************************************
void setup()               // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps
  Serial.print("Ara comptare de 0 a ");
  Serial.println(comptar);  
  while(i <comptar)       // While 'i' is minor than 'comptar' it will increase the value of 'comptar'
  {
    Serial.print(i);      // It will count untill 'comptar' its equal to 'i'
    Serial.print("-");    // It will put a - between the numbers
    i++;
  }

    if(comptar=25)        // When 'comptar' arrives to 25 it will write the value of 'comptar' variable
    {
    Serial.print(comptar);
    }
}


//********** Loop *****************************************************************
void loop()   // we need this to be here even though its empty
{
}


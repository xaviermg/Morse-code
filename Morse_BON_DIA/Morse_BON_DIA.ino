/**********************************************************************************
**                                                                               **
**                                  Morse                                        **
**                                                                               **
**                                Programa1                                      **
**                                                                               **
**********************************************************************************/

//********** Includes *************************************************************

//********** Variables ************************************************************
// pin for speaker
const int pin = 8;

int note = 1047;
int velocitat = 10;

//********** Setup ****************************************************************
void setup()
{

}

//********** Loop *****************************************************************
void loop()
{
 
  ratlla();
  punt();
  punt();
  punt();

  espaiL();

  ratlla();
  ratlla();
  ratlla();

  espaiL();

  ratlla();
  punt();

  espaiP();

  ratlla();
  punt();
  punt();

  espaiL();

  punt();
  punt();

  espaiL();

  punt();
  ratlla();
  
  espaiP();
}

//********** Funcions *************************************************************
void punt()
{
  tone(pin, note, 1000/velocitat);
  delay(1000/velocitat); 
  delay(1000/velocitat); 
}

void ratlla()
{
  tone(pin, note, 3*(1000/velocitat));
  delay(3*(1000/velocitat)); 
  delay(1000/velocitat);  
}

void espaiL()  //Espai entre lletres
{  
  delay(2*(1000/velocitat));  
}

void espaiP()  //Espai entre paraules
{   
  delay(6*(1000/velocitat));  
}

#include<LPC21xx.h>

void delay(void);
void configure_baudrate (unsigned int baud, float clock){

}


void configure_data_width (unsigned int width){

}


int configure_stop_bit (int sb){

}

int configure_parity (int parity){

}


int transmit_data (unsigned char data){

}


char receive_data (void){

}
unsigned char mg;

int main()
{
  unsigned char msg[]={"A"};		
  
  configure_data_width(8);

  configure_baudrate(19200,1.8432);

  configure_stop_bit(2);

  configure_parity(0);

  transmit_data (msg);

  receive_data();

  printf("Received data is %c",data);

}

void delay()
{
  unsigned int i;
  for(i=0;i<10000;i++);
} 
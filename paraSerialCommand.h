#ifndef _SERIAL_COMMAND_PARAMETER_H_
#define	_SERIAL_COMMAND_PARAMETER_H_

//=======================================================================
//   Attention:
//		1.You need to include this Library to your project folder
//		2.rewrite the function: processCommand() to add your features.
//		3.call cmd_in_loop() in your loop()
//		4.dont add delay() functions in your loop(), 
//										nor functions in loop()
//		5.
//
//											20Jan2015	CAOXP@HONGKONG
//=======================================================================



	#include "Arduino.h"

	extern void cmd_in_loop();

	extern void commandProcess();

	//Configurations below

//=======================================================================
//                      command line switch
//=======================================================================
#define COMMNAD_LINE_ENABLE 	true       //N2 G0 X2

//=======================================================================
//                      CRC switch
//check the CRC, after '*'
//=======================================================================
#define COMMAND_CRC_ENABLE  	true       //N2 G0 X2 *23


//=======================================================================
//                      Clear to send
//	After process one command, send "ok" back.
//=======================================================================
#define	CMD_PROCESS_CLEAR_SEND	true

//=======================================================================
//                      Need resend command when
//  1.command unknown
//	2.error on line number or CRC
//=======================================================================
#define	CMD_REQUEST_RESEND		true



//=======================================================================
//                      comment mode switch
//
//  ignore the command starting with ";"
//=======================================================================
#define COMMAND_COMMENT_MODE  	true       //;N2 G0 X2 *23


//=======================================================================
//                      Command Buffer
//
//=======================================================================
#define MAX_CMD_SIZE        80      //length of each buffer
#define CMD_BUF_SIZE        5       //how many buffers


#endif

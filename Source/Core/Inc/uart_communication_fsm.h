/*
 * uart_communication_fsm.h
 *
 *  Created on: Nov 20, 2022
 *      Author: Admin
 */

#ifndef INC_UART_COMMUNICATION_FSM_H_
#define INC_UART_COMMUNICATION_FSM_H_

#define INIT 0

#define RST 1
#define SEND 2
#define WAIT 3

void uart_communication_fsm();

#endif /* INC_UART_COMMUNICATION_FSM_H_ */

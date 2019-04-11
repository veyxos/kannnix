#include "mini_uart.h"

void kernel_main(void) {
	uart_init();
	uart_send_string("\"Portability is for people who cannot write new programs.\"\r\n- Linus Torvalds, 29.01.1992\r\n");

	while (1) {
		uart_send(uart_recv());
	}
}
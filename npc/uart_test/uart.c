#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0x00)

void main() {
  *(volatile char *)(UART_BASE + UART_TX) = 'A';
  *(volatile char *)(UART_BASE + UART_TX) = '\n';
  while (1);
}
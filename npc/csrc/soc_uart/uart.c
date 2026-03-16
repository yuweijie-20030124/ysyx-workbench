#define UART_BASE 0x10000000L
#define UART_TX   (UART_BASE + 0x00)

typedef unsigned char uint8_t;

int main() {
  // 输出字符 'A'
  *(volatile uint8_t *)UART_TX = 'A';
  
  // // 输出换行符
  // *(volatile uint8_t *)UART_TX = '\n';
  
  // 无限循环
  while (1);
  
  return 0;
}

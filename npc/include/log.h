#ifndef LOG_H__
#define LOG_H__

void init_log(const char *log_file);

bool log_enable();

void assert_fail_msg();

#endif
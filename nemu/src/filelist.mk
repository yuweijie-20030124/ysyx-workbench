#***************************************************************************************
# Copyright (c) 2014-2024 Zihao Yu, Nanjing University
#
# NEMU is licensed under Mulan PSL v2.
# You can use this software according to the terms and conditions of the Mulan PSL v2.
# You may obtain a copy of Mulan PSL v2 at:
#          http://license.coscl.org.cn/MulanPSL2
#
# THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
# EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
# MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
#
# See the Mulan PSL v2 for more details.
#**************************************************************************************/
#默认包含的源代码
SRCS-y += src/nemu-main.c
#默认包含的目录
DIRS-y += src/cpu src/monitor src/utils
#在系统模式下包含的目录
DIRS-$(CONFIG_MODE_SYSTEM) += src/memory
#在AM目标下排除的目录
DIRS-BLACKLIST-$(CONFIG_TARGET_AM) += src/monitor/sdb

#根据configtargetshare决定是否生成共享库
SHARE = $(if $(CONFIG_TARGET_SHARE),1,0)
LIBS += $(if $(CONFIG_TARGET_NATIVE_ELF),-lreadline -ldl -pie,)

ifdef mainargs
ASFLAGS += -DBIN_PATH=\"$(mainargs)\"
endif
SRCS-$(CONFIG_TARGET_AM) += src/am-bin.S
.PHONY: src/am-bin.S

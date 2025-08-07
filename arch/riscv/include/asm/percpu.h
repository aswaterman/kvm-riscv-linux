/* SPDX-License-Identifier: GPL-2.0-or-later */
/*
 * Copyright (C) 2025 SiFive
 */

#ifndef __ASM_RISCV_PERCPU_H
#define __ASM_RISCV_PERCPU_H

#ifdef CONFIG_SMP

#ifndef __ASSEMBLY__

#include <asm/thread_info.h>
#include <asm/current.h>

#define __my_cpu_offset (((struct thread_info *)current)->pcpu_offset)

#endif

#endif

#include <asm-generic/percpu.h>

#endif /* __ASM_RISCV_PERCPU_H */

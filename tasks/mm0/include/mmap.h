/*
 * Prototypes for mmap/munmap functions that do the actual work.
 *
 * Copyright (C) 2007 Bahadir Balban
 */
#ifndef __MM0_MMAP_H__
#define __MM0_MMAP_H__

#include <task.h>
#include <vm_area.h>

/* POSIX-defined mmap flags */
#define PROT_READ	0x1
#define PROT_WRITE	0x2
#define PROT_EXEC	0x4
#define PROT_NONE	0x0

#define MAP_ANONYMOUS	0x20
#define MAP_FIXED	0x10
#define MAP_SHARED	0x01
#define MAP_PRIVATE	0x02

int do_munmap(void *vaddr, unsigned long size, struct tcb *task);

int do_mmap(struct vm_file *mapfile, unsigned long f_offset, struct tcb *t,
	    unsigned long map_address, unsigned int flags, unsigned int pages);

int mmap_address_validate(unsigned long map_address, unsigned int vm_flags);

#endif /* __MM0_MMAP_H__ */

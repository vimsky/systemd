/* SPDX-License-Identifier: LGPL-2.1+ */
#pragma once

/***
  This file is part of systemd.

  Copyright 2015 Lennart Poettering
***/

#include <stdbool.h>
#include <sys/types.h>

#include "cgroup-util.h"

int chown_cgroup(pid_t pid, CGroupUnified unified_requested, uid_t uid_shift);
int sync_cgroup(pid_t pid, CGroupUnified unified_requested, uid_t uid_shift);
int create_subcgroup(pid_t pid, CGroupUnified unified_requested);

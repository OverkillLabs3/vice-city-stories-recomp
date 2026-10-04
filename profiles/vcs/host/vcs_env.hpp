#pragma once

#include <cstdlib>

// Environment variables never change while the game runs, but getenv() scans the whole
// environment on every call and several diagnostics checks sit on per-syscall and per-draw
// paths. Read each one once per call site.
#define VCS_ENV(name) ([]() noexcept -> const char * { static const char *const value = std::getenv(name); return value; }())

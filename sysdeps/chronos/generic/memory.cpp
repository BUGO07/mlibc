#include <chronos/syscall.hpp>
#include <errno.h>
#include <mlibc/all-sysdeps.hpp>
#include <mlibc/debug.hpp>
#include <stdint.h>

namespace mlibc {

int sys_anon_allocate([[maybe_unused]] size_t size, [[maybe_unused]] void **ptr) {
	// auto res = chronos_syscall(SYSCALL_ANON_ALLOC, size);
	// if (res.error != SYSCALL_ERR_NONE)
	//     return syscall_err_to_errno(res.error);

	// *ptr = (void*) res.value;

	return 0;
}

int sys_anon_free([[maybe_unused]] void *pointer, [[maybe_unused]] size_t size) {
	// return syscall_err_to_errno((syscall2(SYSCALL_ANON_FREE, (uint64_t) pointer, size).error));
	return 0;
}

} // namespace mlibc

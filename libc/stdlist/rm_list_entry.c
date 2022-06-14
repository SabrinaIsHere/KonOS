#include <stdlist.h>
#include <errno.h>

//#define get_pointer(index) ((void*) (curr_list.addr + ((index) * curr_list.entry_size)))

extern std_list_t curr_list;
extern int errno = 0;

int rm_list_entry(uint32_t index)) {
	i_ptr = get_list_ptr(index);
	if (errno != 0) {
		pritnf("%s\n", strerror(errno));
		return errno;
	}

	// This works for now but should probably not use the function at some point in the future
	unsigned int i;
	for (i = index + 1; i < cur_list.length; i++) {
		copy_list_entry(i, i - 1);
	}
}
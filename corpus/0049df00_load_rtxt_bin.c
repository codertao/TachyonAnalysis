
/* RTXT: read whole file (alloc tag arg), then markup_rtxtbin_as_ptrs. Returns the buffer */

int load_rtxt_bin(undefined4 file_name,undefined4 flags_or_key_or_other)

{
  int iVar1;
  
  iVar1 = load_a_file_probably(file_name);
  if (iVar1 == 0) {
    return 0;
  }
  mark_alloc_memory_with_flags(iVar1,flags_or_key_or_other);
  markup_rtxtbin_as_ptrs(iVar1);
  return iVar1;
}


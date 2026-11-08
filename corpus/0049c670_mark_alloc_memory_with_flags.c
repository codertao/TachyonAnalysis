
void mark_alloc_memory_with_flags(int mem,uint flags)

{
  if ((mem != 0) && (flags < 0x1000000)) {
    *(uint *)(mem + -0xc) = flags;
  }
  return;
}


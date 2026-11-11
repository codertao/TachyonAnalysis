
/* Font_Load then tag both buffers with mark_alloc_memory_with_flags */

void __cdecl Font_LoadTagged(char *src,void *font,int flags,uint memTag)

{
  undefined1 *puVar1;
  
  puVar1 = &stack0xfffffffc;
  Font_Load(src,font,(byte)flags);
  mark_alloc_memory_with_flags(**(undefined4 **)(puVar1 + 0xc),*(undefined4 *)(puVar1 + 0x14));
  mark_alloc_memory_with_flags
            (*(undefined4 *)(*(int *)(puVar1 + 0xc) + 4),*(undefined4 *)(puVar1 + 0x14));
  return;
}


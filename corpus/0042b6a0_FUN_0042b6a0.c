
void FUN_0042b6a0(void)

{
  void *pvVar1;
  void *node;
  
  node = DAT_005b01d0;
  if (DAT_005b01d0 == (void *)0x0) {
    DAT_005b01d0 = (void *)0x0;
    return;
  }
  do {
    pvVar1 = *(void **)((int)node + 8);
    FUN_004281a0((int)node + 0x1c,*(undefined4 *)((int)node + 0x18),
                 *(undefined4 *)((int)node + 0x9c),*(undefined4 *)((int)node + 0xa0),
                 *(undefined4 *)((int)node + 0xa4),*(undefined4 *)((int)node + 0xa8),
                 *(undefined4 *)((int)node + 0xac));
    List_Remove(node,&DAT_005b01d0);
    Pool_Free((Pool *)&DAT_005b01ac,node);
    node = pvVar1;
  } while (pvVar1 != (void *)0x0);
  DAT_005b01d0 = pvVar1;
  return;
}


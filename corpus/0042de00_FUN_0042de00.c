
void FUN_0042de00(void)

{
  void *node;
  
  if ((DAT_005b11c0 != 0) && (DAT_005b11c0 = DAT_005b11c0 + -1, DAT_005b11c0 == 0)) {
    FUN_00427c70();
  }
  node = DAT_005b01d4;
  if ((DAT_005b11b8 == 0) && (DAT_005b01d4 != (void *)0x0)) {
    if (*(int *)((int)DAT_005b01d4 + 0xb0) != 0) {
      *(int *)((int)DAT_005b01d4 + 0xb0) = *(int *)((int)DAT_005b01d4 + 0xb0) + -1;
      return;
    }
    FUN_00427c90((int)DAT_005b01d4 + 0x1c);
    List_Remove(node,&DAT_005b01d4);
    Pool_Free((Pool *)&DAT_005b01ac,node);
    DAT_005b11c0 = 0xfa;
  }
  return;
}


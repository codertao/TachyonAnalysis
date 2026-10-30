
int FUN_004dedc4(void)

{
  int in_EAX;
  int iVar1;
  undefined4 *puVar2;
  
  puVar2 = &DAT_004c9402;
  iVar1 = 0x18;
  while (puVar2[4] != in_EAX) {
    puVar2 = puVar2 + 0x10;
    iVar1 = iVar1 + -1;
    if (iVar1 == 0) {
      puVar2 = &DAT_004c9a02;
      iVar1 = 0x18;
      do {
        if (puVar2[4] == in_EAX) {
          return in_EAX;
        }
        puVar2 = puVar2 + 0x10;
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      return 0;
    }
  }
  *(undefined1 *)((int)puVar2 + 0x3e) = 1;
  FUN_004dee48();
  puVar2 = &DAT_004ca002;
  iVar1 = 0x18;
  do {
    if (puVar2[4] == in_EAX) {
      FUN_004dee48();
      puVar2[2] = puVar2[0xd];
      return in_EAX;
    }
    puVar2 = puVar2 + 0xf;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return in_EAX;
}


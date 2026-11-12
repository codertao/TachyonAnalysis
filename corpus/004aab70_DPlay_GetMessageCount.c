
/* refine: slot 0x50, IDirectPlay3A::GetMessageCount (Netsock: stub) */

int * DPlay_GetMessageCount(void)

{
  int *piVar1;
  undefined1 local_8 [8];
  
  if (DAT_0055e3e0 == 0) {
    return (int *)0x0;
  }
  piVar1 = DAT_005b9af4;
  (**(code **)(*DAT_005b9af4 + 0x44))(DAT_005b9af4,DAT_0055e3fc,local_8);
  return piVar1;
}


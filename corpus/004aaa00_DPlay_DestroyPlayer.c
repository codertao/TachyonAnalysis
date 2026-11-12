
/* refine: slot 0x4c */

undefined4 DPlay_DestroyPlayer(void)

{
  undefined4 uVar1;
  
  if (DAT_0055e3e0 == 0) {
    return 0;
  }
  uVar1 = (**(code **)(*DAT_005b9af4 + 0x24))(DAT_005b9af4,DAT_0055e3fc);
  return uVar1;
}


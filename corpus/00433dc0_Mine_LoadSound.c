
/* sweep */

void Mine_LoadSound(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x150) != '\0') && (*(int *)(param_1 + 0x170) == 0)) {
    uVar1 = SndTrig_Preload(param_1 + 0x150,&DAT_005a61e0);
    *(undefined4 *)(param_1 + 0x170) = uVar1;
  }
  return;
}


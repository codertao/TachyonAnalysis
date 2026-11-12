
/* sweep */

void Course_LoadSound(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0x108) != '\0') && (*(int *)(param_1 + 0x128) == 0)) {
    uVar1 = SndTrig_Preload(param_1 + 0x108,&DAT_005a61e0);
    *(undefined4 *)(param_1 + 0x128) = uVar1;
  }
  return;
}


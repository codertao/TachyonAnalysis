
/* sweep */

void DelaySnd_QueueCallback(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = DelaySnd_AllocSlot();
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 4) = param_2;
    *(undefined4 *)(iVar1 + 0x38) = param_1;
  }
  return;
}


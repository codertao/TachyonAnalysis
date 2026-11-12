
/* sweep */

void DelaySnd_Queue(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (0x1f < (uint)param_1[2]) {
    iVar1 = DelaySnd_AllocSlot();
    if (iVar1 != 0) {
      puVar3 = (undefined4 *)(iVar1 + 8);
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar3 = *param_1;
        param_1 = param_1 + 1;
        puVar3 = puVar3 + 1;
      }
      *(undefined4 *)(iVar1 + 4) = param_2;
      *(undefined4 *)(iVar1 + 0x38) = 0;
    }
  }
  return;
}


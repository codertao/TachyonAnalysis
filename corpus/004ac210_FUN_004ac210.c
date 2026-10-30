
void FUN_004ac210(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 uint *param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  
  if (DAT_00604494 == 0) {
    if ((DAT_004e4a28 & 8) == 0) {
      uVar4 = param_5[1] >> 8;
    }
    else {
      uVar4 = *param_5;
    }
    FUN_004e4ecf(param_1,param_2,param_3,param_4,uVar4);
    return;
  }
  if (*(int *)(DAT_00604504 + 0x1c) == 0) {
    if ((DAT_004e4a28 & 8) != 0) {
      iVar5 = DAT_004e4a34;
      if ((DAT_004e4a28 & 0x2200000) != 0) {
        iVar5 = DAT_004e4a2c << 0x18;
      }
      (*DAT_00604554)(param_1,param_2,param_3,param_5,DAT_004e4a28,iVar5);
      return;
    }
    puVar1 = (undefined1 *)((int)param_5 + 7);
    puVar2 = (undefined1 *)((int)param_5 + 6);
    puVar3 = (undefined1 *)((int)param_5 + 5);
    param_5 = (uint *)(uint)CONCAT12(*puVar3,CONCAT11(*puVar2,*puVar1));
    (*DAT_00604550)(param_1,param_2,param_3,param_5,DAT_004e4a28,DAT_004e4a34);
  }
  return;
}

